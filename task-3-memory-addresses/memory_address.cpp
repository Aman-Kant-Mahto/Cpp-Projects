#include <iostream>
using namespace std;

void memoryAddresses(int &var1, double &var2) {
    cout << "Memory address of first variable: " << &var1 << endl;
    cout << "Memory address of second variable: " << &var2 << endl;
}

int main() {
    int intVar = 42;
    double doubleVar = 3.14;

    memoryAddresses(intVar, doubleVar);

    return 0;
}
