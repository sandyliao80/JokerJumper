//
//  Constants.h
//  JokerJumper
//
//  Created by Sun on 3/7/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

//Pixel to metres ratio. Box2D uses metres as the unit for measurement.
//This ratio defines how many pixels correspond to 1 Box2D "metre"
//Box2D is optimized for objects of 1x1 metre therefore it makes sense
//to define the ratio so that your most common object type is 1x1 metre.
#define PTM_RATIO 32

typedef enum {
    kGameObjectNone,
    kGameObjectCoin,
    kGameObjectJoker,
    kGameObjectPlatform,
    kGameObjectCoin1,
    kGameObjectCoin2,
    kGameObjectCoin3,
    kGameObjectFly
} GameObjectType;


//BOOL jokerJumping;