/* File: Project 1; Part 2
   Author: Tania Perdomo Flores
   Date: Oct. 2, 2023
   Description: Implement consecutive integer checking algorithm for computing gcd (m,n)
*/

#include <iostream>
#include <iomanip>
using namespace std;

//function
int consectInteger(int, int);

//driver
int main() {
    int m;
    int n;

    // user prompt to input m and n
    cout << "Value of M: ";
    cin >> m;
    cout << "Value of N: ";
    cin >> n;
    cout << endl;

    //if m or n are equal to 0, proceed with returning result
    if(m == 0 & n == 0) {
        cout << "GCD(" << m << ", " << n << ") = undefined" << endl;
    }
    else {
        cout << "GCD(" << m << ", " << n <<  ") = " << consectInteger(m, n) << endl;
    }
    cout << endl;
}

//function for integers
int consectInteger(int m, int n) {
    int t; 
    int r1;
    int r2;

    //minimum absolute values of m and n
    if(m<n) {
        t= abs(m);
    }
    else {
        t= abs(n);
    }
    
    if(t != 0) {
        while(t>0) {
            r1 =m%t;

            if(r1 ==0) {
                r2 = n%t;
                if(r2 == 0) {
                    return t;
                }
            }
            t--;
        }
    }
    return 0;
}