//
//  CubeModel.cpp
//  GLFWCameraView
//
//  Created by Felipe Rubin on 03/06/18.
//  Copyright © 2018 Felipe Rubin. All rights reserved.
//

#include "CubeModel.h"
const int vCubeSize = 72;
const int tCubeSize = 72;
GLfloat vCube[72] = {
    -1, -1, -1,   -1, -1,  1,   -1,  1,  1,   -1,  1, -1,
    1, -1, -1,    1, -1,  1,    1,  1,  1,    1,  1, -1,
    -1, -1, -1,   -1, -1,  1,    1, -1,  1,    1, -1, -1,
    -1,  1, -1,   -1,  1,  1,    1,  1,  1,    1,  1, -1,
    -1, -1, -1,   -1,  1, -1,    1,  1, -1,    1, -1, -1,
    -1, -1,  1,   -1,  1,  1,    1,  1,  1,    1, -1,  1
};

GLfloat tCube[72] = {
    0,0,0, 0,1,0, 1,0,0, 1,1,0,
    0,0,0, 0,1,0, 1,0,0, 1,1,0,
    0,0,0, 0,1,0, 1,0,0, 1,1,0,
    0,0,0, 0,1,0, 1,0,0, 1,1,0,
    0,0,0, 0,1,0, 1,0,0, 1,1,0,
    0,0,0, 0,1,0, 1,0,0, 1,1,0
};















