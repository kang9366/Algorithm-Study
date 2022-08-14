#### 벡터 비우기
```c++
vector<int> vec = {1, 2, 3, 4, 5};
vec.clear();
```

#### 벡터 메모리까지 비우기
```c++
vector<int> vec = {1, 2, 3, 4, 5};
vector<int>().swap(vec);
```

#### 많이 사용하는 변수는 CPU 레지스터에 저장해 접근속도를 높힐 수 있다.(주로 반복문에서 많이 사용)
```c++
register int i, j;
for(i=0; i<N; ++i){
    for(j=0; j<N; ++j){
        ...
    }
}
```

#### 입출력 속도 빠르게
```c++
ios_base :: sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
```

#### 컴파일 속도 측정
```c++
int main(){
    clock_t start, finish;
    double duration;
    start = clock();
    
    //속도 측정할 코드 시작
    cout << "hello world!";
    //속도 측정할 코드 끝
    
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    cout << fixed << duration << " sec" << endl;
}
```
#### 반복문 vs 재귀함수
|      | 재귀 함수                                        | 반복문                   |
| ---- | ------------------------------------------------ | ------------------------ |
| 장점 | 상대적으로 간결한 코드                         | 속도가 상대적으로 빠름 |
| 단점 | 메모리를 많이 사용함, 속도가 상대적으로 느림 | 상대적으로 복잡한 코드 |


[시간복잡도와 공간복잡도](https://github.com/kang9366/Algorithm_Study/wiki/시간복잡도와-공간복잡도)

#### 정렬 알고리즘
* [버블정렬](https://github.com/kang9366/Algorithm_Study/wiki/버블정렬)
* [선택정렬]()
* [삽입정렬]()

#### 탐색 알고리즘
* [이진탐색]()

#### 기본 알고리즘
* [브루트포스]()
* [재귀]()
* [동적계획법]()
* [투포인터]()
