#include <iostream>
#include <ostream>
using namespace std;

int main(){
    int n, factor, sum= 0;
    cout << " Enter a number whose factors you want to find " ;
    cin >> n;
    for(int i = 1; i<=n; i++){
        if (n % i == 0) {
            factor = i;
            sum = sum + factor;
            cout << "sum of factors = " << i <<" +  the previous = "<< sum<< endl;

        }
    }
    if (sum == n*2) {
        cout<< n << " is a perfect number as its sum of factors is twice of it"<<endl;
    }
    else {
    cout<<"Therefore "<<n<< " is not a perfect number ";
    }
    return 0;


}