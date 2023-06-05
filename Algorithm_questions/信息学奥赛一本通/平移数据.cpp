#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n + 5];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 2; i <= n; i++) cout << a[i] << ' ';
	cout << a[1];
	
	return 0;
}

/*
  【题目描述】
	  将a数组中第一个元素移到数组末尾,其余数据依次往前平移一个位置。
  
  【输入】
	  第一行为数组a的元素个数；
	  第二行为n个小于1000的正整数。
  
  【输出】
	  平移后的数组元素，每个数用一个空格隔开。
  
  【输入样例】
	  10
	  1 2 3 4 5 6 7 8 9 10
  【输出样例】
	  2 3 4 5 6 7 8 9 10 1
 */
