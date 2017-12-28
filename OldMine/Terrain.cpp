//
//  Terrain.cpp
//  OldMine
//
//  Created by Sepehr on 12/26/17.
//  Copyright © 2017 Mohammadi.io. All rights reserved.
//

#include <iostream>
#include "Terrain.h"

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GLUT/gl.h>
#endif
using namespace std;

Terrain::Terrain()
{
    Terrain(time_t(NULL));
}

Terrain::Terrain(int seed)
{
    this->seed = seed;
    srand(seed);
    map = vector<Chunk>();
}

Pillar* Terrain::generatePillar(float x, float z)
{
    Pillar *pl = new Pillar();
    for (float y=0;y<rand() % 3 + height; y++)
        pl->blocks.push_back({{x,y,z},{150,150,150}});
    return pl;
}
Chunk* Terrain::generateChunk()
{
    
}
void Terrain::generateTerrain()
{
    
}
