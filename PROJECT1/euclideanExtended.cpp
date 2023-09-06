/*

    Zachary Parson
    Part1. (50%) Exercise 1.1: 11a /page 8

*/
#include <iostream>
using namespace std;

int main()
{

    int m1 = 0;
    int n1 = 0;
    int m, n, q, r;
    int s1 = 1;
    int s2 = 0;
    int s3 = s1 - q * s2;
    int t1 = 0;
    int t2 = 1;
    int t3 = t1 - q * t2;


    cout << "Extended Euclidean Algorithm" << endl;
    cout << "-----------------------------" << endl;

    cout << "Please enter your first value: ";
    cin >> m1;

    cout << "Please enter your second value: ";
    cin >> n1;

    m = m1;
    n = n1;

    // This do while loop says only to stop if the value r is 0 and will repeat until r = 0
    do
    {

        q = m / n;        // We divide m by n and set its quotient to q
        r = m % n;        // We take the modulos of m and n and set the remainder to
        t3 = t1 - q * t2; // We take t1 - q (which is our quotient) * t2 and set it to t3
        s3 = s1 - q * s2; // We take s1 - q (which is our quotient) * s2 and set it to s3

        m = n;   // We assign the value of n to m
        n = r;   // We assign the value of r to n
        s1 = s2; // We assign the value of s2 to s1
        s2 = s3; // We assign the value of s3 to s2
        t1 = t2; // We assign the value fo t2 to t1
        t2 = t3; // We assign the value of t3 to t2

    } while (r != 0);

    if (m != 1)
    {
        cout << "The GCD of " << m1 << " and " << n1 << " is " << m << endl;
    }

    else
    {
        cout << "The gcd of "<< m1 << " and " << n1 << " is Undefined" << endl;
    }

}