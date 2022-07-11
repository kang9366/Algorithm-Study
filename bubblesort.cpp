#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 5> arr = {7, 4, 5, 1, 3};
    int temp;
    for(int i = 0; i < arr.size()-1; i++){
        for(int j = 0; j < arr.size()-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << endl;
    }
}