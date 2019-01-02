#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioMixer4              oscFrequency;         //xy=271,338
AudioMixer4              filterFreq;         //xy=270,628
AudioMixer4              filterInput;         //xy=272,534
AudioSynthWaveform       lfo;      //xy=457,92
AudioFilterStateVariable filter;        //xy=468,587
AudioSynthWaveformModulated square;   //xy=472,262
AudioSynthWaveformModulated sawtooth;   //xy=476,418
AudioMixer4              finalStage;         //xy=970,349
AudioOutputI2S           i2s1;           //xy=1136,351
AudioConnection          patchCord1(oscFrequency, 0, square, 0);
AudioConnection          patchCord2(oscFrequency, 0, sawtooth, 0);
AudioConnection          patchCord3(filterFreq, 0, filter, 1);
AudioConnection          patchCord4(filterInput, 0, filter, 0);
AudioConnection          patchCord5(lfo, 0, finalStage, 0);
AudioConnection          patchCord6(lfo, 0, oscFrequency, 0);
AudioConnection          patchCord7(lfo, 0, filterInput, 0);
AudioConnection          patchCord8(lfo, 0, filterFreq, 0);
AudioConnection          patchCord9(filter, 0, finalStage, 3);
AudioConnection          patchCord10(filter, 0, oscFrequency, 3);
AudioConnection          patchCord11(filter, 0, filterInput, 3);
AudioConnection          patchCord12(filter, 0, filterFreq, 3);
AudioConnection          patchCord13(square, 0, finalStage, 1);
AudioConnection          patchCord14(square, 0, oscFrequency, 1);
AudioConnection          patchCord15(square, 0, filterInput, 1);
AudioConnection          patchCord16(square, 0, filterFreq, 1);
AudioConnection          patchCord17(sawtooth, 0, finalStage, 2);
AudioConnection          patchCord18(sawtooth, 0, oscFrequency, 2);
AudioConnection          patchCord19(sawtooth, 0, filterInput, 2);
AudioConnection          patchCord20(sawtooth, 0, filterFreq, 2);
AudioConnection          patchCord21(finalStage, 0, i2s1, 0);
AudioConnection          patchCord22(finalStage, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1122,137
// GUItool: end automatically generated code


#include <MIDI.h>
MIDI_CREATE_INSTANCE(HardwareSerial, Serial1, MIDI);

const int MUX_SEND_PINS[] = {2,3,4};
const int MUX_RECEIVE_PINS[] = {5,6,7};
const int CONNECTION_DATA_PINS[] = {8, 14};
const int CONNECTION_SEND_PINS[] = {10, 12};
const int KEYBOARD_PIN = 16;

boolean patchConnections[16][16];

void setup() {
  // put your setup code here, to run once:

  AudioMemory(150);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.2);
  
  for(int i=0;i<3;i++) {
    pinMode(MUX_SEND_PINS[i], OUTPUT);
    pinMode(MUX_RECEIVE_PINS[i], OUTPUT);
  }
  pinMode(CONNECTION_DATA_PINS[0], INPUT_PULLUP);
  pinMode(CONNECTION_DATA_PINS[1], INPUT_PULLUP);
  pinMode(KEYBOARD_PIN, INPUT_PULLUP);

  Serial.begin(9600);

  MIDI.begin(MIDI_CHANNEL_OMNI);
  
  square.begin(0.5, 440, WAVEFORM_SQUARE);
  sawtooth.begin(0.5, 440, WAVEFORM_SAWTOOTH);
  lfo.begin(0.5, 5, WAVEFORM_SINE);
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
          updatePatchCables();
          if(!digitalRead(KEYBOARD_PIN)) {
            //float freq = pow(2.0, (j-0.0)/12.0) * 440.0;
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
          //float freq = pow(2.0, (note-49.0)/12.0) * 440.0;
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

void updatePatchCables() {
  finalStage.gain(0, patchConnections[0][4] ? 1 : 0);
  finalStage.gain(1, patchConnections[0][5] ? 1 : 0);
  finalStage.gain(2, patchConnections[0][6] ? 1 : 0);
  finalStage.gain(3, patchConnections[0][7] ? 1 : 0);
  oscFrequency.gain(0, patchConnections[1][4] ? 1 : 0);
  oscFrequency.gain(1, patchConnections[1][5] ? 1 : 0);
  oscFrequency.gain(2, patchConnections[1][6] ? 1 : 0);
  oscFrequency.gain(3, patchConnections[1][7] ? 1 : 0);
  filterInput.gain(0, patchConnections[2][4] ? 1 : 0);
  filterInput.gain(1, patchConnections[2][5] ? 1 : 0);
  filterInput.gain(2, patchConnections[2][6] ? 1 : 0);
  filterInput.gain(3, patchConnections[2][7] ? 1 : 0);
  filterFreq.gain(0, patchConnections[3][4] ? 1 : 0);
  filterFreq.gain(1, patchConnections[3][5] ? 1 : 0);
  filterFreq.gain(2, patchConnections[3][6] ? 1 : 0);
  filterFreq.gain(3, patchConnections[3][7] ? 1 : 0);
}

