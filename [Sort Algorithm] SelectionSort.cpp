#include <iostream>
#include <array>

using namespace std;

int main(){
    int temp;
    int index;
    int min;
    array<int, 8> arr = {2, 4, 1, 5, 3, 7, 6, 10};
    for(int i = 0; i < arr.size(); i++){
        min = arr[i];
        index = i;
        for(int j = i; j < arr.size()-1; j++){
            if(min > arr[j+1]){
                min = arr[j+1];
                index = j+1;
            }
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << endl;
    }
}
