#include <iostream>

using namespace std;
int main()
{

	cout << "Introduce an integer representing the number of cents ";
	int n_cents {0};
	cin >> n_cents;

	const int cents_in_dollar {100};
	const int cents_in_quarter {25};
	const int cents_in_dime {10};
	const int cents_in_nickle {5};
	const int cents_in_penny {1};

	int dollars{0}, quarters{0}, dimes{0}, nickles{0}, pennys{0};

	dollars = n_cents / cents_in_dollar;
	n_cents %= cents_in_dollar;

	quarters = n_cents / cents_in_quarter;
	n_cents %= cents_in_quarter;

	dimes = n_cents / cents_in_dime;
	n_cents %= cents_in_dime;

	nickles = n_cents / cents_in_nickle;
	n_cents %= cents_in_nickle;

	pennys = n_cents / cents_in_penny;

	cout << "So we have" << endl;
	cout << "\t" << dollars << " dollars" << endl;
	cout << "\t" << quarters << " quarters" << endl;
	cout << "\t" << dimes << " dimes" << endl;
	cout << "\t" << nickles << " nickels" << endl;
	cout << "\t" << pennys << " pennys" << endl;

	return 0;
}
