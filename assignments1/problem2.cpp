#include<iostream>
using namespace std;

/*error: cannot initialize a variable 
of type 'char' with an lvalue of type 'const char[2]'*/

int main(){
    int arg1;
    arg1 = -1;
    {
        char arg1 = "A";
        cout << arg1 << endl;     
            }
    return 0;
}