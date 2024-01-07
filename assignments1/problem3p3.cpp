#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int N;
    cout << "Enter the positive integer: " << endl;
    cin >> N;
    for(int i = 2; i < floor(N/2); i++){
        if (N % i == 0){
            cout << "N is not a prime" << endl; 
        }
        else
            cout << "N is a prime" << endl;
    break;
    }
    return 0; 
}