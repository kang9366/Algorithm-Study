#include <iostream>
#include <vector>

using namespace std;

int main(){
    clock_t start, finish;
    double duration;
    start = clock();
    
    cout << "hello world!";
    
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << fixed << duration << " sec" << endl;
}
