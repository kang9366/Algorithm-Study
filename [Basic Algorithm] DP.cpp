#include <iostream>
#include <vector>

using namespace std;

int recursive(int n){
    if(n > 1){
        return n*recursive(n-1);
    }else{
        return n;
    }
}

int fibo(int num){
    if(num <= 1){
        return num;
    }else{
        return fibo(num-1) + fibo(num-2);
    }
}

int fibo_dp(int num){
    vector<int> vec(num, 0);
    vec[0] = 0;
    vec[1] = 1;
    if(num <= 2){
        return vec[num];
    }else{
        for(int i = 2; i <= num; i++){
            vec[i] = vec[i-1] + vec[i-2];
        }
        return vec[num];
    }
}


int main(){
    cout << recursive(4) << endl;
    cout << fibo(6) << endl;
    cout << fibo_dp(8) << endl;
}
