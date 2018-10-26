//Write a program to merge two arrays, find maximum of both arrays, and minimum of both arrays.

//include libraries
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//declaring function to merge arrays
void merge(int arg1[], int arg2[], int l1, int l2){
	//declaring new array
	int arg3[l1+l2];
	//declaring variables
	int i=0, j=0;
	//running loop to enter elements of first array in new array
	for(i=0;i<l1;i++){
		//initializing values
		arg3[i]=arg1[i];
	}
	//running loop to enter elements of second array in new array
	for(i=l1,j=0;i<(l1+l2),j<l2;i++,j++){
		//initializing values
		arg3[i]=arg2[j];
	}
	//displaying output
	cout<<"Merged array."<<endl;
	for(i=0;i<(l1+l2);i++){
		cout<<arg3[i];
	}
	cout<<endl;
}

//declaring function to find maximum of both arrays
void MAXIMUM(int arg1[], int arg2[], int l1, int l2){
	//declaring variables
	int max1, max2, i, j;
	//initializing variables
	max1=arg1[0]; max2=arg2[0];
	i=0; j=0;
	//running loop to find maximum number of first array
	while(i<l1){
		//checking condition for maximum
		if(arg1[i]>max1){
			max1=arg1[i];
		}
		//incrementing value of i
		i++;
	}
	//running loop to find maximum number of second array
	while(j<l2){
		//checking condition for maximum
		if(arg2[j]>max1){
			max2=arg2[j];
		}
		//incrementing value of j
		j++;
	}
	//displaying result
	cout<<"Maximum number of first array = "<<max1<<endl;
	cout<<"Maximum number of second array = "<<max2<<endl;
}

//declaring function to find minimum of both arrays
void MINIMUM(int arg1[], int arg2[], int l1, int l2){
	//declaring variables
	int min1, min2, i, j;
	//initializing variables
	min1=arg1[0]; min2=arg2[0];
	i=0; j=0;
	//running loop to find minimum number of first array
	while(i<l1){
		//checking condition for minimum
		if(arg1[i]<min1){
			min1=arg1[i];
		}
		//incrementing value of i
		i++;
	}
	//running loop to find minimum number of second array
	while(j<l2){
		//checking condition for minimum
		if(arg2[j]<min2){
			min2=arg2[j];
		}
		//incrementing value of j
		j++;
	}
	//displaying result
	cout<<"Minimum number of first array = "<<min1<<endl;
	cout<<"Minimum number of second array = "<<min2<<endl;
}

//declaring driver function
int main(){
	//declaring variables
	int ln1, ln2, i;
	//asking user to enter size of both arrays
	cout<<"Enter size of array 1 and 2."<<endl;
	//accpeting values
	cin>>ln1>>ln2;
	//declaring arrays
	int arg1[ln1];
	int arg2[ln2];
	//acceptig values of array 1 from user
	cout<<"Array 1."<<endl;
	for(i=0;i<ln1;i++){
		cout<<"Enter element of array."<<endl;
		//accepting value
		cin>>arg1[i];
	}
	//accepting values of array 2 from user
	cout<<"Array 2."<<endl;
	for(i=0;i<ln2;i++){
		cout<<"Enter element of array."<<endl;
		//accepting value
		cin>>arg2[i];
	}
	//calling functions
	merge(arg1, arg2, ln1, ln2);
	MAXIMUM(arg1, arg2, ln1, ln2);
	MINIMUM(arg1, arg2, ln1, ln2);
	//returning integer value to main function
	return 0;
}
	
		
