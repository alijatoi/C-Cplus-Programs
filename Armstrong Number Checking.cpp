#include <iostream>
using namespace std;

/*
A positive integer is called an Armstrong number (of order n) if
abcd... = an + bn + cn + dn + ...


In the case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. 
For example, 153 is an Armstrong number because

153 = 1*1*1 + 5*5*5 + 3*3*3 
*/

int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        // remainder contains the last digit
        remainder = originalNum % 10;
        
        result += remainder * remainder * remainder;
        
        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
