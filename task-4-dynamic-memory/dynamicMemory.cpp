#include <iostream>
using namespace std;


void dynamicMemoryAllocation(int value) {

    int* ptr = new int;

    *ptr = value;

    cout << "Value: " << *ptr << endl;
    cout << "Memory address: " << ptr << endl;

    delete ptr;
}

int main() {

    int intValue = 10;

    dynamicMemoryAllocation(intValue);

    return 0;
}
