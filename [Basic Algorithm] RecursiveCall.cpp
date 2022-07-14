#include <iostream>

using namespace std;

int recursive(int n){
    if(n > 1){
        return n*recursive(n-1);
    }else{
        return n;
    }
}

int main(){
    cout << recursive(3);   
}