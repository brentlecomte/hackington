//
//  Fruit.cpp
//  KinectProject
//
//  Created by Sam Amant on 26/10/2018.
//

#include "Fruit.hpp"

ofColor color = (0, 255, 0);

Fruit::Fruit(int kind) {
    int locationX = ofRandom(20, ofGetWindowWidth()-20);
    switch (kind) {
        case 0:
            color = ofColor(255,255,0);
            break;
        case 1:
            color = ofColor(0,255,0);
            break;
        case 2:
            color = ofColor(255,140,0);
            break;
        case 3:
            color = ofColor(0,0,0);
            break;
        default:
            locationX = ofGetWindowWidth()/2;
            break;
    }
    visible = true;
    location = ofVec2f(
                       locationX,
                       0
                       );
    speed = ofVec2f(
                    0,
                    ofRandom(5,10)
                    );
    radius = ofRandom(20,30);
    
}

void Fruit::update() {
    location += speed;
}

void Fruit::draw() {
    if (visible) {
        ofSetColor(color);
        ofDrawCircle(location, radius);
    }
}

void Fruit::hide() {
    visible = false;
}
