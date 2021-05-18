#include<iostream>
using namespace std;

int main()
{
	//TOP OF THE PYRAMID
	//1 2 3 4 5  ROW
	//1 3 5 7 9  STAR COUNT   ((2*ROW)-1)  
	//4 3 2 1 0  SPACE COUNT  (n-ROW)

	//INVERTED PYRAMID (upside-down)
	//5 4 3 2 1  ROW 
	//9 7 5 3 1  STARS  ((2*ROW)-1)
	//0 1 2 3 4  SPACES (n-ROW)

	int n = 0;
	cin >> n;

	int row = 1;

	while (row <= n)
	{
		int space_count = 0;
		while (space_count < n - row)
		{
			cout << ' ';
			space_count++;
		}
		int star_count = 0;
		while (star_count < ((2 * row) - 1))
		{
			cout << '*';
			star_count++;
		}

		cout << "\n";
		row++;
	}

	while (row--)
	{
		int space_count = 0;
		while (space_count < n - row)
		{
			cout << ' ';
			space_count++;
		}
		int star_count = 0;
		while (star_count < ((2 * row) - 1))
		{
			cout << '*';
			star_count++;
		}
		cout << "\n";
	}
	return 0;
}