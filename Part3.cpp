/* File: Project 1; Part 3
   Author: Tania Perdomo Flores
   Date: Oct. 2, 2023
   Description: Implement middle-school procedure for computing gcd(m,n) 
*/

#include <iostream>
#include <cstdlib>
using namespace std;

// function
int EuclidGcd(int, int);

//driver
int main() {
    int m;
    int n;

    // user prompt to input m and n
    cout << "Enter number M: ";
    cin >> m;
    cout << "Enter number N: ";
    cin >> n;

    // if m or n are equal to 0, then proceed with returning result
    if(m == 0 & n == 0) {
        cout << "\nGCD of (" << m << ", " << n << ") is undefined" << endl;
        cout << endl;
    }
    else {
        cout << "\nGCD of (" << m << ", " << n <<  ") is " << EuclidGcd(m, n) << endl;
        cout << endl;
    }
    return 0;
}

// function
int EuclidGcd(int m, int n) {
    int v;

    // if m or n are not equal to 0, then proceed with gcd of input numbers   
    if(m != 0 && n != 0) {
        while((m % n) > 0) {
            v = m % n;
            m = n;
            n = v;
        }
        return n;
    }
    else if(m == 0) {
        return n;
    }
    else {
        return m;
    }
}