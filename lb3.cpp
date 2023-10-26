#include <iostream>

using namespace std;
int main()
{
	int num, a, b;
	cout << "Insert number: ";
	cin >> num;
	a = num / 10 % 10;
	b = num % 10;

	cout << "Desatki menshe abo dorivnuyt odunicam: " << boolalpha << (a <= b) << ".\n";

	(a <= b) ? cout << "Desatki menshe abo dorivnuyt edenicam." : cout << "Desatki NE menshe abo dorivnuyt edenicam.";


}
