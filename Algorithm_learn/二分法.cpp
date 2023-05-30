#include <bits/stdc++.h>
using namespace std;
/*
  使用前提：数据有序
  时间复杂度：O(log2^N) 简写成--> O(logN)
 */
int main()
{
	int num;
	cin >> num;
	// 返回num出现的位置
	int a[10] = {1, 2, 2, 3, 3, 5, 6, 7, 45, 67};
	
	int l = 0;
	int r = 9;
	int mid = 0;
	while(l < r)
	{
		/*
		  等价于 l + (r - l) / 2 防止溢出
		  因为 (r + l) / 2 可能会数据溢出
		 */
		mid = l + ((r - l) >> 1); 
		if(a[mid] == num)
		{
			cout << mid;
			return 0;
		}
		else if(a[mid] > num)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}
	
	cout << a[l];
	return 0;
}
