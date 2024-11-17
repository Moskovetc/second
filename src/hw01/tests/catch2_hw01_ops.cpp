#include "catch2/catch_test_macros.hpp"
#include "hw01/Hw01.hpp"

TEST_CASE("Hw01Test - getValue", "[Hw01]") {
    const float given = 1.0;
    Hw01 hw01(given);
    REQUIRE(hw01.getValue() == given);
}

TEST_CASE("Hw01Test - sqr", "[Hw01]") {
    const float given = 2.0;
    Hw01 hw01(given);
    REQUIRE(hw01.sqr() == 4.0);
}

TEST_CASE("Hw01Test - sqrt", "[Hw01]") {
    const float given = 4.0;
    Hw01 hw01(given);
    REQUIRE(hw01.sqrt() == 2.0);
}