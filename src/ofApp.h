#pragma once
#include "ofMain.h"
#include "ofxKinect.h"
#include "Fruit.hpp"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    
    ofxKinect kinect;
    
    int closestX;
    int closestY;
    int closestZ;
    
    int easingX;
    int easingY;
    
    int oldX;
    int oldY;
    
    int lives;
    int score;
    
    ofSoundPlayer mySound;
    
    vector<Fruit *> fruits;
};
