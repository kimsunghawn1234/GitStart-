#include <iostream>
#include <stack>
using namespace std;
/*
N개의 원판이 있으면
n-1개의 원판을 2번(bypass)으로 옮기고
가장 큰 원판을 3번으로 옮긴뒤
다시 n-1개의 원판을 3번으로 옮긴다.
*/
void hanoitower(int num, int start, int bypass, int end) {
	if(num == 0)
		return;
	hanoitower(num-1,start,end,bypass);
	printf("%d %d\n", start, end);
	hanoitower(num-1,bypass,start,end);
}

int main() {
	int N;
	cin >> N;
	cout << (1<<N)-1 << endl; //(1<<N) 은 2^N과 같은 의미
	hanoitower(N,1,2,3);
	return 0;
}