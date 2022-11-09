#include <iostream>
#include "funcs.h"

int main()
{
  Coord3D pointP = {10, 20, 30};
  std::cout << length(&pointP) << std::endl; // would print 37.4166
}
