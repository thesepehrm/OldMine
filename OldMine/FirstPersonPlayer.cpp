//
//  FirstPersonPlayer.cpp
//  OldMine
//
//  Created by Sepehr on 12/26/17.
//  Copyright © 2017 Mohammadi.io. All rights reserved.
//

#include <iostream>
#include "FirstPersonPlayer.h"

FirstPersonPlayer::FirstPersonPlayer()
{
    this->options = RenderOptions();
    this->position = {0,0,0};
    this->center_eye = {0,0,0};
}

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


