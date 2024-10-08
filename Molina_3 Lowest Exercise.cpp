#include <iostream>

using namespace std;

/*
Write a C++ program that will display the 3 lowest numbers.
*/

int main(){
	
	int numArray;
	
	//Asking for how many elements the array possesses
	cout << "Enter the number of elements in the array: " << endl;
	cin >> numArray;
	
	int array[numArray]; //initialize array
	
	//Asking for the elements in the array
	cout << "Enter the elements in the array: " << endl;
	
	//for loops for the input of the elements in the array
	for(int i = 0; i < numArray; i++){
		cin >> array[i];
	}
	
	cout << "The 3 lowest numbers in the array are: " << endl;
	
	//sorting the array
	for(int j = 0; j < numArray; j++){ //these for loops go through every element
		for(int k = 0; k < numArray; k++){
		if(k < numArray-1){ //to make sure that it doesn't go past the number of elements in the array
				if(array[k] > array[k+1]){ //comparing the values
					swap(array[k], array[k+1]); //swapping the value 
		}
	}
	}
	}
	
	for(int i = 0; i < 3; i++){
		cout << array[i] << endl;
	}
}