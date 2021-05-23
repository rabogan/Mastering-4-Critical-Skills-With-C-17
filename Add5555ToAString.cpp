#include <iostream>
using namespace std;

int main()
{
	string long_string_of_digits;
	cin >> long_string_of_digits;

	int remainder = 0;

	for (int i = 0; i < (int)long_string_of_digits.size(); ++i)
	{
		int digit = long_string_of_digits[(int)long_string_of_digits.size() - i - 1] - '0';

		if (i < 4)
		{
			digit += 5;
		}

		if (remainder)
			digit += 1;

		if (digit >= 10)
		{
			digit -= 10;
			remainder = 1;
		}
		else
			remainder = 0;

		long_string_of_digits[(int)long_string_of_digits.size() - i - 1] = digit + '0';
	}
	if (remainder)
		cout << "1";

	cout << long_string_of_digits << "\n";
	return 0;
}