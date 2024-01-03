#include<iostream>
using namespace std;

/*This program produces an error and does not compile --> 
error: redefinition of 'arg1' with a different type: 'char' vs 'int'
    char arg1 = 'A';*/

int main(){
    int arg1 ;
    arg1 = -1;
    int x, y, z;
    char myDouble = '5';
    char arg1 = 'A';
    cout << arg1 << "\n";
    return 0;
}