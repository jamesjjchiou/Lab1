#include<iostream> 
using namespace std;
int main() 
{
	int a;
	int b;
	cout << "enter a number:" << endl;
	cin >> a;
	b = a;
	while (b > 1)
	{
		cout << b << " ";
		if (b % 2 == 0)
		{
			b = b / 2;
		}
		else if (b % 2 != 0)
		{
			b = 3*b + 1;
		}
	}
	cout << b;
	system("pause"); 
	return 0;
}
