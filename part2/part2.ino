#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioMixer4              mixer11; //xy=191.50000762939453,961.7500038146973
AudioMixer4              mixer12; //xy=191.50000762939453,1028.7500038146973
AudioMixer4              mixer10; //xy=192.50000762939453,893.7500038146973
AudioMixer4              mixer8;         //xy=193.75000762939453,735.0000286102295
AudioMixer4              mixer5;         //xy=194.75000381469727,506.25000762939453
AudioMixer4              mixer4;         //xy=195.75000381469727,442.25000762939453
AudioMixer4              mixer7;         //xy=195.00000381469727,667.5000133514404
AudioMixer4              mixer6;         //xy=195.75000381469727,572.2500076293945
AudioMixer4              mixer2;         //xy=197,298
AudioMixer4              mixer9;         //xy=195.00000762939453,803.7500286102295
AudioMixer4              mixer3;         //xy=197,365
AudioMixer4              mixer1;         //xy=198,230
AudioSynthWaveform       lfo;      //xy=383.25000762939453,104.50000190734863
AudioSynthWaveformModulated sawtooth;   //xy=392.25000762939453,368.00000381469727
AudioSynthWaveformModulated square;   //xy=397.50000762939453,552.5000076293945
AudioFilterStateVariable filter;        //xy=404.25003814697266,843.2500133514404
AudioMixer4              mixer20; //xy=571.2500152587891,731.250020980835
AudioMixer4              mixer19; //xy=572.5000114440918,663.7500057220459
AudioMixer4              mixer21; //xy=572.5000152587891,800.000020980835
AudioMixer4              mixer17; //xy=574.5000114440918,512.5000286102295
AudioMixer4              mixer14; //xy=575.5000076293945,283.75000762939453
AudioMixer4              mixer13; //xy=576.5000076293945,219.75000762939453
AudioMixer4              mixer16; //xy=575.7500076293945,445.00001335144043
AudioMixer4              mixer15; //xy=576.5000076293945,349.75000762939453
AudioMixer4              mixer18; //xy=575.7500114440918,581.2500286102295
AudioSynthWaveformDc     keyboardCV;            //xy=576.25,908.75
AudioSynthWaveformDc     keyboardGate;            //xy=576.2500076293945,965.0000143051147
AudioSynthWaveformDc     dc1;            //xy=761.2500114440918,315.0000047683716
AudioRecordQueue         envelopeGateInput;         //xy=815.0000152587891,266.2500190734863
AudioEffectMultiply      multiply1;      //xy=816.2500114440918,653.7500095367432
AudioEffectEnvelope      envelope1;      //xy=905.0000190734863,316.25001430511475
AudioMixer4              mixer23; //xy=1058.7500038146973,518.7500152587891
AudioMixer4              mixer22; //xy=1060,451.25
AudioMixer4              mixer24; //xy=1060.0000038146973,587.5000152587891
AudioOutputI2S           i2s1;           //xy=1237.2500228881836,587.2500076293945
AudioConnection          patchCord1(mixer11, 0, mixer12, 3);
AudioConnection          patchCord2(mixer12, 0, filter, 1);
AudioConnection          patchCord3(mixer10, 0, mixer12, 2);
AudioConnection          patchCord4(mixer8, 0, mixer9, 3);
AudioConnection          patchCord5(mixer5, 0, mixer6, 3);
AudioConnection          patchCord6(mixer4, 0, mixer6, 2);
AudioConnection          patchCord7(mixer7, 0, mixer9, 2);
AudioConnection          patchCord8(mixer6, 0, square, 0);
AudioConnection          patchCord9(mixer2, 0, mixer3, 3);
AudioConnection          patchCord10(mixer9, 0, filter, 0);
AudioConnection          patchCord11(mixer3, 0, sawtooth, 0);
AudioConnection          patchCord12(mixer1, 0, mixer3, 2);
AudioConnection          patchCord13(lfo, 0, mixer1, 0);
AudioConnection          patchCord14(lfo, 0, mixer4, 0);
AudioConnection          patchCord15(lfo, 0, mixer7, 0);
AudioConnection          patchCord16(lfo, 0, mixer10, 0);
AudioConnection          patchCord17(lfo, 0, mixer13, 0);
AudioConnection          patchCord18(lfo, 0, mixer16, 0);
AudioConnection          patchCord19(lfo, 0, mixer19, 0);
AudioConnection          patchCord20(lfo, 0, mixer22, 0);
AudioConnection          patchCord21(sawtooth, 0, mixer1, 1);
AudioConnection          patchCord22(sawtooth, 0, mixer4, 1);
AudioConnection          patchCord23(sawtooth, 0, mixer7, 1);
AudioConnection          patchCord24(sawtooth, 0, mixer10, 1);
AudioConnection          patchCord25(sawtooth, 0, mixer13, 1);
AudioConnection          patchCord26(sawtooth, 0, mixer16, 1);
AudioConnection          patchCord27(sawtooth, 0, mixer19, 1);
AudioConnection          patchCord28(sawtooth, 0, mixer22, 1);
AudioConnection          patchCord29(square, 0, mixer1, 2);
AudioConnection          patchCord30(square, 0, mixer4, 2);
AudioConnection          patchCord31(square, 0, mixer7, 2);
AudioConnection          patchCord32(square, 0, mixer10, 2);
AudioConnection          patchCord33(square, 0, mixer13, 2);
AudioConnection          patchCord34(square, 0, mixer16, 2);
AudioConnection          patchCord35(square, 0, mixer19, 2);
AudioConnection          patchCord36(square, 0, mixer22, 2);
AudioConnection          patchCord37(filter, 0, mixer1, 3);
AudioConnection          patchCord38(filter, 0, mixer4, 3);
AudioConnection          patchCord39(filter, 0, mixer7, 3);
AudioConnection          patchCord40(filter, 0, mixer10, 3);
AudioConnection          patchCord41(filter, 0, mixer13, 3);
AudioConnection          patchCord42(filter, 0, mixer16, 3);
AudioConnection          patchCord43(filter, 0, mixer19, 3);
AudioConnection          patchCord44(filter, 0, mixer22, 3);
AudioConnection          patchCord45(mixer20, 0, mixer21, 3);
AudioConnection          patchCord46(mixer19, 0, mixer21, 2);
AudioConnection          patchCord47(mixer21, 0, multiply1, 1);
AudioConnection          patchCord48(mixer17, 0, mixer18, 3);
AudioConnection          patchCord49(mixer14, 0, mixer15, 3);
AudioConnection          patchCord50(mixer13, 0, mixer15, 2);
AudioConnection          patchCord51(mixer16, 0, mixer18, 2);
AudioConnection          patchCord52(mixer15, envelopeGateInput);
AudioConnection          patchCord53(mixer18, 0, multiply1, 0);
AudioConnection          patchCord54(keyboardCV, 0, mixer2, 2);
AudioConnection          patchCord55(keyboardCV, 0, mixer5, 2);
AudioConnection          patchCord56(keyboardCV, 0, mixer11, 2);
AudioConnection          patchCord57(keyboardCV, 0, mixer8, 2);
AudioConnection          patchCord58(keyboardCV, 0, mixer14, 2);
AudioConnection          patchCord59(keyboardCV, 0, mixer17, 2);
AudioConnection          patchCord60(keyboardCV, 0, mixer20, 2);
AudioConnection          patchCord61(keyboardCV, 0, mixer23, 2);
AudioConnection          patchCord62(keyboardGate, 0, mixer2, 3);
AudioConnection          patchCord63(keyboardGate, 0, mixer5, 3);
AudioConnection          patchCord64(keyboardGate, 0, mixer8, 3);
AudioConnection          patchCord65(keyboardGate, 0, mixer11, 3);
AudioConnection          patchCord66(keyboardGate, 0, mixer14, 3);
AudioConnection          patchCord67(keyboardGate, 0, mixer17, 3);
AudioConnection          patchCord68(keyboardGate, 0, mixer20, 3);
AudioConnection          patchCord69(keyboardGate, 0, mixer23, 3);
AudioConnection          patchCord70(dc1, envelope1);
AudioConnection          patchCord71(multiply1, 0, mixer2, 1);
AudioConnection          patchCord72(multiply1, 0, mixer5, 1);
AudioConnection          patchCord73(multiply1, 0, mixer8, 1);
AudioConnection          patchCord74(multiply1, 0, mixer11, 1);
AudioConnection          patchCord75(multiply1, 0, mixer14, 1);
AudioConnection          patchCord76(multiply1, 0, mixer17, 1);
AudioConnection          patchCord77(multiply1, 0, mixer20, 1);
AudioConnection          patchCord78(multiply1, 0, mixer23, 1);
AudioConnection          patchCord79(envelope1, 0, mixer2, 0);
AudioConnection          patchCord80(envelope1, 0, mixer5, 0);
AudioConnection          patchCord81(envelope1, 0, mixer8, 0);
AudioConnection          patchCord82(envelope1, 0, mixer11, 0);
AudioConnection          patchCord83(envelope1, 0, mixer14, 0);
AudioConnection          patchCord84(envelope1, 0, mixer17, 0);
AudioConnection          patchCord85(envelope1, 0, mixer20, 0);
AudioConnection          patchCord86(envelope1, 0, mixer23, 0);
AudioConnection          patchCord87(mixer23, 0, mixer24, 3);
AudioConnection          patchCord88(mixer22, 0, mixer24, 2);
AudioConnection          patchCord89(mixer24, 0, i2s1, 0);
AudioConnection          patchCord90(mixer24, 0, i2s1, 1);
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

  Serial.begin(9600);

  MIDI.begin(MIDI_CHANNEL_OMNI);
  
  square.begin(0.5, 440, WAVEFORM_SQUARE);
  sawtooth.begin(0.5, 440, WAVEFORM_SAWTOOTH);
  lfo.begin(0.5, 0.1, WAVEFORM_SINE);
  filter.octaveControl(4);

  mixer1.gain(0,0.2);
  mixer1.gain(1,0.2);
  mixer1.gain(2,1.0);
  mixer1.gain(3,1.0);
  mixer2.gain(0,1.0);
  mixer2.gain(1,0.2);
  mixer2.gain(2,1.0);
  mixer2.gain(3,1.0);
  mixer3.gain(0,0.2);
  mixer3.gain(1,1.0);
  mixer3.gain(2,0.2);
  mixer3.gain(3,0.2);
  mixer4.gain(0,0.2);
  mixer4.gain(1,1.0);
  mixer4.gain(2,0.2);
  mixer4.gain(3,1.0);
  mixer5.gain(0,1.0);
  mixer5.gain(1,0.2);
  mixer5.gain(2,1.0);
  mixer5.gain(3,1.0);
  mixer6.gain(0,1.0);
  mixer6.gain(1,0.2);
  mixer6.gain(2,1.0);
  mixer6.gain(3,1.0);
  mixer7.gain(0,1.0);
  mixer7.gain(1,0.2);
  mixer7.gain(2,1.0);
  mixer7.gain(3,1.0);
  mixer8.gain(0,0.2);
  mixer8.gain(1,1.0);
  mixer8.gain(2,0.2);
  mixer8.gain(3,0.2);
  mixer9.gain(0,1.0);
  mixer9.gain(1,1.0);
  mixer9.gain(2,1.0);
  mixer9.gain(3,1.0);
  mixer10.gain(0,0.2);
  mixer10.gain(1,0.2);
  mixer10.gain(2,1.0);
  mixer10.gain(3,0.2);
  mixer11.gain(0,0.2);
  mixer11.gain(1,1.0);
  mixer11.gain(2,1.0);
  mixer11.gain(3,1.0);
  mixer12.gain(0,0.2);
  mixer12.gain(1,1.0);
  mixer12.gain(2,0.2);
  mixer12.gain(3,0.2);
  mixer13.gain(0,0.2);
  mixer13.gain(1,0.4);
  mixer13.gain(2,0.4);
  mixer13.gain(3,1.0);
  mixer14.gain(0,0.4);
  mixer14.gain(1,1.0);
  mixer14.gain(2,1.0);
  mixer14.gain(3,1.0);
  mixer15.gain(0,0.4);
  mixer15.gain(1,1.0);
  mixer15.gain(2,0.4);
  mixer15.gain(3,1.0);
  mixer16.gain(0,1.0);
  mixer16.gain(1,0.4);
  mixer16.gain(2,1.0);
  mixer16.gain(3,0.4);
  mixer17.gain(0,0.4);
  mixer17.gain(1,1.0);
  mixer17.gain(2,1.0);
  mixer17.gain(3,1.0);
  mixer18.gain(0,1.0);
  mixer18.gain(1,0.4);
  mixer18.gain(2,1.0);
  mixer18.gain(3,1.0);
  mixer19.gain(0,1.0);
  mixer19.gain(1,0.4);
  mixer19.gain(2,0.4);
  mixer19.gain(3,1.0);
  mixer20.gain(0,0.4);
  mixer20.gain(1,1.0);
  mixer20.gain(2,1.0);
  mixer20.gain(3,0.4);
  mixer21.gain(0,1.0);
  mixer21.gain(1,1.0);
  mixer21.gain(2,1.0);
  mixer21.gain(3,0.4);
  mixer22.gain(0,1.0);
  mixer22.gain(1,1.0);
  mixer22.gain(2,1.0);
  mixer22.gain(3,1.0);
  mixer23.gain(0,1.0);
  mixer23.gain(1,1.0);
  mixer23.gain(2,1.0);
  mixer23.gain(3,1.0);
  mixer24.gain(0,1.0);
  mixer24.gain(1,1.0);
  mixer24.gain(2,1.0);
  mixer24.gain(3,1.0);
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
          sawtooth.frequency(map(analogRead(17),0,1023,50,440));
          //updatePatchCables();
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
  //Serial.println(AudioMemoryUsageMax());
}

