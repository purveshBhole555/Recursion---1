#include <iostream>

using namespace std;

int countWays(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return countWays(n - 1) + countWays(n - 2) + countWays(n - 3);
    }
}

int main() {
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int ways = countWays(n);
    cout << "Number of ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}


// Output is 

Enter the number of stairs: 10
Number of ways to climb 10 stairs: 274