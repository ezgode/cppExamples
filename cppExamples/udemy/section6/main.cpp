#include <iostream>

using namespace std;
int main()
{
	const double tax_rate {0.06};
	const double price_small_room {25};
	const double price_large_room {35};
	const int expiration {30};
	cout << "Hello, welcom to zk\'s Carpet Cleaning Service\n";
	
	cout << "\nHow many small rooms would you like cleadned? ";
	int small_rooms {0};
	cin >> small_rooms;
	
	cout << "How many large rooms would you like cleadned? ";
	int large_rooms {0};
	cin >> large_rooms;	
	
	cout << "\nEstimate for carpet cleaning service";
	cout << "\nNumber of small rooms: " << small_rooms << endl;
	cout << "Number of large rooms: " << large_rooms << endl;
	cout << "Price per small room: $" << price_small_room << endl;
	cout << "Price per large room: $" << price_large_room << endl;
	double cost {(price_small_room * small_rooms) + (price_large_room * large_rooms)};
	cout << "Cost: $" << cost << endl;
	cout << "Tax: $" << cost * tax_rate<< endl;
	cout << "============================" << endl;
	cout << "Total estimate: " << cost * (1 + tax_rate) << endl;
	cout << "This estimate is valid for " << expiration << " days" << endl;
	return 0;
}
