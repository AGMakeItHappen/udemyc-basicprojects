#include <iostream>
#include <ostream>
using namespace std;

int main() {

    int s;
    cout << "Enter a number whose multiplication table is needed " ;
    cin >> s;
    for(int i=1; i<11 ; i++) {
        int q;
        q= s * i;

        cout << s << " x " << i << " = " << q << endl; 



    }
    return 0;



}