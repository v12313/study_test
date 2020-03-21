#include<iostream>
#include<string>
#include<vector>
using namespace std;
vector<int> la(vector<int> arr, int x) {
	int N = arr.size();
	for (int i = 0; i < N; i++)
	{
		if (arr[i]>=x)
		{
			arr[i] = arr[i] - x;
			if (arr[i] < 0)
			{
				arr[i] = -arr[i];
			}
		}

	}

	return arr;
}
int qiusum(vector<int> arr) {
	int N = arr.size();
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += arr[i];
	}
	return sum;
}

class Solution {
public:
	/**
	* 返回两次操作后，数组元素之和的最小值
	* @param nums int整型vector 这你你需要操作的数组
	* @return long长整型
	*/
	long long minimumValueAfterDispel(vector<int>& nums) {
		// write code here
		int N = nums.size();
		vector<int> arr1;
		vector<int> arr2;
		int x;
		int sum;
		int zsum = 0;
		int flag = 0;
		for (int i = 0; i < N; i++)
		{
			x = nums[i];
			arr1 = la(nums, x);
			for (int j = 0; j < N; j++)
			{
				x = arr1[j];
				arr2 = la(arr1, x);
				sum = qiusum(arr2);
				if (!flag) zsum = sum; flag = 1;
				if (zsum >= sum)
				{
					zsum = sum;
				}
			}

		}


		cout << zsum;
		return zsum;
	}
	
};

int main3(){

	int a;
	vector <int> arr;
	char ch;
	while (1)
	{
		if ((ch = getchar()) == '\n')
		{
			break;
		}
		ungetc(ch, stdin);
		cin >> a;
		arr.push_back(a);
	}

	//system("pause");
	Solution s;
	s.minimumValueAfterDispel(arr);
	system("pause");
	return 0;
}



