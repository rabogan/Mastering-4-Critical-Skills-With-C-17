#include<iostream>
using namespace std;

int main() {
	int grid[100][100]{ 0 };   //Grid initialised to zero.  In the game itself, we will use 1 to represent x and 2 for o
	cout << "Enter your grid dimensions:\n";
	
	int n = 0;
	cin >> n;                  //The size of the grid, is n*n, and the number of 'moves/turns' in the game will be n*n.

	int turn = 0;             //If turn == 0 (or false), then we will start with x.   If turn == 1, we start with o.
	int moves = 0;            //This represents the number of MOVES in the game.

	while (true)             //The game (and later, the verification) will take place inside a giant while loop, broken by the end of the end.
	{
		if (moves == n * n)
		{
			cout << "Tie!\n";
			break;    //This would be the first "break" in the code - when the number of moves equals the number of positions in the grid.
		}

		char symbol = 'x';   //If turn == 0, the move is made by x
		if (turn == 1)
			symbol = 'o';   //If turn == 1, the move is made by o

		cout << "Player " << symbol << "'s turn.   Enter the empty location (row, column):  ";
		int row = 0;
		int col = 0;
		cin >> row >> col;

		row -= 1;   //Basicially, this ensures that we use a 1-based index for the input.   Instead of (0,0), we input (1,1), which is more user friendly.
		col -= 1;

		if (row < 0 || row >= n || col < 0 || col >= n || grid[row][col] != 0)   //Checking the validity of the input.  We can't use squares outside the grid :)
			//And, importantly (crucially!), we can't use coordinates that have already been played, as denoted by grid[r][c]!=0.
			//It's possible to split these up, and give separate messages explaining "Not on the grid" or "Already played", but not here.
		{
			cout << "Invalid input.  Please try again\n";
			continue;
		}																//       0 0 0								For x	  0 1 0	       For o	0 2 0
																		//       0 0 0										  0 0 0			    	0 0 0
		grid[row][col] = turn + 1;   //Internally, the initialisation looks like 0 0 0  After input of row/columns(using 0,1) 0 0 0				    0 0 0

		//However, this input is a little bit ugly for us!
		//Printing the grid:

		for (int r = 0; r < n; ++r)
		{
			for (int c = 0; c < n; ++c)
			{
				char ch = '.';
				if (grid[r][c] == 1)
					ch = 'x';
				else if (grid[r][c] == 2)
					ch = 'o';
				cout << ch;
			}
			cout << endl;
		}

		turn = !turn;
		moves++;
	}

	return 0;
}