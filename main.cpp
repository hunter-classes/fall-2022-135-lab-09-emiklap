#include <iostream>
#include "funcs.h"
#include <math.h>

int main()
{
  Coord3D pointP = {10, 20, 30};
  Coord3D pointP2 = {100, 200, 300};
  std::cout << "TASK A \n" << "pointP: {" << pointP.x << " " << pointP.y << " " << pointP.z << "}" << std::endl;

  std::cout << "Distance from origin: " << length(&pointP) << std::endl; // would print 37.4166, rounded version of 37.416574

  std::cout << "\n\n---------------------------------------------\nTASK B\n" << "This is the location of the smaller point: "
  << &pointP << "\n";
  Coord3D * test = fartherFromOrigin(&pointP, &pointP2);
  std::cout << "This is the return value of 'fartherFromOrigin(&pointP, &pointP2)': " << test;

  std::cout << "\n\n---------------------------------------------\nTASK C (see main.cpp for details)\n";
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  // prints: 2 -10 100.4

  std::cout << "\n---------------------------------------------\nTASK D (SEE POEM.CPP)";

  std::cout << "\n---------------------------------------------\nTASK E\n";
  double x, y, z;
  std::cout << "Enter position: ";
  std::cin >> x >> y >> z;
  Coord3D *ppos = createCoord3D(x,y,z);

  std::cout << "Enter velocity: ";
  std::cin >> x >> y >> z;
  Coord3D *pvel = createCoord3D(x,y,z);

  move(ppos, pvel, 10.0);

  std::cout << "Coordinates after 10 seconds: "
    << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);

  std::cout << "\n\n---------------------------------------------\n\n";
  return 0;
}
