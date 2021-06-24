#include <iostream>
#include <string>

using namespace std;


int main(){
	int rotations = 0;
	string tmp = "";
	long long int numA = 0;
	long long int numB = 0;
	
	getline(cin,tmp);
	numA = stoi(tmp.substr(0,tmp.find(" ")));
	tmp.erase(0,tmp.find(" ")+1);
	numB = stoi(tmp);
	
	while(numA != numB){
		while(numA > numB){	
			if(numA % 2 == 0){
				numA = numA / 2;
			}else{
				numA += 1;
			}
			rotations++;
		}

	    if(numA < numB){
	        numA += 1;
	        rotations++;
	    }

	}
	
	cout << rotations << endl;

	return 0;
}
