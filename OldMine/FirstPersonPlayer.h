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
    
    
    
};


#endif /* FirstPersonPlayer_h */
