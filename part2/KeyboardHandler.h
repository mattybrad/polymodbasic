#ifndef KeyboardHandler_h
#define KeyboardHandler_h
#include "Arduino.h"

class KeyboardChannel {
  public:
    KeyboardChannel();
    int note = -12;
    bool noteOn = false;
    int lastNoteOn = 0;
    int lastNoteOff = 0;
  private:
};

class KeyboardHandler {
  public:
    KeyboardHandler();
    void update();
    void setPolyphony(int polyphony);
    void setKey(int keyNum, boolean keyDown);
    int getNote(int channelIndex);
    boolean getGate(int channelIndex);
  private:
    boolean _keyStatus[128];
    boolean _prevKeyStatus[128];
    KeyboardChannel _channels[2]; // 4-note polyphony (max 4 simultaneous notes)
    int _polyphony = 2;
};

#endif
