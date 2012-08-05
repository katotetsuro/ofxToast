//
//  ToastMessage.h
//  emptyExample
//
//  Created by Kato Tetsuro on 12/08/05.
//
//

#ifndef __emptyExample__ToastMessage__
#define __emptyExample__ToastMessage__

#include "ofMain.h"

class ToastMessage {
private:
    static ofTrueTypeFont font;
    static const int DURATION = 1000;
    int startTime;
    string message;
    int alpha;
    bool finished;
    float x, y;
    
public:
    ToastMessage(string message);
    void update();
    void draw();
    bool isFinished() { return finished; }
};

#endif /* defined(__emptyExample__ToastMessage__) */
