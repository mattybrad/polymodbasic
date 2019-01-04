#include "AudioConnections.h"

AudioMixer4 *inputMixers[2][8][3] = {
  {
    {&sawtoothMixerA1,&sawtoothMixerB1,&sawtoothMixerC1},
    {&squareMixerA1,&squareMixerB1,&squareMixerC1},
    {&filterMixerA1,&filterMixerB1,&filterMixerC1},
    {&filterFreqMixerA1,&filterFreqMixerB1,&filterFreqMixerC1},
    {&ampMixerA1,&ampMixerB1,&ampMixerC1},
    {&ampControlMixerA1,&ampControlMixerB1,&ampControlMixerC1},
    {&envelopeMixerA1,&envelopeMixerB1,&envelopeMixerC1},
    {&mainMixerA1,&mainMixerB1,&mainMixerC1}
  },{
    {&sawtoothMixerA2,&sawtoothMixerB2,&sawtoothMixerC2},
    {&squareMixerA2,&squareMixerB2,&squareMixerC2},
    {&filterMixerA2,&filterMixerB2,&filterMixerC2},
    {&filterFreqMixerA2,&filterFreqMixerB2,&filterFreqMixerC2},
    {&ampMixerA2,&ampMixerB2,&ampMixerC2},
    {&ampControlMixerA2,&ampControlMixerB2,&ampControlMixerC2},
    {&envelopeMixerA2,&envelopeMixerB2,&envelopeMixerC2},
    {&mainMixerA2,&mainMixerB2,&mainMixerC2}
  }
};

#include <MIDI.h>
MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

const int MUX_SEND_PINS[] = {2,3,4};
const int MUX_RECEIVE_PINS[] = {5,6,7};
const int CONNECTION_DATA_PINS[] = {8, 14};
const int CONNECTION_SEND_PINS[] = {10, 12};
const int KEYBOARD_PIN = 16;
const int ANALOG_PIN = 17;
const int ERROR_LED_PIN = 20;

boolean patchConnections[16][16];

void setup() {
  // put your setup code here, to run once:

  AudioMemory(80);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.2);
  
  for(int i=0;i<3;i++) {
    pinMode(MUX_SEND_PINS[i], OUTPUT);
    pinMode(MUX_RECEIVE_PINS[i], OUTPUT);
  }
  pinMode(CONNECTION_DATA_PINS[0], INPUT_PULLUP);
  pinMode(CONNECTION_DATA_PINS[1], INPUT_PULLUP);
  pinMode(KEYBOARD_PIN, INPUT_PULLUP);
  pinMode(ERROR_LED_PIN, OUTPUT);

  Serial.begin(9600);

  MIDI.begin(MIDI_CHANNEL_OMNI);
  
  square1.begin(0.2, 110, WAVEFORM_SQUARE);
  sawtooth1.begin(0.2, 110, WAVEFORM_SAWTOOTH);
  lfo1.begin(0.5, 0.1, WAVEFORM_SINE);
  filter1.octaveControl(4);

  square2.begin(0.2, 110, WAVEFORM_SQUARE);
  sawtooth2.begin(0.2, 110, WAVEFORM_SAWTOOTH);
  lfo2.begin(0.5, 0.1, WAVEFORM_SINE);
  filter2.octaveControl(4);
  
  polyMixer.gain(0,1.0);
  polyMixer.gain(1,1.0);
}

unsigned long t=0;

void loop() {
  // put your main code here, to run repeatedly:

  boolean connectionReading;
  boolean anyBadConnections = false;
  
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
          checkMidi();
          
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
            if(connectionReading) {
              if(connectionReading && pin1 <= 7 && pin2 >= 8) {
                // new connection valid (output to input)
                inputMixers[0][pin2-8][pin1/4]->gain(pin1%4,1.0);
                inputMixers[1][pin2-8][pin1/4]->gain(pin1%4,1.0);
              } else {
                // new connection not valid (output to output or input to input)
                anyBadConnections = true;
              }
            } else {
              if(pin1 <= 7 && pin2 >= 8) { 
                inputMixers[0][pin2-8][pin1/4]->gain(pin1%4,0.0);
                inputMixers[1][pin2-8][pin1/4]->gain(pin1%4,0.0);
              }
            }
          }
          //sawtooth1.frequency(map(analogRead(17),0,1023,50,440));
          //updatePatchCables();
          if(!digitalRead(KEYBOARD_PIN)) {
            float freq = pow(2.0, (j-24)/12.0) * 440.0;
            sawtooth1.frequency(freq);
            square1.frequency(freq);
          }
        }
      }
    }
  }
  digitalWrite(ERROR_LED_PIN, anyBadConnections);

  Serial.println(AudioMemoryUsageMax());
}

void checkMidi() {
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
          //float freq = pow(2.0, (note-49.0)/12.0) * 440.0;
          float freq = pow(2.0, (note-49)/12.0) * 440.0;
            sawtooth1.frequency(freq);
            square1.frequency(freq);
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

