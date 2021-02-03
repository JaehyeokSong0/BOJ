#include <iostream>
#include <algorithm>
using namespace std;

#define MAXSIZE 1000000+1
int memo[MAXSIZE]; //calc(n)�� �� memoization

int calc(int n)
{
	if (n == 1)
		return 0;
	else if (memo[n] > 0) //�̹� ���� calc(n)���̸� �ٷ� �� ��ȯ
		return memo[n];
	memo[n] = calc(n - 1) + 1; //calc(n)�� �ʱ갪 (�Ʒ� ������ �����ϸ鼭 �� ���� �� �߰� �� ��ü)
	if (n % 2 == 0)
		memo[n] = min(memo[n], calc(n / 2) + 1); //������� ����� calc(n)������ calc(n/2)+1�� �� ������ memo[n]�� ��ü
	if (n % 3 == 0)
		memo[n] = min(memo[n], calc(n / 3) + 1);
	return memo[n];
}

int main()
{
	int n;
	cin >> n;

	cout << calc(n);
	return 0;
}