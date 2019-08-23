#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

void print_menu(void);
char get_user_input(void);
void print_vector(const vector<int> &);
void add_new_el(vector<int> &, int&, double&, int&, int&);
void print_mean(const double);
void print_min(const int);
void print_max(const int);
void print_byebye(void);

int main()
{
	vector <int> vec;
	double mean{0}; 
	int min{0}, max{0}, sum{0};
	char opt {};
    do {
    	// print the menu
    	print_menu();

    	// get input
    	opt = get_user_input();

    	switch (opt) {
    		case 'p' : print_vector(vec); break; 
    		case 'a' : add_new_el(vec, sum, mean, max, min); break; 
    		case 'm' : print_mean(mean); break;
    		case 's' : print_min(min); break;
    		case 'l' : print_max(max); break;
    		case 'q' : print_byebye(); break; 	    			
    		default : cout << "unknown option" << endl;
    	}
    } while (opt!='q');
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT CHANGE THE CODE BELOW THIS LINE----
    return 1;
}
void print_menu(){
	cout << endl << "----------------------" << endl;
	cout << "P - Print numbers" << endl;
	cout << "A - Add a number" << endl;
	cout << "M - Display mean of the numbers" << endl;
	cout << "S - Display the smallest number" << endl;
	cout << "L - Display the largest number" << endl;
	cout << "Q - Quit" << endl;
	cout << "----------------------" << endl;	

	return;
}
char get_user_input(){
	char opt {};
	cout << endl << "Please introduce your option: ";
	cin >> opt;
	return tolower(opt);
}
void print_vector(const vector<int> &vec){
	cout << "The vector is " << endl; 
	cout << "[";
	for (int i {0}; i<vec.size(); ++i)
		cout << " " << vec.at(i);
	cout << " ]";
}
void add_new_el(vector<int> &vec, int &sum, double &mean, int &max, int &min){
	cout << "Introduce the integer to add" << endl; 
	int new_el {0};
	cin >> new_el;
	vec.push_back(new_el);

	sum += new_el;
	mean = static_cast<double>(sum)/vec.size();
	max = (vec.size()==1) ? vec.at(0) : ( (new_el>max) ? new_el : max );
	min = (vec.size()==1) ? vec.at(0) : ( (new_el<min) ? new_el : min );
}
void print_mean(const double mean){
	cout << "The mean is " << mean << endl; 
}
void print_min(const int min){
	cout << "The smallest element is " << min << endl;
}
void print_max(const int max){
	cout << "The largest element is " << max << endl;
}
void print_byebye(){
	cout << "quiting" << endl; 
}
