//
//  Fruit.hpp
//  KinectProject
//
//  Created by Sam Amant on 26/10/2018.
//

#ifndef Fruit_hpp
#define Fruit_hpp

#include <stdio.h>
#include "ofMain.h"

class Fruit {
public:
    Fruit(int kind);
    void update();
    void draw();
    void hide();
    ofColor color;
    int radius;
    ofVec2f location;
    
private:
    ofVec2f speed;
    int kind;
    bool visible;
};

#endif /* Fruit */

