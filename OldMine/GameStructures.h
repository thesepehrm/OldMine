//
//  GameStructures.h
//  OldMine
//
//  Created by Sepehr on 12/26/17.
//  Copyright © 2017 Mohammadi.io. All rights reserved.
//

#ifndef GameStructures_h
#define GameStructures_h

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GLUT/gl.h>
#endif
#include <vector>
using namespace std;


struct Point {
    float x;
    float y;
    float z;
};

struct Color {
    GLubyte red;
    GLubyte blue;
    GLubyte green;
};

struct Block {
    Point center;
    Color color;
};

struct Pillar {
    vector<Block> blocks;
};

struct Chunk {
    vector<Pillar> pillars;
};


struct RenderOptions {
    int drawdistance = 10;
    bool anti_aliasing = false;
    int FOV = 45;
    
};




#endif /* GameStructures_h */
