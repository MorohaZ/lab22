
#include <iostream>
#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char** argv){
	int N = 0;
	if(argc == 1){
	cout << "Please input numbers to find average.";
	}
	else{ for(int i = 1 ;i<=(argc-1);i++){
		N += atoi(argv[i]);
		}
		float avg = N/(argc-1);
		cout << "---------------------------------\n";
		cout << "Average of " << (argc-1) << " numbers = " << avg;
		cout << "\n---------------------------------";
		
	}
}
