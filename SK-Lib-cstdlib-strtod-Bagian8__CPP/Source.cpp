#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char numberString[] = "12.44b 0xy";
    char* end;
    double number;

    number = strtod(numberString, &end);
    cout << "Number in String = " << numberString << endl;
    cout << "Number in Double = " << number << endl;
    cout << "End String = " << end << endl;

    _getch();
    return 0;
}