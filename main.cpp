#include <iostream>
#include <string>
using std::string;

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int stringValue(string values){
    if(values == "")
        return 0;
    else
        return 1;
}


