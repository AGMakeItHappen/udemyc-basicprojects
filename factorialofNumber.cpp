#include <iostream>
using namespace std;

int main(){
    int n, fact = 1;
    cout << " Enter a number of numbers you want the factorial of " ;
    cin >> n;
    for(int i = 1; i<=n; i++){
         fact = fact * i;
         cout << fact << endl;
    }
    
    cout << "The factorial of the number given is " << fact << endl;
    return 0;


}