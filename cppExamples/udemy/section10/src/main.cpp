#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    string abc {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"QWERTYUIOPLKJHGFDSAZXCVBNMmnbvcxzasdfghjklpoiuytrewq"};
	cout << "Hi there, introduce a secret message" << endl;
	string orig_msg {};
	getline(cin, orig_msg);
	cout << "--------"<< endl;

	string encrypt_msg {};
	for (char c : orig_msg)
		encrypt_msg.push_back( (abc.find(c)!=string::npos) ? key.at( abc.find(c)) : c );
	cout << "The encrypted msg is " << endl << encrypt_msg << endl << endl;

	string rebuilt_msg {};
	for (char c : encrypt_msg)
		rebuilt_msg.push_back( (key.find(c)!=string::npos) ? abc.at( key.find(c)) : c );
	cout << "The recovered msg is " << endl << rebuilt_msg << endl << endl;	

	return 1;
}
