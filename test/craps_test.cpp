#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <iostream>
#include "catch.hpp"
#include "die.h"
#include "roll.h"
#include "shooter.h"
#include "come_out_phase.h"
#include "point_phase.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify 6 sided die") {

	Die die;

	REQUIRE(1 <= die.roll());
    REQUIRE(6 >= die.roll());

	for (int i = 0; i < 10; i++)
	{
		REQUIRE(1 <= die.roll());
        REQUIRE(6 >= die.roll());
	}
}

TEST_CASE("Verify 2 6 sided die") {

	Die die1, die2;
	Roll roll(die1, die2);

	roll.roll_dice();
	REQUIRE(2 <= roll.roll_value());
    REQUIRE(12 >= roll.roll_value());

	for (int i = 0; i < 10; i++)
	{
		roll.roll_dice();
		REQUIRE(2 <= roll.roll_value());
        REQUIRE(12 >= roll.roll_value());
	}
}

TEST_CASE("Verify shooter") {
    Die die1, die2;
    Shooter shooter;

    for (int i = 0; i < 10; ++i) {
        Roll* roll = shooter.throw_dice(die1, die2);

		REQUIRE(2 <= roll->roll_value());
        REQUIRE(12 >= roll->roll_value());
    }
}

TEST_CASE("Verify come out phase") {
    Die die1, die2;
    ComeOutPhase phase;


    }
}

TEST_CASE("Verify point phase") {
    Die die1, die2;
    Shooter shooter;


    }
}