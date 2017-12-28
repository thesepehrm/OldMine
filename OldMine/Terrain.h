//
//  Terrain.h
//  OldMine
//
//  Created by Sepehr on 12/26/17.
//  Copyright © 2017 Mohammadi.io. All rights reserved.
//

#ifndef Terrain_h
#define Terrain_h
#include <iostream>
#include <vector>
#include "GameStructures.h"

class Terrain {

    int seed;
    int chunk_size = 5;
    int update_size = 5;
    int height = 30; //blocks
    
    
    
    Pillar* generatePillar(float,float);
    Chunk* generateChunk(float,float);
    
public:
    vector<Chunk> map;
    Terrain();
    Terrain(int);
    
    void generateTerrain();
    
    
};

#endif /* Terrain_h */
