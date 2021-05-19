#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int find_mins[3];

	for (int i = 0; i < n; ++i)
	{
		int user_input = 0;
		cin >> user_input;

		if (i < 3)
			find_mins[i] = user_input;

		else
		{
			int max_pos = 0;

			for (int j = 1; j < 3; ++j)
			{
				if (find_mins[max_pos] < find_mins[j])
					max_pos = j;
			}

			if (user_input < find_mins[max_pos])
				find_mins[max_pos] = user_input;
		}
	}

	int max_pos = 0;
	for (int k = 1; k < 3; ++k)
	{
		if (find_mins[max_pos] < find_mins[k])
			max_pos = k;
	}

	int temp = find_mins[2];
	find_mins[2] = find_mins[max_pos];
	find_mins[max_pos] = temp;

	if (find_mins[0] > find_mins[1])
	{
		temp = find_mins[0];
		find_mins[0] = find_mins[1];
		find_mins[1] = temp;
	}

	for (int l = 0; l < 3; ++l)
		cout << find_mins[l] << " ";
}
