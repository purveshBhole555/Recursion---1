#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) {
        return false;
    }
    // A number is a power of 2 if it has only one set bit in its binary representation
    return (n & (n - 1)) == 0;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPowerOfTwo(n)) {
        cout << n << " is a power of 2." << endl;
    } else {
        cout << n << " is not a power of 2." << endl;
    }

    return 0;
}


// Output is 

Enter a positive integer: 43
43 is not a power of 2.
PS E:\CPP Prograamming\PW\11 Recursion\assignment\ass1> cd "e:\CPP Prograamming\PW\11 Recursion\assignment\ass1\" ; if ($?) { g++ 3.cpp -o 3 } ; if ($?) { .\3 }
Enter a positive integer: 64
64 is a power of 2.