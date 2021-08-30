#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    double avg=0;
    int mode=0;
    int median=0;
    int range=0;
    int number;
    int max=0;
    
    cin>>number;
    int value[number];
   
    for(int i=0;i<number;i++)
    {
        cin>>value[i];
    }
    sort(value,value+number); // 정렬 
    for(int i=0;i<number;i++)
    {
        avg=avg+value[i];
    }
    vector<int> a(value,value+number); // 정렬된 value 배열로 a라는 벡터 생성 
    a.erase(unique(a.begin(),a.end()),a.end()); // 중복값 제거 
    int frequent[a.size()]={}; // 중복제거한 사이즈와 같은 배열만들어줌 ( 인덱스는 같은데 값 0으로 초기화) 

for(int i=0;i<a.size();i++) // 중복제거안된 value랑 중복 제거된 a랑 비교하면서 일치하는것 찾을때마다 카운팅
{
    for(int j=0;j<number;j++)
    {
        if(a[i]==value[j])
        frequent[i]++;
    }
}

for(int i=1;i<a.size()-1;i++)
{


    if(frequent[max]<frequent[i])
    max=i;


}
for(int i=1; i<a.size()-max;i++) // 큰거 찾은 후에 , 큰거중에 2번쨰 최빈값 인덱스 잇으면 찾기 (찾으면 break)
{


    if(frequent[max]<=frequent[max+i])
    {
    max=max+i;
    break;
    }

}
mode=a[max];
    avg=avg/number;
    avg=round(avg);
    median=value[number/2];
    range=value[number-1]-value[0];

cout<<avg<<endl;
cout<<median<<endl;
cout<<mode<<endl;
cout<<range;

system("pause");
}














/*통계학
시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
2 초	256 MB	57082	14276	11521	26.876%
문제
수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.

산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이
N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 단, N은 홀수이다. 그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.

출력
첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.

둘째 줄에는 중앙값을 출력한다.

셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.

넷째 줄에는 범위를 출력한다.

예제 입력 1 
5
1
3
8
-2
2
예제 출력 1 
2
2
1
10
예제 입력 2 
1
4000
예제 출력 2 
4000
4000
4000
0
예제 입력 3 
5
-1
-2
-3
-1
-2
예제 출력 3 
-2
-2
-1
2
*/