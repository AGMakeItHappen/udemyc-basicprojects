#include <iostream>
using namespace std;

int main() {
    int sum, A[] = {50,23,12,95,40};
    for(int i = 0; i< 5; i++){
        sum = sum + A[i];
    }
    cout<< "Sum of the elements = "<< sum<<endl;
}