#include <iostream>
using namespace std;

int main()
{
	string input;
	string str;
	cin >> input >> str;
	bool is_substring = false;
	int length = 0;

	int j = 0;

	for (int i = 0; i < (int)input.size(); ++i)
	{
		if (input[i] == str[j])
		{
			length++;
			j++;
		}
		else
			length = 0;

		if (length == str.size())
		{
			is_substring = true;
			break;
		}
	}
	if (is_substring)
		cout << "YES!\n";
	else
		cout << "NO!\n";

	return 0;
}