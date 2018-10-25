//Write a program to find the sum of all elements of an array.

//including libraries
#include<iostream>
using namespace std;

//declaring function to add numbers
int add(int arg[],int l){
	//declaring variables
	int n, s;
	//initializing variables
	n=0; s=0;
	//running loop to extract each number from array
	while(n<l){
		//adding numbers
		s=s+arg[n];
		//incrementing n;
		n++;
	}
	//returning sum to caller/driver function
	return s;
}

//declaring driver function
int main(){
	//declaring variables
	int sum,ln,i;
	//asking user to enter the length of array
	cout<<"Enter length of array."<<endl;
	//accepting value
	cin>>ln;
	//declaring array of required length
	int array[ln];
	//running loop to input value in array
	for(i=0; i<ln;i++){
		//asking user to enter number
		cout<<"Enter a number."<<endl;
		//accepting value
		cin>>array[i];
	}
	//passing array and array length to function
	sum=add(array,ln);
	//displaying result
	cout<<"The sum of all numbers of the array = "<<sum<<endl;
	//returning integer value to main function
	return 0;
}

