#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void nickname(int a, int b);

int main()
{
	srand(time(0));
	int counter = 1;
	while (counter < 1000)
	{
		cout << "=============================================" << endl;
		cout << "Press enter to roll dice: ";

		cin.ignore();

		int x = rand() % 6 + 1;
		int y = rand() % 6 + 1;
		int const point = x + y;

		cout << "\nDice Roll : " << x << " & " << y << endl;
		cout << "Dice Total: " << point << endl << endl;
		nickname(x, y);

		if (point == 7 || point == 11)
		{
			cout << "\nComments: 7 or 11 Winner!" << endl << endl;
		}

		else if (point == 2 || point == 3 || point == 12)
		{
			cout << "\nComments: Crap Dice Lose!" << endl << endl;
		}

		else
		{
			bool isrolled = false;
			int count = 1;
			while (!isrolled && count < 1000)
			{
				cin.ignore();
				count++;

				int a = rand() % 6 + 1;
				int b = rand() % 6 + 1;
				int roll = a + b;
				
				cout << "=============================================" << endl;
				cout << "Point: " << point << endl << endl;
				cout << "Dice Roll : " << a << " & " << b << endl;
				cout << "Dice Total: " << roll << endl << endl;
				nickname(a, b);
				
				if (point == roll)
				{
					cout << "Comments: WINNER!" << endl << endl;
					isrolled = true;
				}
				else if (count > 1 && roll == 7)
				{
					cout << "Comments: Crap Out Lose!" << endl << endl;
					isrolled = true;
				}
			}
		}
	}
	system("pause");
	return 0;
}

void nickname(int a, int b)
{
	if (a == 2 & b == 2) { cout << "Comments: Hard 4!" << endl; }
	if (a == 3 & b == 3) { cout << "Comments: Hard 6!" << endl; }
	if (a == 4 & b == 4) { cout << "Comments: Hard 8!" << endl; }
	if (a == 5 & b == 5) { cout << "Comments: Hard 10!"<< endl; }
}
