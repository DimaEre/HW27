#include <iostream>
#include<Windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 0, b = 0, c = 0;
	cin >> b;
	cin >> a;
	try
	{
		if(b == 0) throw exception("0");
	}
	catch (exception& ex)
	{
		cout << "�������� ����� �������, �� ����� �������� �� ����.";
		return 0;
	}
	c = a / b;
	cout << c << endl;
}
