#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "recursion.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Iterative factorial test")
{
	REQUIRE(iterative_factorial(4) == 24);
	REQUIRE(iterative_factorial(5) == 120);
	REQUIRE(iterative_factorial(6) == 720);
}

TEST_CASE("recursive factorial test")
{
	REQUIRE(recursive_factorial(4) == 24);
	REQUIRE(recursive_factorial(5) == 120);
	REQUIRE(recursive_factorial(6) == 720);
}