void updatePatchCables() {
//  finalStage.gain(0, patchConnections[0][4] ? 1 : 0);
//  finalStage.gain(1, patchConnections[0][5] ? 1 : 0);
//  finalStage.gain(2, patchConnections[0][6] ? 1 : 0);
//  finalStage.gain(3, patchConnections[0][7] ? 1 : 0);
//  oscFrequency.gain(0, patchConnections[1][4] ? 1 : 0);
//  oscFrequency.gain(1, patchConnections[1][5] ? 1 : 0);
//  oscFrequency.gain(2, patchConnections[1][6] ? 1 : 0);
//  oscFrequency.gain(3, patchConnections[1][7] ? 1 : 0);
//  filterInput.gain(0, patchConnections[2][4] ? 1 : 0);
//  filterInput.gain(1, patchConnections[2][5] ? 1 : 0);
//  filterInput.gain(2, patchConnections[2][6] ? 1 : 0);
//  filterInput.gain(3, patchConnections[2][7] ? 1 : 0);
//  filterFreq.gain(0, patchConnections[3][4] ? 1 : 0);
//  filterFreq.gain(1, patchConnections[3][5] ? 1 : 0);
//  filterFreq.gain(2, patchConnections[3][6] ? 1 : 0);
//  filterFreq.gain(3, patchConnections[3][7] ? 1 : 0);
}

