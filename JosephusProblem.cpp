#include<iostream>
using namespace std;

int main()
{
	int n = 0;
	int k = 0;
	cin >> n >> k;
	int jos_arr[200 + 1]{ 0 };
	int last_pos = 0;

	for (int i = 0; i < n; ++i)
	{
		int remaining = n - i;

		int current_k = 0;
		if (k % remaining == 0)
			current_k = remaining;
		else
			current_k = k % remaining;

		int dead_position = -1;
		int steps = 0;

		while (steps < current_k)
		{
			if (jos_arr[last_pos] == 0)
			{
				dead_position = last_pos;
				steps++;
			}
			last_pos = (last_pos + 1) % n;
		}
		jos_arr[dead_position] = 1;

		if (remaining > 1)
			cout << "The person at position " << dead_position + 1 << " is out!\n";
		else
			cout << "Our last person standing is number " << dead_position + 1 << "!\n";
	}
}
