#include<iostream>

using namespace std;


int main3() {
	int N, n;
	while(cin>>N)
	{
		int a[1001] = { 0 };
	while (N--)
	{
		cin >> n;
		a[n] = 1;
	}
	for (int i = 0; i < 1001; i++)
	{
		if (a[i])
		{
			cout << i << endl;
		}
	}
	}



		//system("pause");
	return 0;
}