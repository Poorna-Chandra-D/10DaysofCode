#include <bits/stdc++.h>
using namespace std;
void print_square(int n)
{
	int i, j;
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i==1 || i==n || j==1 || j==n)	
				cout << "2";		
			else
				cout << "1";		
		}
		cout << "\n";
	}

}
int main()
{
    int n;
    cout << "Enter n:" ;
    cin >> n;
	int rows = 3;
	print_square(rows);
	return 0;
}
