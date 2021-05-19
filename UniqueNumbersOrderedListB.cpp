#include<iostream>
using namespace std;

int main()
{
	cout << "How many numbers do you want to input?\n";
	int n = 0;
	cin >> n;
	cout << endl;
	cout << "Please enter your list of numbers, in order:\n";
	
	int previous_value = -1;   //Our constraints include our entered value being 0<=value<=500
	
	for (int i = 0; i < n; ++i)
	{
		int value;
		cin >> value;

		if (value != previous_value)
			cout << value << " ";

		previous_value = value;
	}
	return 0;
}
