#include <iostream>
#include "funcs.h"
#include <math.h>

int main()
{
  Coord3D pointP = {10, 20, 30};
  Coord3D pointP2 = {100, 200, 300};
  std::cout << "TASK A \n" << "pointP: {" << pointP.x << " " << pointP.y << " " << pointP.z << "}" << std::endl;

  std::cout << "Distance from origin: " << length(&pointP) << std::endl; // would print 37.4166, rounded version of 37.416574
  bool t = fabs(length(&pointP) - 37.416574 ) < 0.000001; //the difference is smaller than 1 millionth
  std::cout << t << " " << fabs(length(&pointP) - 37.416574 );

  std::cout << "\n\n---------------------------------------------\n\n" << &pointP << " "; // << pointP2 << "\n";
  Coord3D * test = fartherFromOrigin(&pointP, &pointP2);
  std::cout << test;

  std::cout << "\n\n---------------------------------------------\n\n";
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
  // prints: 2 -10 100.4
  return 0;
}
