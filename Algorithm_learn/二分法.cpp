#include <bits/stdc++.h>
using namespace std;
/*
  使用前提：数据有序
  时间复杂度：O(log2^N) 简写成--> O(logN)
 */
int bm(int a[], int n, int num) // n为数组长度 num为要找的指定数
{
	int l = 0;
	int r = n - 1;
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
			return mid;
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
	
	return l;
}

int main()
{
	int num;
	cin >> num;
	// 返回num出现的位置
	int a[10] = {1, 2, 2, 3, 3, 5, 6, 7, 45, 67};
	cout << bm(a, 10, num);
	return 0;
}
