//
// Created by Nikita Orlovets on 28.04.2020.
//

//#include "Integerr.h"
#include <iostream>
#include <iterator>
#include <array>
using namespace std;

class Integerr {
public:
    virtual Integerr* add(Integerr *integer) {
        cout << 'K';
        return integer;
    };
//    virtual Integerr subtract(Integerr integer);
//    virtual Integerr multiply(Integerr integer);
//    virtual Integerr divide(Integerr integer);
//
//    virtual void printValue();

    array<char, 2> getValue() {
        return _value;
    };

    void setValue(array<char, 2> value) {
        _value = value;
    };

private:
    array<char, 2> _value = {};
};