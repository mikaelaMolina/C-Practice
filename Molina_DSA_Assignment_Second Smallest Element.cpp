#include <iostream>

using namespace std;

/*
Write a C++ program to find seacond smallest elements in a given array of integers.
*/

	//function for finding the second smallest number
	int findSecondSmallest(int array[], int numArray){
		
		int smallest = INT_MAX; //setting the smallest amount to the maximum possible amount in int
		int secondSmallest = 0;
		
		for(int i = 0; i < numArray; i++){
			
			if(array[i] < smallest){
				
				secondSmallest = smallest; //setting secondSmallest value as smallest (before)
				
				smallest = array[i]; //finding the smallest amount (new value of smallest)
				
			}
			
			for(int j = 0; j < numArray; j++){
				
				//if the value is not equal to the smallest value but greater than the second smallest
				if(array[j] < secondSmallest && array[j] != smallest){ 
				
					secondSmallest = array[j];
					
				}
			}

		}
		
		return secondSmallest;
	}

int main(){

	int numArray;
		
	cout << "Enter the number of elements in the array: " << endl;
	cin >> numArray;
	
	//Initialize the array
		
	int array[numArray];

	cout << "Enter the elements of the array: " << endl;
	
	for(int i = 0; i < numArray; i++){
		
		cin >> array[i];
		
	}
	
	cout << "The second smallest element in the array is: ";
	cout << findSecondSmallest(array, numArray);

	return 0;

}