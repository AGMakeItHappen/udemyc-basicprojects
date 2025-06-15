#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[20] = {"x=2;y=9;z=30"};
    char *token = strtok(s1,"=;");
    while(token != NULL) {
        cout << token << endl;
        token = strtok(NULL,"=;");
    }
    return 0;
}