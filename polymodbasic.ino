#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

#include <MIDI.h>
MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

AudioControlSGTL5000 sgtl;
AudioOutputI2S mainOutput;
AudioAmplifier finalStage;
AudioConnection con1(finalStage,0,mainOutput,0);
AudioConnection con2(finalStage,0,mainOutput,1);
AudioConnection* dynamicConnections[16];

AudioSynthWaveformModulated module_oscillatorSquare;
AudioSynthWaveformModulated module_oscillatorSaw;

const int MUX_SEND_PINS[] = {2,3,4};
const int MUX_RECEIVE_PINS[] = {5,6,7};
const int CONNECTION_DATA_PINS[] = {8, 14};
const int CONNECTION_SEND_PINS[] = {10, 12};
const int KEYBOARD_PIN = 16;

boolean patchConnections[16][16];

void setup() {
  // put your setup code here, to run once:

  AudioMemory(20);
  sgtl.enable();
  sgtl.volume(0.2);
  
  for(int i=0;i<3;i++) {
    pinMode(MUX_SEND_PINS[i], OUTPUT);
    pinMode(MUX_RECEIVE_PINS[i], OUTPUT);
  }
  pinMode(CONNECTION_DATA_PINS[0], INPUT_PULLUP);
  pinMode(CONNECTION_DATA_PINS[1], INPUT_PULLUP);
  pinMode(KEYBOARD_PIN, INPUT_PULLUP);

  Serial.begin(9600);

  MIDI.begin(MIDI_CHANNEL_OMNI);
  
  Serial.println("initialising...");
  module_oscillatorSaw.begin(0.3,220,WAVEFORM_SAWTOOTH);
  delay(500);
  dynamicConnections[0] = new AudioConnection(module_oscillatorSaw, 0, finalStage, 0);
  Serial.println("audio connection!");
}

unsigned long t=0;

void loop() {
  // put your main code here, to run repeatedly:

  boolean connectionReading;
  for(int a=0;a<2;a++) {
    if(a==0) {
      pinMode(CONNECTION_SEND_PINS[0], OUTPUT);
      pinMode(CONNECTION_SEND_PINS[1], INPUT);
    } else {
      pinMode(CONNECTION_SEND_PINS[1], OUTPUT);
      pinMode(CONNECTION_SEND_PINS[0], INPUT);
    }
    digitalWrite(CONNECTION_SEND_PINS[a], LOW);
    
    for(int i=0;i<8;i++) {
      digitalWrite(MUX_SEND_PINS[0], bitRead(i,0));
      digitalWrite(MUX_SEND_PINS[1], bitRead(i,1));
      digitalWrite(MUX_SEND_PINS[2], bitRead(i,2));

      for(int b=0;b<2;b++) {
  
        for(int j=0;j<8;j++) {
          digitalWrite(MUX_RECEIVE_PINS[0], bitRead(j,0));
          digitalWrite(MUX_RECEIVE_PINS[1], bitRead(j,1));
          digitalWrite(MUX_RECEIVE_PINS[2], bitRead(j,2));
    
          delayMicroseconds(10);
          int pin1 = i + a*8;
          int pin2 = j + b*8;
          if(pin1 < pin2) {
            connectionReading = !digitalRead(CONNECTION_DATA_PINS[b]);
            if(connectionReading != patchConnections[pin1][pin2]) {
              patchConnections[pin1][pin2] = connectionReading;
              if(connectionReading) {
                Serial.print(pin1);
                Serial.print(" connected to ");
                Serial.println(pin2);
              } else {
                Serial.print(pin1);
                Serial.print(" disconnected from ");
                Serial.println(pin2);
              }
            }
          }
          if(!digitalRead(KEYBOARD_PIN)) {
            float freq = pow(2.0, (j-0.0)/12.0) * 440.0;
            module_oscillatorSaw.frequency(freq);
          }
        }
      }
    }
  }

  int note, velocity, channel, d1, d2;
  if (MIDI.read()) {                    // Is there a MIDI message incoming ?
    byte type = MIDI.getType();
    switch (type) {
      case midi::NoteOn:
        note = MIDI.getData1();
        velocity = MIDI.getData2();
        channel = MIDI.getChannel();
        if (velocity > 0) {
          Serial.println(String("Note On:  ch=") + channel + ", note=" + note + ", velocity=" + velocity);
          float freq = pow(2.0, (note-49.0)/12.0) * 440.0;
          //saw.frequency(freq);
        } else {
          Serial.println(String("Note Off: ch=") + channel + ", note=" + note);
        }
        break;
      case midi::NoteOff:
        note = MIDI.getData1();
        velocity = MIDI.getData2();
        channel = MIDI.getChannel();
        Serial.println(String("Note Off: ch=") + channel + ", note=" + note + ", velocity=" + velocity);
        break;
      default:
        d1 = MIDI.getData1();
        d2 = MIDI.getData2();
        Serial.println(String("Message, type=") + type + ", data = " + d1 + " " + d2);
    }
    t = millis();
  }
  if (millis() - t > 10000) {
    t += 10000;
    //Serial.println("(inactivity)");
  }
}

