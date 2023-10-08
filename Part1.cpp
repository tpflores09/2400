/* File: Project 1; Part 1
   Author: Tania Perdomo Flores
   Date: Oct. 2, 2023
   Description: Exercise 1.1: 11a from the book (Extended Euclid)
*/


#include <iostream>
#include <cstdlib>
using namespace std;

// function
int gcdExtended(int m, int n, int *x, int *y) {
   if (m == 0) {
      *x = 0;
      *y = 1;
      return n;
   }

   int x1, y1;
   int gcd = gcdExtended(n%m, m, &x1, &y1);
   *x = y1 - (n/m) * x1;
   *y = x1;
   return gcd;
}

// driver
int main() {

    int x, y;
    int m, n;

    //user prompt to input numbers m and n
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
        cout << "\nGCD of (" << m << ", " << n <<  ") is " << gcdExtended(m, n, &x, &y) << endl;
        cout << endl;
    }
    return 0;
}