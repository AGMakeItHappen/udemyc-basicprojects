#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout << "Enter 2 numbers ";
    cin >> m >> n;
    while (m!=n) {
        if (m>n) {
            m= m-n;
        }
        else if (n>m) {
            n=n-m;
        }
    }
    cout << "the gcd will be " << m;
}