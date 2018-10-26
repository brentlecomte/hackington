#include "ofApp.h"
#include "Fruit.hpp"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
}

void ofApp::keyPressed(int key){
    if (key == OF_KEY_LEFT){
        fruits.push_back(new Fruit(0));
    }
    if (key == OF_KEY_UP) {
        fruits.push_back(new Fruit(1));
    }
    if (key == OF_KEY_RIGHT) {
        fruits.push_back(new Fruit(2));
    }
    if (key == OF_KEY_DOWN) {
        fruits.push_back(new Fruit(3));
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < fruits.size(); i++) {
        fruits[i]->update();
        if (ofDist(mouseX,mouseY, fruits[i]->location.x,fruits[i]->location.y) <= fruits[i]->radius) {
            fruits[i]->hide();
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushStyle();
    for (int i = 0; i < fruits.size(); i++) {
        fruits[i]->draw();
    }
    ofPopStyle();
}

