#include <iostream>
using namespace std;

int main(){
    int x = 2;
    int y = 2;
    if(x>y)
        cout << "x is greater than y";
    else if (y>x)
        cout << "y is greater than x";
    else
        cout << "x is equal to y";
    
    return 0;
}