#include<iostream>
using namespace std;

int main(){
    int x; /*Declaration of variable x*/
    x = 4 + 2; /*Initialization of x, = being the assignment operator*/
    /* A cleaner version of 
    declaration and initialization -->  int x = 4 + 2;*/
    /*Printing a sequence of values by chaining << symbol*/
    std::cout << x/3 <<'\n'<< x*2 << std::endl; 

    return 0;
}
