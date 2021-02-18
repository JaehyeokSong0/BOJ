#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

#define MAXSIZE 1000000
string tree[MAXSIZE];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout << fixed;
	cout.precision(4); //�Ҽ��� 4��°�ڸ����� ���

	string str;
	int cnt = 0;
	while (true)
	{
		getline(cin, str);
		if (str == "")
			break;
		tree[cnt++] = str;
	}
	sort(tree, tree + cnt);

	string treeName = tree[0];
	int treeCnt = 1;
	for (int i = 1;i < cnt;i++)
	{
		if (treeName != tree[i])
		{
			cout << treeName << " " << 100 * (double)treeCnt / cnt << "\n";
			treeName = tree[i];
			treeCnt = 1;
		}
		else
			treeCnt++;
	}
	cout << treeName << " " << 100 * (double)treeCnt / cnt;

	return 0;
}