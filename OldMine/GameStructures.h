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
    int x;
    int y;
    int z;
};

struct RenderOptions {
    int drawdistance = 10;
    bool anti-aliasing = false;
    int FOV = 45;
    
};


#endif /* GameStructures_h */
