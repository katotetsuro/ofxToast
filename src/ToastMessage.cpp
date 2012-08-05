//
//  ToastMessage.cpp
//  emptyExample
//
//  Created by Kato Tetsuro on 12/08/05.
//
//

#include "ToastMessage.h"

ofTrueTypeFont ToastMessage::font;

ToastMessage::ToastMessage(string _message) : message(_message) {
    if (!font.isLoaded()) {
        font.loadFont("verdana.ttf", 24);
    }
    startTime = ofGetElapsedTimeMillis();
    finished = false;
    x = (ofGetWidth() - font.stringWidth(message)) / 2;
    // todo: change y value corresponds to number of messages.
    y = ofGetHeight() * 2.f / 3;
}

void ToastMessage::update() {
    float elapsed = float(ofGetElapsedTimeMillis() - startTime) / DURATION;
    finished = elapsed >= 1.0f;
    alpha = ofClamp((1 - elapsed) * 255, 0, 255);
}

void ToastMessage::draw() {
    ofPushStyle();
    ofSetColor(ofColor::white, alpha);
    font.drawString(message, x, y);
    ofPopStyle();
}