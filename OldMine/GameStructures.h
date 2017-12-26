//
//  GameStructures.h
//  OldMine
//
//  Created by Sepehr on 12/26/17.
//  Copyright © 2017 Mohammadi.io. All rights reserved.
//

#ifndef GameStructures_h
#define GameStructures_h

struct Point {
    float x;
    float y;
    float z;
};

struct RenderOptions {
    int drawdistance = 10;
    bool anti_aliasing = false;
    int FOV = 45;
    
};


#endif /* GameStructures_h */
