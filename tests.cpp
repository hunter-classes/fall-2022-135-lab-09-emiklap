#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <math.h>
#include "doctest.h"
#include "funcs.h"

Coord3D point0 = {0, 0, 0};
Coord3D point1 = {10, 20, 30};
Coord3D point2 = {100000, 200000, 300000};
Coord3D point3 = {777, 444, 333};
Coord3D vel1 = {1, -5, 7.5};

//for these tests, i had to accomidate for rounding differences
TEST_CASE("TASK A") {
    CHECK(length(&point0) == 0);
    CHECK(abs(length(&point1) - 37.416574) <  0.00001);
    CHECK(abs(length(&point2) - 374165.73867) <  0.00001);
    CHECK(abs(length(&point3) - 954.858105) <  0.00001);
}

TEST_CASE("TASK B") {
    CHECK(fartherFromOrigin(&point1, &point2) == &point1);
    CHECK(fartherFromOrigin(&point2, &point0) == &point0);
    CHECK(fartherFromOrigin(&point3, &point1) == &point1);
    CHECK(fartherFromOrigin(&point2, &point3) == &point3);
}

TEST_CASE("TASK C") {
    move(&point1, &vel1, 2.0);
    CHECK(point1.x == 12);
    CHECK(point1.y == 10);
    CHECK(point1.z == 45);
    move(&point3, &vel1, 5.5);
    CHECK(point3.x == 782.5);
    CHECK(point3.y == 416.5);
    CHECK(point3.z == 374.25);
}
