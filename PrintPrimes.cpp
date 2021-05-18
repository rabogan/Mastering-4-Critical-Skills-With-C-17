#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	bool first_time = true;

	for (int i = 2; i <= n; ++i)
	{
		bool is_prime = true;

		for (int check = 2; check < i; ++check)
		{
			if (i % check == 0)
			{
				is_prime = false;
				break;
			}
		}

		if (is_prime)
		{
			if (!first_time)
				cout << ",";

			first_time = false;
			cout << i;
		}
	}
	return 0;
}