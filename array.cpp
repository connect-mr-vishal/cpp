#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

using namespace std;

int main(){
	
	
	


	array<int,100> arr ;
	arr.fill()
	for(int i = 0 ; i < arr.size() ; i++){
		cout << arr.at(i) << endl;
	}

	int id[100];
	iota(begin(id),end(id),0);
	
	for(int i = 0 ;  i < 100 ;i++){
		cout << id[i] << endl; 
	}
/*
	for(int i = 0 ;  i < 100 ;i++){
		id[i] = i;
		cout << id[i] << endl; 
	}
	*/
	return 0;
}
