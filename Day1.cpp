#include <bits/stdc++.h>
using namespace std;
int frequencyDigits(int n, int d)
{
	int c = 0;
	while (n > 0) {
		if (n % 10 == d)
			c++;
		n = n / 10;
	}
	return c;
}
int main()
{
	int N = 33564;
	int D = 3;
	cout<<frequencyDigits(N,D);
	return 0;
}
