#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioMixer4              filterFreqMixerB1;        //xy=165.83335876464844,894.916675567627
AudioMixer4              filterFreqMixerC1;        //xy=165.83335876464844,961.916675567627
AudioMixer4              filterFreqMixerA1;        //xy=166.83335876464844,826.916675567627
AudioMixer4              filterMixerB1;         //xy=167.83335876464844,668.916675567627
AudioMixer4              squareMixerB1;         //xy=168.83335876464844,439.91667556762695
AudioMixer4              squareMixerA1;         //xy=169.83335876464844,375.91667556762695
AudioMixer4              squareMixerC1;         //xy=169.83335876464844,505.91667556762695
AudioMixer4              filterMixerA1;         //xy=169.83335876464844,600.916675567627
AudioMixer4              sawtoothMixerB1;         //xy=171.83335876464844,231.91667556762695
AudioMixer4              filterMixerC1;         //xy=169.83335876464844,736.916675567627
AudioMixer4              sawtoothMixerC1;         //xy=171.83335876464844,298.91667556762695
AudioMixer4              sawtoothMixerA1;         //xy=172.83335876464844,163.91667556762695
AudioMixer4              filterFreqMixerB2; //xy=166.66665649414062,1840.333293914795
AudioMixer4              filterFreqMixerC2; //xy=166.66665649414062,1907.333293914795
AudioMixer4              filterFreqMixerA2; //xy=167.66665649414062,1772.333293914795
AudioMixer4              filterMixerB2; //xy=168.66665649414062,1614.333293914795
AudioMixer4              squareMixerB2; //xy=169.66665649414062,1385.333293914795
AudioMixer4              squareMixerA2; //xy=170.66665649414062,1321.333293914795
AudioMixer4              squareMixerC2; //xy=170.66665649414062,1451.333293914795
AudioMixer4              filterMixerA2; //xy=170.66665649414062,1546.333293914795
AudioMixer4              sawtoothMixerB2; //xy=172.66665649414062,1177.333293914795
AudioMixer4              filterMixerC2; //xy=170.66665649414062,1682.333293914795
AudioMixer4              sawtoothMixerC2; //xy=172.66665649414062,1244.333293914795
AudioMixer4              sawtoothMixerA2; //xy=173.66665649414062,1109.333293914795
AudioSynthWaveform       lfo1;            //xy=357.83335876464844,37.91667556762695
AudioSynthWaveform       lfo2; //xy=358.6666564941406,983.3332939147949
AudioSynthWaveformModulated sawtooth1;       //xy=366.83335876464844,301.91667556762695
AudioSynthWaveformModulated sawtooth2; //xy=367.6666564941406,1247.333293914795
AudioSynthWaveformModulated square1;         //xy=371.83335876464844,485.91667556762695
AudioSynthWaveformModulated square2; //xy=372.6666564941406,1431.333293914795
AudioFilterStateVariable filter1;         //xy=378.83335876464844,776.916675567627
AudioFilterStateVariable filter2; //xy=379.6666564941406,1722.333293914795
AudioMixer4              ampControlMixerB1;        //xy=545.8333587646484,664.916675567627
AudioMixer4              ampControlMixerA1;        //xy=546.8333587646484,596.916675567627
AudioMixer4              ampControlMixerC1;        //xy=546.8333587646484,733.916675567627
AudioMixer4              ampMixerB1;        //xy=548.8333587646484,445.91667556762695
AudioMixer4              envelopeMixerB1;        //xy=549.8333587646484,216.91667556762695
AudioMixer4              ampMixerA1;        //xy=549.8333587646484,378.91667556762695
AudioMixer4              envelopeMixerA1;        //xy=550.8333587646484,152.91667556762695
AudioMixer4              ampMixerC1;        //xy=549.8333587646484,514.916675567627
AudioMixer4              envelopeMixerC1;        //xy=550.8333587646484,282.91667556762695
AudioMixer4              ampControlMixerB2; //xy=546.6666564941406,1610.333293914795
AudioMixer4              ampControlMixerA2; //xy=547.6666564941406,1542.333293914795
AudioSynthWaveformDc     keyboardCV1;     //xy=550.8333587646484,841.916675567627
AudioMixer4              ampControlMixerC2; //xy=547.6666564941406,1679.333293914795
AudioSynthWaveformDc     keyboardGate1;   //xy=550.8333587646484,898.916675567627
AudioMixer4              ampMixerB2; //xy=549.6666564941406,1391.333293914795
AudioMixer4              envelopeMixerB2; //xy=550.6666564941406,1162.333293914795
AudioMixer4              ampMixerA2; //xy=550.6666564941406,1324.333293914795
AudioMixer4              envelopeMixerA2; //xy=551.6666564941406,1098.333293914795
AudioMixer4              ampMixerC2; //xy=550.6666564941406,1460.333293914795
AudioMixer4              envelopeMixerC2; //xy=551.6666564941406,1228.333293914795
AudioSynthWaveformDc     keyboardCV2; //xy=551.6666564941406,1787.333293914795
AudioSynthWaveformDc     keyboardGate2; //xy=551.6666564941406,1844.333293914795
AudioSynthWaveformDc     dc1;            //xy=735.8333587646484,248.91667556762695
AudioSynthWaveformDc     dc2; //xy=736.6666564941406,1194.333293914795
AudioRecordQueue         envelopeGateInput1; //xy=789.8333587646484,199.91667556762695
AudioEffectMultiply      multiply1;      //xy=790.8333587646484,586.916675567627
AudioRecordQueue         envelopeGateInput2; //xy=790.6666564941406,1145.333293914795
AudioEffectMultiply      multiply2; //xy=791.6666564941406,1532.333293914795
AudioEffectEnvelope      envelope1;      //xy=879.8333587646484,249.91667556762695
AudioEffectEnvelope      envelope2; //xy=880.6666564941406,1195.333293914795
AudioMixer4              mainMixerB1;        //xy=1032.8333587646484,451.91667556762695
AudioMixer4              mainMixerA1;        //xy=1034.8333587646484,384.91667556762695
AudioMixer4              mainMixerC1;        //xy=1034.8333587646484,520.916675567627
AudioMixer4              mainMixerB2; //xy=1033.6666564941406,1397.333293914795
AudioMixer4              mainMixerA2; //xy=1035.6666564941406,1330.333293914795
AudioMixer4              mainMixerC2; //xy=1035.6666564941406,1466.333293914795
AudioMixer4              polyMixer;        //xy=1393.333351135254,993.3332901000977
AudioOutputI2S           i2s1;           //xy=1590.166690826416,996.749997138977
AudioConnection          patchCord1(filterFreqMixerB1, 0, filterFreqMixerC1, 3);
AudioConnection          patchCord2(filterFreqMixerC1, 0, filter1, 1);
AudioConnection          patchCord3(filterFreqMixerA1, 0, filterFreqMixerC1, 2);
AudioConnection          patchCord4(filterMixerB1, 0, filterMixerC1, 3);
AudioConnection          patchCord5(squareMixerB1, 0, squareMixerC1, 3);
AudioConnection          patchCord6(squareMixerA1, 0, squareMixerC1, 2);
AudioConnection          patchCord7(squareMixerC1, 0, square1, 0);
AudioConnection          patchCord8(filterMixerA1, 0, filterMixerC1, 2);
AudioConnection          patchCord9(sawtoothMixerB1, 0, sawtoothMixerC1, 3);
AudioConnection          patchCord10(filterMixerC1, 0, filter1, 0);
AudioConnection          patchCord11(sawtoothMixerC1, 0, sawtooth1, 0);
AudioConnection          patchCord12(sawtoothMixerA1, 0, sawtoothMixerC1, 2);
AudioConnection          patchCord13(filterFreqMixerB2, 0, filterFreqMixerC2, 3);
AudioConnection          patchCord14(filterFreqMixerC2, 0, filter2, 1);
AudioConnection          patchCord15(filterFreqMixerA2, 0, filterFreqMixerC2, 2);
AudioConnection          patchCord16(filterMixerB2, 0, filterMixerC2, 3);
AudioConnection          patchCord17(squareMixerB2, 0, squareMixerC2, 3);
AudioConnection          patchCord18(squareMixerA2, 0, squareMixerC2, 2);
AudioConnection          patchCord19(squareMixerC2, 0, square2, 0);
AudioConnection          patchCord20(filterMixerA2, 0, filterMixerC2, 2);
AudioConnection          patchCord21(sawtoothMixerB2, 0, sawtoothMixerC2, 3);
AudioConnection          patchCord22(filterMixerC2, 0, filter2, 0);
AudioConnection          patchCord23(sawtoothMixerC2, 0, sawtooth2, 0);
AudioConnection          patchCord24(sawtoothMixerA2, 0, sawtoothMixerC2, 2);
AudioConnection          patchCord25(lfo1, 0, sawtoothMixerA1, 0);
AudioConnection          patchCord26(lfo1, 0, squareMixerA1, 0);
AudioConnection          patchCord27(lfo1, 0, filterMixerA1, 0);
AudioConnection          patchCord28(lfo1, 0, filterFreqMixerA1, 0);
AudioConnection          patchCord29(lfo1, 0, envelopeMixerA1, 0);
AudioConnection          patchCord30(lfo1, 0, ampMixerA1, 0);
AudioConnection          patchCord31(lfo1, 0, ampControlMixerA1, 0);
AudioConnection          patchCord32(lfo1, 0, mainMixerA1, 0);
AudioConnection          patchCord33(lfo2, 0, sawtoothMixerA2, 0);
AudioConnection          patchCord34(lfo2, 0, squareMixerA2, 0);
AudioConnection          patchCord35(lfo2, 0, filterMixerA2, 0);
AudioConnection          patchCord36(lfo2, 0, filterFreqMixerA2, 0);
AudioConnection          patchCord37(lfo2, 0, envelopeMixerA2, 0);
AudioConnection          patchCord38(lfo2, 0, ampMixerA2, 0);
AudioConnection          patchCord39(lfo2, 0, ampControlMixerA2, 0);
AudioConnection          patchCord40(lfo2, 0, mainMixerA2, 0);
AudioConnection          patchCord41(sawtooth1, 0, sawtoothMixerA1, 1);
AudioConnection          patchCord42(sawtooth1, 0, squareMixerA1, 1);
AudioConnection          patchCord43(sawtooth1, 0, filterMixerA1, 1);
AudioConnection          patchCord44(sawtooth1, 0, filterFreqMixerA1, 1);
AudioConnection          patchCord45(sawtooth1, 0, envelopeMixerA1, 1);
AudioConnection          patchCord46(sawtooth1, 0, ampMixerA1, 1);
AudioConnection          patchCord47(sawtooth1, 0, ampControlMixerA1, 1);
AudioConnection          patchCord48(sawtooth1, 0, mainMixerA1, 1);
AudioConnection          patchCord49(sawtooth2, 0, sawtoothMixerA2, 1);
AudioConnection          patchCord50(sawtooth2, 0, squareMixerA2, 1);
AudioConnection          patchCord51(sawtooth2, 0, filterMixerA2, 1);
AudioConnection          patchCord52(sawtooth2, 0, filterFreqMixerA2, 1);
AudioConnection          patchCord53(sawtooth2, 0, envelopeMixerA2, 1);
AudioConnection          patchCord54(sawtooth2, 0, ampMixerA2, 1);
AudioConnection          patchCord55(sawtooth2, 0, ampControlMixerA2, 1);
AudioConnection          patchCord56(sawtooth2, 0, mainMixerA2, 1);
AudioConnection          patchCord57(square1, 0, sawtoothMixerA1, 2);
AudioConnection          patchCord58(square1, 0, squareMixerA1, 2);
AudioConnection          patchCord59(square1, 0, filterMixerA1, 2);
AudioConnection          patchCord60(square1, 0, filterFreqMixerA1, 2);
AudioConnection          patchCord61(square1, 0, envelopeMixerA1, 2);
AudioConnection          patchCord62(square1, 0, ampMixerA1, 2);
AudioConnection          patchCord63(square1, 0, ampControlMixerA1, 2);
AudioConnection          patchCord64(square1, 0, mainMixerA1, 2);
AudioConnection          patchCord65(square2, 0, sawtoothMixerA2, 2);
AudioConnection          patchCord66(square2, 0, squareMixerA2, 2);
AudioConnection          patchCord67(square2, 0, filterMixerA2, 2);
AudioConnection          patchCord68(square2, 0, filterFreqMixerA2, 2);
AudioConnection          patchCord69(square2, 0, envelopeMixerA2, 2);
AudioConnection          patchCord70(square2, 0, ampMixerA2, 2);
AudioConnection          patchCord71(square2, 0, ampControlMixerA2, 2);
AudioConnection          patchCord72(square2, 0, mainMixerA2, 2);
AudioConnection          patchCord73(filter1, 0, sawtoothMixerA1, 3);
AudioConnection          patchCord74(filter1, 0, squareMixerA1, 3);
AudioConnection          patchCord75(filter1, 0, filterMixerA1, 3);
AudioConnection          patchCord76(filter1, 0, filterFreqMixerA1, 3);
AudioConnection          patchCord77(filter1, 0, envelopeMixerA1, 3);
AudioConnection          patchCord78(filter1, 0, ampMixerA1, 3);
AudioConnection          patchCord79(filter1, 0, ampControlMixerA1, 3);
AudioConnection          patchCord80(filter1, 0, mainMixerA1, 3);
AudioConnection          patchCord81(filter2, 0, sawtoothMixerA2, 3);
AudioConnection          patchCord82(filter2, 0, squareMixerA2, 3);
AudioConnection          patchCord83(filter2, 0, filterMixerA2, 3);
AudioConnection          patchCord84(filter2, 0, filterFreqMixerA2, 3);
AudioConnection          patchCord85(filter2, 0, envelopeMixerA2, 3);
AudioConnection          patchCord86(filter2, 0, ampMixerA2, 3);
AudioConnection          patchCord87(filter2, 0, ampControlMixerA2, 3);
AudioConnection          patchCord88(filter2, 0, mainMixerA2, 3);
AudioConnection          patchCord89(ampControlMixerB1, 0, ampControlMixerC1, 3);
AudioConnection          patchCord90(ampControlMixerA1, 0, ampControlMixerC1, 2);
AudioConnection          patchCord91(ampControlMixerC1, 0, multiply1, 1);
AudioConnection          patchCord92(ampMixerB1, 0, ampMixerC1, 3);
AudioConnection          patchCord93(envelopeMixerB1, 0, envelopeMixerC1, 3);
AudioConnection          patchCord94(ampMixerA1, 0, ampMixerC1, 2);
AudioConnection          patchCord95(envelopeMixerA1, 0, envelopeMixerC1, 2);
AudioConnection          patchCord96(ampMixerC1, 0, multiply1, 0);
AudioConnection          patchCord97(envelopeMixerC1, envelopeGateInput1);
AudioConnection          patchCord98(ampControlMixerB2, 0, ampControlMixerC2, 3);
AudioConnection          patchCord99(ampControlMixerA2, 0, ampControlMixerC2, 2);
AudioConnection          patchCord100(keyboardCV1, 0, sawtoothMixerB1, 2);
AudioConnection          patchCord101(keyboardCV1, 0, squareMixerB1, 2);
AudioConnection          patchCord102(keyboardCV1, 0, filterFreqMixerB1, 2);
AudioConnection          patchCord103(keyboardCV1, 0, filterMixerB1, 2);
AudioConnection          patchCord104(keyboardCV1, 0, envelopeMixerB1, 2);
AudioConnection          patchCord105(keyboardCV1, 0, ampMixerB1, 2);
AudioConnection          patchCord106(keyboardCV1, 0, ampControlMixerB1, 2);
AudioConnection          patchCord107(keyboardCV1, 0, mainMixerB1, 2);
AudioConnection          patchCord108(ampControlMixerC2, 0, multiply2, 1);
AudioConnection          patchCord109(keyboardGate1, 0, sawtoothMixerB1, 3);
AudioConnection          patchCord110(keyboardGate1, 0, squareMixerB1, 3);
AudioConnection          patchCord111(keyboardGate1, 0, filterMixerB1, 3);
AudioConnection          patchCord112(keyboardGate1, 0, filterFreqMixerB1, 3);
AudioConnection          patchCord113(keyboardGate1, 0, envelopeMixerB1, 3);
AudioConnection          patchCord114(keyboardGate1, 0, ampMixerB1, 3);
AudioConnection          patchCord115(keyboardGate1, 0, ampControlMixerB1, 3);
AudioConnection          patchCord116(keyboardGate1, 0, mainMixerB1, 3);
AudioConnection          patchCord117(ampMixerB2, 0, ampMixerC2, 3);
AudioConnection          patchCord118(envelopeMixerB2, 0, envelopeMixerC2, 3);
AudioConnection          patchCord119(ampMixerA2, 0, ampMixerC2, 2);
AudioConnection          patchCord120(envelopeMixerA2, 0, envelopeMixerC2, 2);
AudioConnection          patchCord121(ampMixerC2, 0, multiply2, 0);
AudioConnection          patchCord122(envelopeMixerC2, envelopeGateInput2);
AudioConnection          patchCord123(keyboardCV2, 0, sawtoothMixerB2, 2);
AudioConnection          patchCord124(keyboardCV2, 0, squareMixerB2, 2);
AudioConnection          patchCord125(keyboardCV2, 0, filterFreqMixerB2, 2);
AudioConnection          patchCord126(keyboardCV2, 0, filterMixerB2, 2);
AudioConnection          patchCord127(keyboardCV2, 0, envelopeMixerB2, 2);
AudioConnection          patchCord128(keyboardCV2, 0, ampMixerB2, 2);
AudioConnection          patchCord129(keyboardCV2, 0, ampControlMixerB2, 2);
AudioConnection          patchCord130(keyboardCV2, 0, mainMixerB2, 2);
AudioConnection          patchCord131(keyboardGate2, 0, sawtoothMixerB2, 3);
AudioConnection          patchCord132(keyboardGate2, 0, squareMixerB2, 3);
AudioConnection          patchCord133(keyboardGate2, 0, filterMixerB2, 3);
AudioConnection          patchCord134(keyboardGate2, 0, filterFreqMixerB2, 3);
AudioConnection          patchCord135(keyboardGate2, 0, envelopeMixerB2, 3);
AudioConnection          patchCord136(keyboardGate2, 0, ampMixerB2, 3);
AudioConnection          patchCord137(keyboardGate2, 0, ampControlMixerB2, 3);
AudioConnection          patchCord138(keyboardGate2, 0, mainMixerB2, 3);
AudioConnection          patchCord139(dc1, envelope1);
AudioConnection          patchCord140(dc2, envelope2);
AudioConnection          patchCord141(multiply1, 0, sawtoothMixerB1, 1);
AudioConnection          patchCord142(multiply1, 0, squareMixerB1, 1);
AudioConnection          patchCord143(multiply1, 0, filterMixerB1, 1);
AudioConnection          patchCord144(multiply1, 0, filterFreqMixerB1, 1);
AudioConnection          patchCord145(multiply1, 0, envelopeMixerB1, 1);
AudioConnection          patchCord146(multiply1, 0, ampMixerB1, 1);
AudioConnection          patchCord147(multiply1, 0, ampControlMixerB1, 1);
AudioConnection          patchCord148(multiply1, 0, mainMixerB1, 1);
AudioConnection          patchCord149(multiply2, 0, sawtoothMixerB2, 1);
AudioConnection          patchCord150(multiply2, 0, squareMixerB2, 1);
AudioConnection          patchCord151(multiply2, 0, filterMixerB2, 1);
AudioConnection          patchCord152(multiply2, 0, filterFreqMixerB2, 1);
AudioConnection          patchCord153(multiply2, 0, envelopeMixerB2, 1);
AudioConnection          patchCord154(multiply2, 0, ampMixerB2, 1);
AudioConnection          patchCord155(multiply2, 0, ampControlMixerB2, 1);
AudioConnection          patchCord156(multiply2, 0, mainMixerB2, 1);
AudioConnection          patchCord157(envelope1, 0, sawtoothMixerB1, 0);
AudioConnection          patchCord158(envelope1, 0, squareMixerB1, 0);
AudioConnection          patchCord159(envelope1, 0, filterMixerB1, 0);
AudioConnection          patchCord160(envelope1, 0, filterFreqMixerB1, 0);
AudioConnection          patchCord161(envelope1, 0, envelopeMixerB1, 0);
AudioConnection          patchCord162(envelope1, 0, ampMixerB1, 0);
AudioConnection          patchCord163(envelope1, 0, ampControlMixerB1, 0);
AudioConnection          patchCord164(envelope1, 0, mainMixerB1, 0);
AudioConnection          patchCord165(envelope2, 0, sawtoothMixerB2, 0);
AudioConnection          patchCord166(envelope2, 0, squareMixerB2, 0);
AudioConnection          patchCord167(envelope2, 0, filterMixerB2, 0);
AudioConnection          patchCord168(envelope2, 0, filterFreqMixerB2, 0);
AudioConnection          patchCord169(envelope2, 0, envelopeMixerB2, 0);
AudioConnection          patchCord170(envelope2, 0, ampMixerB2, 0);
AudioConnection          patchCord171(envelope2, 0, ampControlMixerB2, 0);
AudioConnection          patchCord172(envelope2, 0, mainMixerB2, 0);
AudioConnection          patchCord173(mainMixerB1, 0, mainMixerC1, 3);
AudioConnection          patchCord174(mainMixerA1, 0, mainMixerC1, 2);
AudioConnection          patchCord175(mainMixerC1, 0, polyMixer, 0);
AudioConnection          patchCord176(mainMixerB2, 0, mainMixerC2, 3);
AudioConnection          patchCord177(mainMixerA2, 0, mainMixerC2, 2);
AudioConnection          patchCord178(mainMixerC2, 0, polyMixer, 1);
AudioConnection          patchCord179(polyMixer, 0, i2s1, 0);
AudioConnection          patchCord180(polyMixer, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=1590.166690826416,857.1666088104248
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
  
  square1.begin(0.5, 110, WAVEFORM_SQUARE);
  sawtooth1.begin(0.5, 110, WAVEFORM_SAWTOOTH);
  lfo1.begin(0.5, 0.1, WAVEFORM_SINE);
  filter1.octaveControl(4);
  
  polyMixer.gain(0,1.0);
  polyMixer.gain(1,0.0);
  
  sawtoothMixerA1.gain(0,1.0);
  sawtoothMixerA1.gain(1,0);
  sawtoothMixerA1.gain(2,0);
  sawtoothMixerA1.gain(3,0); 
  sawtoothMixerB1.gain(0,0);
  sawtoothMixerB1.gain(1,0);
  sawtoothMixerB1.gain(2,0);
  sawtoothMixerB1.gain(3,0);
  sawtoothMixerC1.gain(0,0);
  sawtoothMixerC1.gain(1,0);
  mainMixerA1.gain(0,0);
  mainMixerA1.gain(1,1.0);
  mainMixerA1.gain(2,0);
  mainMixerA1.gain(3,0); 
  mainMixerB1.gain(0,0);
  mainMixerB1.gain(1,0);
  mainMixerB1.gain(2,0);
  mainMixerB1.gain(3,0);
  mainMixerC1.gain(0,0);
  mainMixerC1.gain(1,0);
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
          sawtooth1.frequency(map(analogRead(17),0,1023,50,440));
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
  Serial.println(AudioMemoryUsageMax());
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

