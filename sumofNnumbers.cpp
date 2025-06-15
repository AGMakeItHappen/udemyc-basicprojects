#include <iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout << " Enter a number of natural numbers you want to find the sum of " ;
    cin >> n;
    for(int i = 1; i<=n; i++){
         sum = sum + i;
         cout << sum << endl;
    }
    
    cout << "The sum = " << sum << endl;
    return 0;


}