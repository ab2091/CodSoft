//#include<iostream>
//using namespace std;
//int main()
//{
//	bool winner = true;
//	int n1, n2;
//	char temp;
//	char alp;
//	const int rows = 3, col = 3;
//	char a[rows][col] = { {'*','*','*'},{'*','*','*'} ,{'*','*','*'} };
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	for (int b = 0; b < 9; b++)
//	{
//		if (b % 2 == 0)
//		{
//			cout << "Enter Two Numbers: ";
//			cin >> n1 >> n2;
//			if ((n1 >= 0 && n1 <= 2) && (n2 >= 0 && n2 <= 2) && (a[n1][n2] == '*'))
//			{
//				a[n1][n2] = 'X';
//			}
//			else
//			{
//				cout << "Not Possible " << endl << "Enter Numbers again:";
//				cin >> n1 >> n2;
//				if ((n1 >= 0 && n1 <= 2) && (n2 >= 0 && n2 <= 2) && (a[n1][n2] == '*'))
//				{
//					a[n1][n2] = 'X';
//				}
//			}
//
//
//
//		}
//		else
//		{
//			cout << "Enter Two Numbers: ";
//			cin >> n1 >> n2;
//			if ((n1 >= 0 && n1 <= 2) && (n2 >= 0 && n2 <= 2) && (a[n1][n2] == '*'))
//			{
//				a[n1][n2] = 'O';
//			}
//			else
//			{
//				cout << "Not Possible " << endl << "Enter Numbers again: ";
//				cin >> n1 >> n2;
//				if ((n1 >= 0 && n1 <= 2) && (n2 >= 0 && n2 <= 2) && (a[n1][n2] == '*'))
//				{
//					a[n1][n2] = 'O';
//				}
//			}
//		}
//		for (int i = 0; i < rows; i++)
//		{
//			for (int j = 0; j < col; j++)
//			{
//				cout << a[i][j] << " ";
//			}
//			cout << endl;
//		}
//		if ((a[0][0] == 'X' && a[1][0] == 'X' && a[2][0] == 'X') || (a[0][0] == 'X' && a[0][1] == 'X' && a[0][2] == 'X') || (a[0][0] == 'X' && a[1][1] == 'X' && a[2][2] == 'X') || (a[1][1] == 'X' && a[1][0] == 'X' && a[1][2] == 'X') || (a[2][2] == 'X' && a[2][1] == 'X' && a[2][0] == 'X') || (a[0][1] == 'X' && a[1][1] == 'X' && a[2][1] == 'X') || (a[0][2] == 'X' && a[1][2] == 'X' && a[2][2] == 'X') || (a[0][2] == 'X' && a[1][1] == 'X' && a[2][0] == 'X'))
//		{
//			cout << "Player 1 is Winner";
//			winner = true;
//			break;
//		}
//		else if ((a[0][0] == 'O' && a[1][0] == 'O' && a[2][0] == 'O') || (a[0][0] == 'O' && a[0][1] == 'O' && a[0][2] == 'O') || (a[0][0] == 'O' && a[1][1] == 'O' && a[2][2] == 'O') || (a[1][1] == 'O' && a[1][0] == 'O' && a[1][2] == 'O') || (a[2][2] == 'O' && a[2][1] == 'O' && a[2][0] == 'O') || (a[0][1] == 'O' && a[1][1] == 'O' && a[2][1] == 'O') || (a[0][2] == 'O' && a[1][2] == 'O' && a[2][2] == 'O') || (a[0][2] == 'O' && a[1][1] == 'O' && a[2][0] == 'O'))
//		{
//			cout << "Player 2 is winner";
//			winner = true;
//			break;
//
//		}
//		else
//		{
//			winner = false;
//		}
//
//	}
//	if (winner == false)
//	{
//		cout << "It is a tie";
//	}
//
//
//
//	return 0;
//}
