#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <time.h>
using namespace std;

const unsigned int N = 10;

void rrand(int matrix[N][N]);
void transp(int matrix[N][N], int transp_matrix[N][N]);
void sum(int matrix1[N][N], int matrix2[N][N], int sum_matrix[N][N]);
void print(int matrix[N][N]);

int main()
{
	int matrix[N][N], transp_matrix[N][N], sum_matrix[N][N];


	rrand(matrix);
	cout << "Generated matrix:\n";
	print(matrix);

	transp(matrix, transp_matrix);
	cout << "\nTransposed matrix:\n";
	print(transp_matrix);

	sum(matrix, transp_matrix, sum_matrix);
	cout << "\nThe sum of these matrices:\n";
	print(sum_matrix);
}

void rrand(int matrix[N][N])
{
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 10;
		}
	}
}

void transp(int matrix[N][N], int transp_matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			transp_matrix[i][j] = matrix[j][i];
		}
	}
}

void sum(int matrix1[N][N], int matrix2[N][N], int sum_matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
}

void print(int matrix[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << setw(3) << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
