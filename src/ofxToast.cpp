 //
//  ofxToast.cpp
//  emptyExample
//
//  Created by Kato Tetsuro on 12/08/05.
//
//

#include "ofxToast.h"

ofxToast::ofxToast() {
    ofAddListener(ofEvents().update, this, &ofxToast::update);
    ofAddListener(ofEvents().draw, this, &ofxToast::draw);
}

void ofxToast::addText(string message) {
    messages.push_back(ToastMessage(message));
}

void ofxToast::update(ofEventArgs &e) {
    for (vector<ToastMessage>::iterator it=messages.begin();
         it!=messages.end();) {
        it->update();
        if (it->isFinished()) {
            it = messages.erase(it);
        } else {
            ++it;
        }
    }
}

void ofxToast::draw(ofEventArgs &e) {
    for (vector<ToastMessage>::iterator it=messages.begin();
         it!=messages.end(); ++it) {
        it->draw();
    }
}