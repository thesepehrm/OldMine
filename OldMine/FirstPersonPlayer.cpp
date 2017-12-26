//
//  FirstPersonPlayer.cpp
//  OldMine
//
//  Created by Sepehr on 12/26/17.
//  Copyright © 2017 Mohammadi.io. All rights reserved.
//

#include "FirstPersonPlayer.h"
#include <math.h>

// Constructor

FirstPersonPlayer::FirstPersonPlayer()
{
    this->options = RenderOptions();
    this->position = {0,0,0};
    this->center_eye = {0,0,0};
}

// Player Actions
bool FirstPersonPlayer::isColliding(Point targetPos, float size_x, float size_y, float size_z)
{
    if ( abs(targetPos.x - this->position.x) < (size_x + this->size_x) )
        if ( abs(targetPos.y - this->position.y) < (size_y + this->size_y) )
            if ( abs(targetPos.z - this->position.z) < (size_z + this->size_z) )
                return true;
    return false;
}






// Get and Set functions

void FirstPersonPlayer::setPos(Point pos)
{
    this->position = pos;
}

void FirstPersonPlayer::setEyeCenter(Point pos)
{
    this->center_eye = pos;
}

void FirstPersonPlayer::setLife(float life)
{
    this->life = life;
}

void FirstPersonPlayer::setSpeed(float speed)
{
    this->speed = speed;
}

void FirstPersonPlayer::setJumpHeight(float jump_height)
{
    this->jump_height = jump_height;
}

void FirstPersonPlayer::setPlayerSize(int width, int height)
{
    this->size_x = width;
    this->size_y = height;
}


Point FirstPersonPlayer::getPos()
{
    return this->position;
}

Point FirstPersonPlayer::getEyeCenter()
{
    return this->center_eye;
}

float FirstPersonPlayer::getLife()
{
    return this->life;
}

float FirstPersonPlayer::getSpeed()
{
    return this->speed;
}

float FirstPersonPlayer::getJumpHeight()
{
    return this->jump_height;
}



