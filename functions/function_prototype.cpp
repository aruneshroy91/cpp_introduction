#include<iostream>
using namespace std;
/*function that are defined later than invocation, 
is intimated through a prototype*/

int bar();

int foo(){
    return bar()*2;
}

int bar(){
    return 3;
}

int main(){
    cout << foo() << endl;
}