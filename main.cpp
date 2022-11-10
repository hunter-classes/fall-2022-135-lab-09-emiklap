#include <iostream>
#include "funcs.h"
#include <math.h>

int main()
{
  Coord3D pointP = {10, 20, 30};
  Coord3D pointP2 = {100, 200, 300};
  std::cout << length(&pointP) << std::endl; // would print 37.4166
  bool t = fabs(length(&pointP) - 37.4166) < 0.0001;
  std::cout << t << " " << fabs(length(&pointP) - 37.4166);

  std::cout << "\n---------------------------------------------\n" << &pointP << " "; // << pointP2 << "\n";
  Coord3D * test = fartherFromOrigin(&pointP, &pointP2);
  std::cout << test;
  return 0;
}
