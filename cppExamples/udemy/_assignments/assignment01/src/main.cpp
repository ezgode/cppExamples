#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
	cout << "Give me a string" << endl;
	string str {};
	getline(cin, str);

	string spaces(str.length(), ' ');
	string tail {};
	for (int i {0}; i<str.length(); ++i){
		spaces.erase(0,1);
		tail = str.substr(0, i+1);
		cout << spaces << tail;
		reverse(tail.begin(), tail.end());
		cout << tail.substr(1, i) << endl;
	}

	return 1;
}
