#include <iostream>

using namespace std;

#define N 5
#define M 10

void random_init(int matrix[N][M], int, int);
string convert_matrix_to_string(int matrix[N][M]);
int max_mark(int matrix[N][M]);

int main() {

	int marks[N][M];

	random_init(marks, 1, 10);
	cout << "Classes marks:\n" << convert_matrix_to_string(marks);
	cout << "Max mark is "<< max_mark(marks);

	return 0;
}