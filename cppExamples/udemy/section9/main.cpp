#include <iostream>
#include <vector>

using namespace std;
int main()
{
	vector <int> vec;
	double mean{0}; 
	int min{0}, max{0}, sum{0};
	char opt {};
    do {
    	cout << endl << "----------------------" << endl;
    	cout << "P - Print numbers" << endl;
    	cout << "A - Add a number" << endl;
    	cout << "M - Display mean of the numbers" << endl;
    	cout << "S - Display the smallest number" << endl;
    	cout << "L - Display the largest number" << endl;
    	cout << "Q - Quit" << endl;
    	cout << "----------------------" << endl;
    	cin >> opt;

    	switch (opt) {
    		case 'P' :
    		case 'p' : {
    			cout << "The vector is " << endl; 
    			cout << "[";
    			for (int i {0}; i<vec.size(); ++i)
    				cout << " " << vec.at(i);
    			cout << " ]";
    			break;    		
    		}
    		case 'A' :
    		case 'a' : {
    			cout << "Introduce the integer to add" << endl; 
    			int new_el {0};
    			cin >> new_el;
    			vec.push_back(new_el);

    			sum += new_el;
    			mean = static_cast<double>(sum)/vec.size();
    			max = (vec.size()==1) ? vec.at(0) : ( (new_el>max) ? new_el : max );
    			min = (vec.size()==1) ? vec.at(0) : ( (new_el<min) ? new_el : min );

    			break;	
    		}
    		case 'M' :
    		case 'm' : {
    			cout << "The mean is " << mean << endl; 
    			break;    		    		    			
    		}
    		case 'S' :
    		case 's' : {
    			cout << "The smallest element is " << min << endl; break;	
    		}
    		case 'L' :
    		case 'l' : {
    			cout << "The largest element is " << max << endl; break;	
    		}    	
    		case 'Q' :
    		case 'q' : {
    			cout << "quiting" << endl; break;	
    		}    	    			
    		default : cout << "unknown option" << endl;
    	}
    } while (opt!='q' && opt!='Q');
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT CHANGE THE CODE BELOW THIS LINE----
    return 1;
}
