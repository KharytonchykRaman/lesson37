#include <iostream>
#include <string>

using namespace std;

#define N 5
#define M 10

void random_init(int matrix[N][M], int min, int max) {

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

string convert_matrix_to_string(int matrix[N][M]) {

	string msg = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			msg += to_string(matrix[i][j]) + " ";
		}
		msg += "\n";
	}

	return msg;
}

int max_mark(int matrix[N][M]) {

	int max = 0;

	for (int i = 0; i < N && max != 10; i++)
	{
		for (int j = 0; j < M && max != 10; j++)
		{
			if (max < matrix[i][j])
			{
				max = matrix[i][j];
			}
		}
	}

	return max;
}

int group_most_max_marks(int matrix[N][M]) {

	int index = 0;
	int maxMark = max_mark(matrix);
	int countMax = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (maxMark == matrix[i][j])
			{
				countMax++;
			}
		}
	}

	return index;
}
