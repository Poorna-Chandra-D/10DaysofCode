#include<bits/stdc++.h>
using namespace std;
void positiveNegativeZero(int arr[], int len)
{
	float positiveCount = 0;
	float negativeCount = 0;
	float zeroCount = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] > 0) {
			positiveCount++;
		}
		else if (arr[i] < 0) {
			negativeCount++;
		}
		else if (arr[i] == 0) {
			zeroCount++;
		}
	}
	cout << fixed << setprecision(4) << (positiveCount / len)<<" ";
	cout << fixed << setprecision(4) << (negativeCount / len)<<" ";
	cout << fixed << setprecision(4) << (zeroCount / len);
	cout << endl;
}
int main()
{
	int a1[] = { -4, 3, -9, 0, 4, 1 };
	int len=sizeof(a1)/sizeof(a1[0]);
	positiveNegativeZero(a1,len);
}
