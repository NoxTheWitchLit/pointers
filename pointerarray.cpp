#include <iostream>
using namespace std;

int main() {
    int ages[5] = { 15, 20, 25, 30, 35 };
    int* ptr = ages;    // Point to the first element of the array

    for (int age = 0; age < sizeof(ages) / sizeof(ages[0]); age++) {
        cout << *ptr << endl;
        ptr++;
        
    }

    return 0;
}
