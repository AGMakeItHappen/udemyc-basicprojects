#include <iostream>
using namespace std;

int main() {
    int n,r;
    cout << "Input a number to check if its an armstrong number or not ";
    cin >> n;
    int m= n;
    int sum = 0;
    while (n>0) {
        r=n%10;
        n=n/10;
        sum = sum + (r*r*r);
        cout << r<< "   " <<n <<endl;
    }
    if (sum==m) {
        cout << "It is an armstrong number";
    }
    else {
    cout << "It is not an armstrong number";
    }
    //Armstrong number is a number for which the cube of each digit's sum is equal to the digit
}