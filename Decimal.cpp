//
// Created by Nikita Orlovets on 28.04.2020.
//

//#include "Decimal.h"

#include <iostream>
#include "Integerr.cpp"
using namespace std;

class Decimal : public Integerr {
public:
    Integerr* add(Integerr *integer) override {
        array<char, 2> savedValue = this->getValue();
        cout << savedValue[1] << endl;
        cout << 'B' << endl;
        return integer;
    };


    // .get
    // parse from char number array with coma to double
    //add two doubles
    //serialize back to char array
    // .set

};