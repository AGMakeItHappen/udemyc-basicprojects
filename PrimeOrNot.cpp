#include <iostream>
using namespace std;

int main() {
    int n=1,num;
    cout << "Input the number you want to check is a prime or not ";
    cin >> num;
    for (int i=1 ; i<=n;i++) {
        if (num%i ==0) {
            n++;
        }
    }
    if (n == 2 ){
        cout <<num <<" Is a prime number.";
    }
    else {
    cout << num << " Is not a prime number";
    };



}