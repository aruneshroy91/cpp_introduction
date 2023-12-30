#include<iostream>
using namespace std;

/*To declare a pointer variable named ptr 
that points to an integer variable named x: int *ptr = &x;*/

void squareByPtr(int *numPtr){
    *numPtr = *numPtr * *numPtr;
}

int main(){
    int x = 5;
    squareByPtr(&x);
    cout << x << endl;
}