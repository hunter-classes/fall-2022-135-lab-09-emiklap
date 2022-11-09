#include <iostream>
#include <math.h>
#include "funcs.h"

double length(Coord3D *p) {
    double point_x = p -> x;
    double point_y = p -> y;
    double point_z = p -> z;
    double distance = sqrt(pow(point_x, 2) + pow(point_y, 2) + pow(point_z, 2));
    return distance;
}

