#include<iostream>
using namespace std;

int main()
{
	int a, b, c, count = 0;
	cin >> a >> b >> c;

	while (a != 1 or b != 1 or c != 1)
	{
		if (a >= b and a >= c)
		{
			if (a % 2 == 1)
			{
				a -= 1;
				a = a / 2;
				count++;
			}
			else
			{
				a = a / 2;
				count++;
			}
		}
		else
		if (b >= a and b >= c)
		{
			if (b % 2 == 1)
			{
				b -= 1;
				b = b / 2;
				count++;
			}
			else 
			{
				b = b / 2;
				count++;
			}
		}
		else if (c >= a and c >= b)
		{
			if (c % 2 == 1)
			{
				c -= 1;
				c = c / 2;
				count++;
			}
			else 
			{
				c = c / 2;
				count++;
			}
		}
	}
	cout << count;
}