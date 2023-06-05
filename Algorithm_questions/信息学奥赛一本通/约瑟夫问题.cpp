#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, shu = 0, cq = 0; // cq:出圈人数
	cin >> n >> m;
	int a[n + 5] = {0}; // 默认都没有出圈
	for(;;)
	{
		if(cq == n) break;
		for(int i = 1; i <= n; i++)
		{
			if(a[i] == 0) shu++;
			if(shu == m)
			{
				cout << i << ' ';
				a[i] = 1; // 出圈
				cq++;
				shu = 1;
			}
		}
	}
	
	return 0;
}

/*
  【题目描述】
	  N个人围成一圈，从第一个人开始报数，数到M的人出圈；
	  再由下一个人开始报数，数到M的人出圈；…输出依次出圈的人的编号。
  
  【输入】
	  输入N和M。
  
  【输出】
	  输出一行，依次出圈的人的编号。
  
  【输入样例】
	  8 5
  【输出样例】
	  5 2 8 7 1 4 6 3
  【提示】
  【数据范围】
	  对于所有数据，2≤N,M≤1000。
 */
