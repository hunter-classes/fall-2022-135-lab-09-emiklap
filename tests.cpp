#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

Coord3D point1 = {10, 20, 30};
Coord3D point2 = {100000, 200000, 300000};
Coord3D point3 = {0, 0, 0};
double test =  37.4166;

// add your tests here
TEST_CASE("TASK A") {
    CHECK(length(&point1) == test);
    CHECK((double)length(&point2) == (double)374166);
    CHECK(length(&point3) == 0);
}
