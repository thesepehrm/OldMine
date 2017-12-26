//
//  FirstPersonPlayer.h
//  OldMine
//
//  Created by Sepehr on 12/26/17.
//  Copyright © 2017 Mohammadi.io. All rights reserved.
//

#ifndef FirstPersonPlayer_h
#define FirstPersonPlayer_h

#include "GameStructures.h"

class FirstPersonPlayer
{
    // Camera Features
    Point position;
    Point center_eye;
    
    // Render Features
    RenderOptions options;
    
    // Player Features
    float jump_hight = 3; // Blocks
    float speed = 2; // Block per second
    float life = 5; // Hearts
    
    
public:
    FirstPersonPlayer();
    
    void setPos(Point);
    void setEyeCenter(Point);
    void setJumpHeight(float);
    void setLife(float);
    void setSpeed(float);
    
    Point getPos();
    Point getEyeCenter();
    float getJumpHeight();
    float getLife();
    float getSpeed();
    
    
};


#endif /* FirstPersonPlayer_h */
