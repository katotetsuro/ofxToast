//
//  ofxToast.h
//  emptyExample
//
//  Created by Kato Tetsuro on 12/08/05.
//
//

#ifndef emptyExample_ofxToast_h
#define emptyExample_ofxToast_h

#include "ofMain.h"
#include "ToastMessage.h"

class ofxToast {
private:
    vector<ToastMessage> messages;
public:
    ofxToast();
    void addText(string message);
    void update(ofEventArgs &e);
    void draw(ofEventArgs &e);
};

#endif
