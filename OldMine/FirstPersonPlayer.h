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
    friend class Terrain;
    // Camera Features
    Point position;
    Point center_eye;
    
    // Render Features
    RenderOptions options;
    
    // Player Features
    float jump_height = 3; // Blocks
    float speed = 2; // Block per second
    float life = 5; // Hearts
    
    int size_x = 1; // width of the player
    int size_y = 2; // height of the player
    int size_z = 1; // depth of the player
    
    
    
public:
    FirstPersonPlayer();
    
    // Player actions
    bool isColliding(Point,float=1,float=1,float=1);
    
    
    // Get and Set functions
    void setPos(Point);
    void setEyeCenter(Point);
    void setJumpHeight(float);
    void setLife(float);
    void setSpeed(float);
    void setPlayerSize(int,int);
    
    Point getPos();
    Point getEyeCenter();
    float getJumpHeight();
    float getLife();
    float getSpeed();
    
    
    
};


#endif /* FirstPersonPlayer_h */
