#include <iostream>
#include <iterator>
#include "Decimal.cpp"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
//    Integerr *number1;
    Decimal *decimal = new Decimal();
//    number1 = decimal;
    array<char, 2> arr = {'6','8'};
//    int a[] = { -5, 10, 15 };
//    number1->setValue(arr);
//    number1->add(*number1);
    decimal->setValue(arr);
    decimal->add(decimal);
    cout << "End" << endl;

    return 0;
}
