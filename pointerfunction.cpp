#include <iostream>
using namespace std;

// Function to increment the values of two integers by 1
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;  // Increment the value pointed to by x
    *y = temp;  // Increment the value pointed to by y
}

int main() {
    int a = 5;
    int b = 8;

    cout << "Original values:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Calling the increment function
    swap(&a, &b);

    cout << "Values after incrementing:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
