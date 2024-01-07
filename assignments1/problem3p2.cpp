/*Given a list of N integers, find its mean (as a double), maximum value, minimum value,
and range. Your program will first ask for N, the number of integers in the list, which the
user will input. Then the user will input N more numbers.
Here is a sample input sequence:
3 <-- N
2
1
3
Three numbers are given: 2, 1, 3. The output should be as follows:
Mean: 2
Max: 3
Min: 1
Range: 2*/

#include<iostream>
#include<algorithm>
using namespace std;

float sumOfArray(int array[], int N)
    {
        float sum = 0;
        for(int i = 0; i < N; i++){sum+=array[i];}
        return sum;
    }
float avgOfArray(int array[], int N){
    float avg = sumOfArray(array, N)/N;
    return avg;
}


int main(){
    int N;
    cout << "Input array length: ";
    cin >> N;
    int array[N];
    for (int i = 0; i < N; i++){
        cout << "Enter element: ";
        cin >> array[i];
    }
    cout << "The array is: ";
    for (int i = 0; i < N; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Max element is: " << *max_element(array, array+N) << endl;
    cout << "Min element is: " << *min_element(array, array+N) << endl;
    cout << "Sum of the array: " << sumOfArray(array, N) << endl;
    cout << "Avg of the array: " << avgOfArray(array, N) << endl;
    return 0;
}