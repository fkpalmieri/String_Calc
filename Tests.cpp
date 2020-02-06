//
// Created by keeganpalmieri on 1/31/20.
//

#include "catch.hpp"
#include <string>
int stringValue(const std::string &);

TEST_CASE("Empty String"){
    REQUIRE(stringValue("") == 0);
}
TEST_CASE("SINGLE NUMBER"){
    REQUIRE(stringValue("1")==1);
    REQUIRE(stringValue("2")==2);
    REQUIRE(stringValue("10")==10);
    REQUIRE(stringValue("100")==100);
}

TEST_CASE("TWO NUMBERS"){
    REQUIRE(stringValue("1,2")==3);
}