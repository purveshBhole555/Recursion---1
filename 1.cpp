#include <iostream>

using namespace std;

int sumOfOdd(int a, int b) {
  
    if (a > b) {
        return 0;
    }
    
   
    if (a % 2 != 0) {
        return a + sumOfOdd(a + 2, b);
    }
    
    else {
        return sumOfOdd(a + 1, b);
    }
}

int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    int sum = sumOfOdd(a, b);
    cout << "Sum of odd numbers between " << a << " and " << b << ": " << sum << endl;

    return 0;
}


// Output is 

Enter the value of a: 30
Enter the value of b: 60
Sum of odd numbers between 30 and 60: 675      