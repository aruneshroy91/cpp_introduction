#include<iostream>
using namespace std;

void printOnNewLine(int x){
    cout << "One integer: " << x << endl;
}

void printOnNewLine(int x, int y){
    cout << "Two integers: " << x << " and " << y << endl;
}

int main(){
    printOnNewLine(2, 3);
}