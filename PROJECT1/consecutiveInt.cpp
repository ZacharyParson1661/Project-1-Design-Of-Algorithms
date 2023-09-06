/*

    Zachary Parson
    Part2. (50%) Implement Consecutive integer checking algorithm for computing gcd(m, n).

*/

#include <iostream>
#include <cmath>
using namespace std;

void step2(int, int, int);
void step3(int, int, int);
void step4(int, int, int);

int main()
{

    int m = 0;
    int n = 0;
    int t = 0;

    cout << "Consecutive Integer Checking Algorithm" << endl;
    cout << "---------------------------------------" << endl;

    cout << "Please enter your first value: ";
    cin >> m;

    cout << "Please enter your second value: ";
    cin >> n;

    t = min(n, m); // Assigns the value of min(n,m) to t

    step2(m, n, t);
}

// This function modulos' m by t. If the remainder of this is 0, we proceed to the function step3, if it doesn't, we proceed to the function step4
void step2(int m, int n, int t)
{

    if (m % t == 0)
    {
        step3(m, n, t);
    }

    else
    {

        step4(m, n, t);
    }
}

// This function modulos' n by t. If the remainder of this is 0, we output the gcd of m and n, if it doesn't, we proceed to the function step4
void step3(int m, int n, int t)
{

    if (n % t == 0)
    {
        if (t != 1)
        {
            cout << "The gcd of " << m << " and " << n << " is " << t;
        }

        else
        {
            cout << "The gcd of " << m << " and " << n << " is Undefined" << endl;
        }
    }

    else
    {

        step4(m, n, t);
    }
}

// This function decreases the value of t by 1. We then proceed to the function step2
void step4(int m, int n, int t)
{

    t = t - 1;
    step2(m, n, t);
}