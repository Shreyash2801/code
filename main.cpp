#include <iostream>

using namespace std;

int main()
{
    double firstnumber,secondnumber, productoftwonumbers;
    cout << "Enter Two number:" ;
    // store two floating numbers in variables firstnumber and secondnumber respectively
    cin >>firstnumber>>secondnumber;

    // performs multiplication and stores the result in variable productoftwonumbers
    productoftwonumbers= firstnumber*secondnumber;
    cout << "Product="<<productoftwonumbers;
    return 0;
}
