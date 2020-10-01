// C++ program to Count number of ones in binary repersentation of a number
#include <iostream>
using namespace std; 

/* Function to get no of set ones in binary 
representation of positive integer n */
unsigned int countSetOnes(unsigned int n) 
{ 
	unsigned int count = 0; 
	while (n!=0) { 
		count += n & 1; 
		n >>= 1; 
	} 
	return count; 
} 

/* Program to test function countSetOnes */
int main() 
{ 
	int a;
	cout<<"Enter the number to check";
	cin>>a;
	cout <<"Number of Ones in the binary repersentation of the given number is : "<<countSetOnes(a); 
	return 0; 
} 

// This code is contributed by Keshav Jha
