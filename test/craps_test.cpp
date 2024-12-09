#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify 6 sided die") {

	Die die;

	REQUIRE(true == (die.roll() >= 1 && die.roll() <= 6));

	for (int i = 0; i < 10; i++)
	{
		REQUIRE(true == (die.roll() >= 1 && die.roll() <= 6));
	}
}

