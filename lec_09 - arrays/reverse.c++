#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(){
    int arr[10] = {1, 22, 30, -4, 55, 69, 7, -5, 15, 9};
    int brr[5] = {5,-12,95,-66,0};

    reverse(arr,10);
    printArray(arr,10);

    reverse(brr, 5);
    printArray(brr, 5);
}