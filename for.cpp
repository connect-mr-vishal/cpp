#include <iostream>
#include <array>
using namespace std;

int main(){
	array<int,3> arr{1,2,3} ;
	for(auto ele: arr){
		cout << ele <<endl;
	
	}

	for(auto& ele: arr){
		cout << ele <<endl;
	
	}

	for(int element: arr ){
		cout << element <<endl;

	}
	return 0;
}
