#include<iostream>
using namespace std;

// BubbleSort - TC() && SC()

void BubbleSort(int arr[],int size){
    bool swapped;
    for(int i=0;i<size;i++){
        swapped = false;
        // Checking the size of arr to size-i-1 because on each 
        // second for loop ith greatest element goes on its position
        // so no need to change it for every queue
        for(int j=0;j<size-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped){
            break;
        }
    }
    return;
}
int main(){
    int arr[10] = {67,48,45,90,5,46,23,43,23,47};
    BubbleSort(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}