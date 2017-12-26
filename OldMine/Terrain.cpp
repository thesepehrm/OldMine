//
//  Terrain.cpp
//  OldMine
//
//  Created by Sepehr on 12/26/17.
//  Copyright © 2017 Mohammadi.io. All rights reserved.
//

#include <iostream>
#include "Terrain.h"
using namespace std;

Terrain::Terrain()
{
    Terrain(time_t(NULL));
}

Terrain::Terrain(int seed)
{
    this->seed = seed;
    srand(seed);
}

