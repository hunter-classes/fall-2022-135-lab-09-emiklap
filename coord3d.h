#pragma once

class Coord3D {
public:
    double x;
    double y;
    double z;

    //Brayant's comments helped me with this part
    bool operator==(const Coord3D& otherCoord) const {
    return x == otherCoord.x && y == otherCoord.y && z == otherCoord.z;
  }
};
