/*

    Zachary Parson
    Part3. (30%) (BONUS) Implement Middle-school procedure for computing gcd(m, n).

*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{

    int m = 0;
    int n = 0;
    int m1 = 0;
    int n1 = 0;


    int total = 1;

    vector<int> arrayN = {};
    vector<int> arrayM = {};
    vector<int> primeFactors = {};

    cout << "Middle-school Algorithm" << endl;
    cout << "------------------------" << endl;


    cout << "Please enter your first value: ";
    cin >> m;

    cout << "Please enter your second value: ";
    cin >> n;

    m1 = m;
    n1 = n;

    // This process finds all the prime factors of m and stores them in a vector
    while (m % 2 == 0)
    {
        arrayM.push_back(2);
        m = m / 2;
    }

    for (int i = 3; i <= sqrt(m); i = i + 2)
    {

        while (m % i == 0)
        {
            arrayM.push_back(i);
            m = m / i;
        }
    }

    if (m > 2)
    {
        arrayM.push_back(m);
    }

    cout << "Prime factors for m " << endl;

    for (int i = 0; i < arrayM.size(); i++)
    {

        cout << arrayM[i] << " ";
    }

    // This process finds all the prime factors of n and stores them in a vector
    while (n % 2 == 0)
    {
        arrayN.push_back(2);
        n = n / 2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            arrayN.push_back(i);
            n = n / i;
        }
    }

    if (n > 2)
    {
        arrayN.push_back(n);
    }

    cout << "\nPrime factors for n " << endl;

    for (int i = 0; i < arrayN.size(); i++)
    {

        cout << arrayN[i] << " ";
    }

    // This process identifies all of the common/matching factors between the two vectors
    // If there is a match it removes the matching number from the vector arrayN and adds that matching number to a third vector called PrimeFactors
    for (int i = 0; i < arrayM.size(); i++)
    {

        for (int j = 0; j < arrayN.size(); j++)
        {
            if (arrayM[i] == arrayN[j])
            {
                primeFactors.push_back(arrayN[j]);
                arrayN.erase(arrayN.begin() + j);
            }
        }
    }

    cout << "\nPrime Factors that match" << endl;

    // This process computes the product of all the common/matching factors between the m and n vectors and prints it out as the gcd of the two given numbers
    for (int i = 0; i < primeFactors.size(); i++)
    {

        cout << primeFactors[i] << " ";
        total = total * primeFactors[i] * 1;
    }

    if (total != 1)
    {
        cout << "\nThe GCD of " << m1 << " and " << n1 << " is " << total << endl;
    }

    else
    {
        cout << "\nThe GCD of " << m1 << " and " << n1 << " is Undefined" << endl;
    }
    return 0;
}
