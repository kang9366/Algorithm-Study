
#### 정렬 알고리즘
* [버블정렬](https://github.com/kang9366/Algorithm_Study/wiki/버블정렬)
* [선택정렬]()
* [삽입정렬]()
* [퀵정렬]()

#### 탐색 알고리즘
* [선형탐색](https://kang9366.tistory.com/16?category=1284757)
* [이진탐색](https://kang9366.tistory.com/17?category=1284757)

#### 기타
* [시간복잡도와 공간복잡도](https://github.com/kang9366/Algorithm_Study/wiki/시간복잡도와-공간복잡도)     
* [브루트포스]()
* [재귀]()
* [동적계획법]()
* [투포인터]()
* [윈도우 슬라이싱]()
* [분할정복]()
___
#### 시간 복잡도 계산
O(N)에서 N=100,000,000 이면 1초로 계산
___
#### 자료형 표현범위
|        자료형        |  크기  |                            범위                             |
| :------------------: | :----: | :---------------------------------------------------------: |
|    (signed) char     | 1 byte |                         -128 ~ 127                          |
|    unsigned char     | 1 byte |                           0 ~ 255                           |
|       wchar_t        | 2 byte |                         0 ~ 65,535                          |
|         bool         | 1 byte |                            0 ~ 1                            |
| (signed) short (int) | 2 byte |                      -32,768 ~ 32,767                       |
| unsigned short (int) | 4 byte |                         0 ~ 65,535                          |
|     (signed) int     | 4 byte |               -2,147,483,648 ~ 2,147,483,647                |
|     unsigned int     | 4 byte |                      0 ~ 4,294,967,295                      |
| (signed) long (int)  | 4 byte |               -2,147,483,648 ~ 2,147,483,647                |
| unsigned long (int)  | 4 byte |                      0 ~ 4,294,967,295                      |
|        __int8        | 1 byte |                         -128 ~ 127                          |
|       __int16        | 2 byte |                      -32,768 ~ 32,767                       |
|       __int32        | 4 byte |               -2,147,483,648 ~ 2,147,483,647                |
|       __int64        | 8 byte |   -9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807    |
|        float         | 4 byte |     3.4E-38(-3.4*10^38) ~ 3.4E+38(3.4*10^38) (7digits)      |
|    (long) double     | 8 byte | 1.79E-308(-1.79*10^308) ~ 1.79E+308(1.79*10^308) (15digits) |

___
#### 입출력 속도 빠르게
```c++
ios_base :: sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
```
___
#### 벡터 비우기
```c++
vector<int> vec = {1, 2, 3, 4, 5};
vec.clear();
```
___
#### 벡터 메모리까지 비우기
```c++
vector<int> vec = {1, 2, 3, 4, 5};
vector<int>().swap(vec);
```
___
#### 벡터 원소 합
```c++
#include <numeric>

sum = accumulate(v.begin(), v.end(), 0);
```
___
#### 벡터 최대, 최소값
```c++
#include <algorithm>
//최소
min_element(vec, vec+size);
//최소값의 인덱스
min_element(vec, vec+size)-vec;
//최대
max_element(vec, vec+size);
//최대값의 인덱스
max_element(vec, vec+size)-vec;
```

___
#### 많이 사용하는 변수는 CPU 레지스터에 저장해 접근속도를 높힐 수 있다.(주로 반복문에서 많이 사용)
```c++
register int i, j;
for(i=0; i<N; ++i){
    for(j=0; j<N; ++j){
        ...
    }
}
```
___
#### 최대공약수
```c++
int GCD(int a, int b){
	int c;
	while (b != 0){
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}
```
___
#### 최소공배수
```c++
int LCM(int n, int m){
    return n * m / GCD(n, m);
}
```
___
#### 반복문 vs 재귀함수
|      | 재귀 함수                                        | 반복문                   |
| ---- | ------------------------------------------------ | ------------------------ |
| 장점 | 상대적으로 간결한 코드                         | 속도가 상대적으로 빠름 |
| 단점 | 메모리를 많이 사용함, 속도가 상대적으로 느림 | 상대적으로 복잡한 코드 |
