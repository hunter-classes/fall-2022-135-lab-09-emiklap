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

Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    double distance1 = length(p1);
    double distance2 = length(p2);

    if (distance1 < distance2) {
        return p1;
    } else {
        return p2;
    }
}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {
    double point_x = ppos -> x;
    double point_y = ppos -> y;
    double point_z = ppos -> z;
    double vel_x = pvel -> x;
    double vel_y = pvel -> y;
    double vel_z = pvel -> z;

    point_x = point_x + vel_x * dt;
    point_y = point_y + vel_y * dt;
    point_z = point_z + vel_z * dt;

    ppos -> x = point_x;
    ppos -> y = point_y;
    ppos -> z = point_z;

    /*x' = x + vel.x * dt;
    y' = y + vel.x * dt;
    z' = z + vel.x * dt; */

}
