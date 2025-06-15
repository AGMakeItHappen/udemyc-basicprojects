#include <iostream>
using namespace std;

int main(){
    int n, factor;
    cout << " Enter a number whose factors you want to find " ;
    cin >> n;
    for(int i = 1; i<=n; i++){
        if (n % i == 0) {
            factor = i;
            cout << "Factor = " << factor<< endl;
        }
    }
    cout <<"These are the factors of " << n;
    return 0;


}