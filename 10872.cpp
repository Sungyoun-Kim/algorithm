#include <iostream>
using namespace std;
int fac(int x){
    if(x==1 || x==0)
        return 1;
    return x*fac(x-1);
}

int main(){
    int number;
    cin>>number;
    cout<<fac(number)<<endl;

}

/*팩토리얼 성공
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
1 초	256 MB	78087	38316	32195	49.611%
문제
0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 정수 N(0 ≤ N ≤ 12)가 주어진다.

출력
첫째 줄에 N!을 출력한다.

예제 입력 1 
10
예제 출력 1 
3628800
예제 입력 2 
0
예제 출력 2 
1
출처*/