#include<iostream>
using namespace std;

int main()
{
	const int array_size = 200;
	int my_arr[array_size];

	cout << "How many numbers do you want to input?\n";
	int n = 0;
	cin >> n;
	cout << endl;
	cout << "Please enter your list of numbers, in order:\n";
	for (int i = 0; i < n; ++i)
	{
		cin >> my_arr[i];
	}
	cout << "Presenting all unique numbers in the above list:\n";
	cout << my_arr[0] << " ";  //This is something of a cheap approach, printing the first element immediately

	for (int check = 1; check < n; ++check)
	{
		if (my_arr[check] != my_arr[check - 1])
			cout << my_arr[check] << " ";
	}
}
