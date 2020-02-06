#include <iostream>
#include <string>
using std::string;
#include <sstream>
using std::istringstream;
#include <vector>
using std::vector;
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int stringValue(const string & values){
    istringstream stream(values);
    vector<int> numbers{};
    string singleNum;
    auto front = values.begin();
    while(*front != ',') {
        front++;
    }
    while(front != values.end()){
        for(int i = 0;i < (front - values.begin()); i++){
            singleNum.push_back(*(values.begin()+i));
        }
        int x;
        stream >> x;
        numbers.push_back(x);
    }
    if(values.empty())
        return 0;
    else
        return numbers[0];
}


