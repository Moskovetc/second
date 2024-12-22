#include "catch2/catch_test_macros.hpp"
#include "hw02/Hw02.hpp"
#include "hw02/Point.hpp"

TEST_CASE("Hw02Test - destructor test", "[Hw02]")
{
    Point point1(1, 2);
    Point point2(6, 3);
    Hw02 distance1(point1, point2);

    Point point3(2, 2);
    Point point4(7, 7);
    Hw02 distance2(point3, point4);
}