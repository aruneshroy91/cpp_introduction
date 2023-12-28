#include<iostream>
using namespace std;

void printOnNewLine(int x){
    cout << "Integer : " << x << endl;
}

/*Note that "char *x" is now depricated */

void printOnNewLine(const char *x){
    cout << "String: " << x << endl;
}

int main(){
    printOnNewLine("hello");
    return 0;
}