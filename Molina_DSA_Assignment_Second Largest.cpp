#include <iostream>

using namespace std;

/*
Write a C++ program to find seacond largest element in a given array of integers.
*/

	//function for finding the second largest element
	int findSecondLargest(int array[], int numArray){
		
		int largest = INT_MIN; //setting the largest amount to the minimum possible amount in int
		int secondLargest = 0;
		
		for(int i = 0; i < numArray; i++){
			
			if(array[i] > largest){
				
				secondLargest = largest; //setting secondLargest value as Largest (before)
				
				largest = array[i]; //finding the largest value (new value of largest)
				
			}
			
			for(int j = 0; j < numArray; j++){
				
				//if the value is not equal to the smallest value but greater than the second smallest
				if(array[j] > secondLargest && array[j] != largest){ 
				
					secondLargest = array[j];
					
				}
			}

		}
		
		return secondLargest;
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
	
	cout << "The second largest element in the array is: ";
	cout << findSecondLargest(array, numArray);

	return 0;

}