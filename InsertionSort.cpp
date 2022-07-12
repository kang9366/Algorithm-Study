#include <iostream>
#include <array>

using namespace std;

array<int, 5> swap(array<int, 5> arr, int a, int b){
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    return arr;
}

void printArray(array<int, 5> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
}

int main(){
    int min;
    int temp;
    int index;
    array<int, 5> arr = {3, 8, 9, 7, 6};
    
    for(int i = 1; i < arr.size(); i++){
        for(int j = i; j >= 0; j--){
            if(arr[j] < arr[j-1]){
               arr = swap(arr, j, j-1);
            }else{
                break;
            }
        }
        printArray(arr);
        cout << "" << endl;
    }
}