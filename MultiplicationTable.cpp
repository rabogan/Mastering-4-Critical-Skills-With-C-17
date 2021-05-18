#include<iostream>
using namespace std;

int main()
{
	cout << "Please enter your values for n and m:  ";
	int n = 0;
	int m = 0;
	cin >> n >> m;
	
	cout << "\n";

	int n_count = 1;
	cout << "Starting table *************************************\n\n";
	while (n_count <= n)
	{
		int m_count = 1;
		while (m_count <= m)
		{
			cout << n_count << "*" << m_count << "=" << n_count * m_count << "\n";
			m_count++;
		}

		cout << endl;

		n_count++;
	}
	cout << "Table finished! ************************************\n";

	return 0;
}