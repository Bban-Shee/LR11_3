#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <time.h>
using namespace std;

const unsigned int N = 10;
const int ABSLIMIT = 50;

int rrand(int range_min, int range_max);

int main()
{
	int matrix[N][N];

	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rrand(-ABSLIMIT, ABSLIMIT);
		}
	}

	cout << "\nGenerated matrix:\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << setw(3) << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int Z;
	cout << "\nEnter a number: ";
	cin >> Z;
	cout << endl;

	unsigned int counter = 0;
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			if (matrix[i][j] < Z)
				counter++;
		}
		cout << "Nnmber of items in column " << j + 1 << " whose value does not exceed the entered number: " << counter << endl;
		counter = 0;
	}
}

int rrand(int range_min, int range_max)
{
	return rand() % (range_max - range_min + 1) + range_min;
}