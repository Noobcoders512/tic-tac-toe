#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
string name1;
string name2;
char map[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'}}, digit = '0';
bool turn = 0;
int flag = 0,bari=0;
void mapformation()
{
	
	cout << "    | 	 |	 \n";
	cout<<""<<map[0][0]<<"   |"<< map[0][1] << "   |"<< map[0][2] << "  \n";
	cout << "____|____|____\n";
	cout << "    |	 |	 \n";
	cout << "" << map[1][0] << "   |" << map[1][1] << "   |" << map[1][2] << "  \n";
	cout << "____|____|____\n";
	cout << "    |	 |	 \n";
	cout << "" << map[2][0] << "   |" << map[2][1] << "   |" << map[2][2] << "  \n";
	cout << "    |	 |	 \n";

}
void turns()
{
	if (bari % 2 == 0)
	{
		cout << "Player 1(x) ki bari ha" << endl;
	}
	else
	{
		cout << "Player 2(o) ki bari ha" << endl;
	}
	cout << "Enter the digit between 1 and 9 :"<<endl;
	cin >> digit;
	
	if (digit >= '1' && digit <= '9')
	{
		if (digit == '1')
		{
			if (map[0][0] != 'x' && map[0][0] != 'o')
			{
				if (turn == 0)
				{
					map[0][0] = 'x';
					turn = 1;
				}
				else if (turn == 1)
				{
					map[0][0] = 'o';
					turn = 0;
				}
			}
		}
		if (digit == '2')
		{
			if (map[0][1] != 'x' && map[0][1] != 'o')
			{
				if (turn == 0)
				{
					map[0][1] = 'x';
					turn = 1;
				}
				else if (turn == 1)
				{
					map[0][1] = 'o';
					turn = 0;
				}
			}
		}
		if (digit == '3')
		{
			if (map[0][2] != 'x' && map[0][2] != 'o')
			{
				if (turn == 0)
				{
					map[0][2] = 'x';
					turn = 1;
				}
				else if (turn == 1)
				{
					map[0][2] = 'o';
					turn = 0;
				}
			}
		}
		if (digit == '4')
		{
			if (map[1][0] != 'x' && map[1][0] != 'o')
			{
				if (turn == 0)
				{
					map[1][0] = 'x';
					turn = 1;
				}
				else if (turn == 1)
				{
					map[1][0] = 'o';
					turn = 0;
				}
			}
		}
		if (digit == '5')
		{
			if (map[1][1] != 'x' && map[1][1] != 'o')
			{
				if (turn == 0)
				{
					map[1][1] = 'x';
					turn = 1;
				}
				else if (turn == 1)
				{
					map[1][1] = 'o';
					turn = 0;
				}
			}
		}
		if (digit == '6')
		{
			if (map[1][2] != 'x' && map[1][2] != 'o')
			{
				if (turn == 0)
				{
					map[1][2] = 'x';
					turn = 1;
				}
				else if (turn == 1)
				{
					map[1][2] = 'o';
					turn = 0;
				}
			}
		}
		if (digit == '7')
		{
			if (map[2][0] != 'x' && map[2][0] != 'o')
			{
				if (turn == 0)
				{
					map[2][0] = 'x';
					turn = 1;
				}
				else if (turn == 1)
				{
					map[2][0] = 'o';
					turn = 0;
				}
			}
		}
		if (digit == '8')
		{
			if (map[2][1] != 'x' && map[2][1] != 'o')
			{
				if (turn == 0)
				{
					map[2][1] = 'x';
					turn = 1;
				}
				else if (turn == 1)
				{
					map[2][1] = 'o';
					turn = 0;
				}
			}
		}
		if (digit == '9')
		{
			if (map[2][2] != 'x' && map[2][2] != 'o')
			{
				if (turn == 0)
				{
					map[2][2] = 'x';
					turn = 1;
				}
				else if (turn == 1)
				{
					map[2][2] = 'o';
					turn = 0;
				}
			}
		}
	}
	else
	{
		cout << "Enter the valid number please";
	}
}
bool gameend()
{
	if (map[0][0]=='x' && (map[0][0] == map[0][1] && map[0][1] == map[0][2]))
	{
		flag = 1;
		return false;
	}
	if (map[1][0] == 'x' &&  (map[1][0] == map[1][1] && map[1][1] == map[1][2]))
	{
		flag = 1;
		return false;
	}
	if (map[2][0] == 'x' && (map[2][0] == map[2][1] && map[2][1] == map[2][2]))
	{
		flag = 1;
		return false;
	}
	if (map[0][0] == 'o' && (map[0][0] == map[0][1] && map[0][1] == map[0][2]))
	{
		flag = 0;
		return false;
	}
	if (map[1][0] == 'o' && (map[1][0] == map[1][1] && map[1][1] == map[1][2]))
	{
		flag = 0;
		return false;
	}
	if (map[2][0] == 'o' && (map[2][0] == map[2][1] && map[2][1] == map[2][2]))
	{
		flag = 0;
		return false;
	}
	if (map[0][0] == 'x' && (map[0][0] == map[1][0] && map[1][0] == map[2][0]))
	{
		flag = 1;
		return false;
	}
	if (map[0][1] == 'x' && (map[0][1] == map[1][1] && map[1][1] == map[2][1]))
	{
		flag = 1;
		return false;
	}
	if (map[0][2] == 'x' && (map[0][2] == map[1][2] && map[1][2] == map[2][2]))
	{
		flag = 1;
		return false;
	}
	if (map[0][0] == 'o' && (map[0][0] == map[1][0] && map[1][0] == map[2][0]))
	{
		flag = 0;
		return false;
	}
	if (map[0][1] == 'o' && (map[0][1] == map[1][1] && map[1][1] == map[2][1]))
	{
		flag = 0;
		return false;
	}
	if (map[0][2] == 'o' && (map[0][2] == map[1][2] && map[1][2] == map[2][2]))
	{
		flag = 0;
		return false;
	}
	if (map[0][0]=='x' && (map[0][0] == map[1][1] && map[1][1] == map[2][2]))
	{
		flag = 1;
		return false;
	}
	if (map[0][2] == 'x' && (map[0][2] == map[1][1] && map[1][1] == map[2][0]))
	{
		flag = 1;
		return false;
	}
	if (map[0][0] == 'o' && (map[0][0] == map[1][1] && map[1][1] == map[2][2]))
	{
		flag = 0;
		return false;
	}
	if (map[0][2] == 'o' && (map[0][2] == map[1][1] && map[1][1] == map[2][0]))
	{
		flag = 0;
		return false;
	}
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (map[i][j] == 'x' || map[i][j]=='o')
			{
				count++;
			}

		}
	}
	if (count == 9)
	{
		flag = 2;
		return false;
		
	}
	return true;
}

int main()
{
	int i = 0;
	bool end = true;
	while (end)
	{
		mapformation();
		turns();
		mapformation();
		end = gameend();
		system("cls");
		bari++;
		i++;
	}
	Sleep(500);
	if (flag == 1)
	{
		cout << "Player 1 Wins the game";
	}
	if (flag == 0)
	{
		cout << "Player 2 Wins the game";
	}
	if (flag == 2)
	{
		cout << "draw match";
	}

	return 0;
}