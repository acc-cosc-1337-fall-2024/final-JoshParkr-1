#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include "catch.hpp"
#include "die.h"
#include "roll.h"

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

TEST_CASE("Verify 2 6 sided die") {

	Die die1, die2;
	Roll roll(die1, die2);

	roll.roll_dice();
	REQUIRE(true == (roll.roll_value() >= 2 && roll.roll_value() <= 12));

	for (int i = 0; i < 10; i++)
	{
		roll.roll_dice();
		REQUIRE(true == (roll.roll_value() >= 2 && roll.roll_value() <= 12));
	}
}