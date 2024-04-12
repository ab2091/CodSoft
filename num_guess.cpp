#include<iostream>
#include <cstdlib>
using namespace std;
int guess()
{
	srand(time(nullptr));
	int num2 = rand() % 1000;
	int num = 1000;
	while (num != num2)
	{
		cout << "Enter Number between 0 and 999: ";
		cin >> num;
		if (num == num2)
		{
			cout << "Number Guessed Correctly, it is " << num2 << endl;
			break;
		}
		else if ((num - num2) >= 200)
		{
			cout << "Guessed Number too High!!" << endl;
		}
		else if ((num2 - num) >= 200)
		{
			cout << "Guessed Number too Low!!" << endl;
		}
		else if ((num2 - num) >= 100)
		{
			cout << "Guessed Number Lower than generated number!!" << endl;
		}
		else if ((num - num2) >= 100)
		{
			cout << "Guessed Number Greater than generated number!!" << endl;
		}
		else if ((num - num2) >= 20)
		{
			cout << "Guessed Number Greater than generated number but getting closer!!" << endl;
		}
		else if ((num2 - num) >= 20)
		{
			cout << "Guessed Number Lower than generated number but getting closer!!" << endl;
		}
		else if ((num2 - num) > 0)
		{
			cout << "Guessed Number Lower than generated number but extremely close !!" << endl;
		}
		else if ((num - num2) > 0)
		{
			cout << "Guessed Number Greater than generated number but extremely close !!"<<endl;
		}
		

	}
	return 0;
}
int main()
{
	guess();
	return 0;
}