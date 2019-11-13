#include<iostream>
#include<stdlib.h>
using namespace std;
char matrix[3][3] = {'1','2','3','4','5','6','7','8','9'};
char player = 'X';
void Matrix()
{
	system("cls");
	cout << "Tic Tac Toe" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void enter()
{
	int n;
	cout << "Enter the position number: ";
		cin >> n;

		if (n == 1)
			matrix[0][0] = player;
		else if (n == 2)
			matrix[0][1] = player;
		else if (n == 3)
			matrix[0][2] = player;
		else if (n == 4)
			matrix[1][0] = player;
		else if (n == 5)
			matrix[1][1] = player;
		else if (n == 6)
			matrix[1][2] = player;
		else if (n == 7)
			matrix[2][0] = player;
		else if (n == 8)
			matrix[2][1] = player;
		else if (n == 9)
			matrix[2][2] = player;
}
void Toggleplayer()
{
	if (player == 'X')
		player = 'O';
	else player = 'X';
}
char win()
{//first player
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
		return 'X';

	//second player
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
		return 'O';

	return '/';
}

int main()
{
	Matrix();
	while (1)
	{
		enter();
		Matrix();
		if (win() == 'X')
		{
			cout << "X wins!";
			break;
		}
		else if (win() == 'O')
		{
			cout << "O wins!";
			break;
		}
		Toggleplayer();
	}
	cout << "\n";
	system("pause");
	return 0;
}
