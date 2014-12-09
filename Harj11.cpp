// HARJOITUS 11
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

void main()
{
	int luku1;
	cout << "Anna luku1: \n";
	cin >> luku1;
	int luku2;
	cout << "Anna luku2: \n";
	cin >> luku2;

	do
	{
		int valinta;
		cout << "VALIKKO\n";
		cout << "0. Lopetus\n";
		cout << "1. Summa\n";
		cout << "2. Erotus\n";
		cout << "3. Tulo\n";
		cout << "4. Osamaara\n";
		cout << "5. Jakojaannos\n";
		cout << "6. Syota uudet luvut laskemista varten\n";
		cin >> ws >> valinta;

		switch (valinta)
		{
		case 0:
			return;
			break;
		case 1: cout << luku1 + luku2 << endl;
			break;
		case 2: cout << luku1 - luku2 << endl;
			break;
		case 3: cout << luku1 * luku2 << endl;
			break;
		case 4:
			if (luku2 != 0)
				cout << (float)luku1 / luku2 << endl;
			break;
		case 5: cout << luku1 % luku2 << endl;
			break;
		case 6: cout << "Anna luku1: \n";
			cin >> luku1;
			cout << "Anna luku2: \n";
			cin >> luku2;
			break;
		}
	} while (1);

}