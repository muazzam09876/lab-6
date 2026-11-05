#include<iostream>
using namespace std;
int main()
{
	int daynum;
	cout << " Enter day number (0-7)" << endl;
	cin >> daynum;
	switch (daynum)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "Weekdays";
		break;
	case 6:
	case 7:
		cout << "Weekend";
		break;
	defualt:
		cout << "invalid day number";
	}



	// TASK 3


	char light;
	cout << "enter signal" << endl;
	cin >> light;
	switch (light)
	{
	case 'r':
	case'R':
			cout << "Stop";
			break;
		case'y':
		case'Y':
				cout << "Get ready";
				break;
			case'g':
			case'G':
				break;
			default:
				cout << "invalid light";
	}
	return 0;
}

























	







