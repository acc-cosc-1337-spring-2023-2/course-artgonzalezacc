#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "checking_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test checking get balance")
{
	CheckingAccount account;
	
	REQUIRE(account.get_balance() > 0);
	REQUIRE(account.get_balance() <= 10000);
}

TEST_CASE("Test checking get balance w one parameter")
{
	CheckingAccount account(100);
	
	REQUIRE(account.get_balance() == 100);
}

