//Write a program to find smallest, largest, mean, median, and the number of highest frequency in the array using functions.

//including libraries
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//declaring function for finding smallest number
int MINIMUM(int arg[],int l){
	//declaring  variables
	int min, i;
	//initializing variables
	min=arg[0];
	i=0;
	//running loop to find minimum number
	while(i<l){
		//checking condition for minimum
		if(arg[i]<min){
			min=arg[i];
		}
		//incrementing value of i
		i++;
	}
	//returning minimum value to caller/driver function
	return min;
}

//declaring function for finding largestnumber
int MAXIMUM(int arg[], int l){
	//declaring variables
	int max, i;
	//initializing variables
	max=arg[0];
	i=0;
	//running loop to find maximum number
	while(i<l){
		//checking condition for maximum
		if(arg[i]>max){
			max=arg[i];
		}
		//incrementing value of i
		i++;
	}
	//returning maximum value to caller/driver function
	return max;
}

//declaring function to find mean
float MEAN(int arg[], int l){
	//declaring variables
	float mean;
	int sum, i;
	//initializing variables
	sum=0; i=0;
	//running loop to find sum
	while(i<l){
		sum=sum+arg[i];
		//incrementing value of i
		i++;
	}
	//finding mean
	mean=(float)sum/(float)l;
	//returning mean value to caller/driver function
	return mean;
}

//declaring function to find median
float MEDIAN(int arg[], int l){
	//sorting array
	sort(arg, arg+l);
	//checking if length of array is even or odd
	if(l%2==0){
		//finding median and returning value
		return (float)(arg[(l/2)-1]+arg[l/2])/2.0;
	}
	if(l%2!=0){
		//finding mean and returning value
		return (float)arg[l/2];
	}
}

//declaring function to find number of maximum frequency
void MAXFQ(int arg[], int l){
	//declaring variables
	int cn, nm, i, j, max, k;
	//declaring array to store all numbers which have max frequency
	int maxfqnm[l];
	//sorting array
	sort(arg, arg+l);
	//initializing variables
	cn=0; i=0; max=0; j=0; k=0;
	nm=arg[0];
	//running loop to check value
	while(i<=l){
		//checking if numbers match
		if(arg[i]==nm){
			cn++;//incrementing counter variable
		}
		else{
			if(cn>=max){			
				max=cn;
				//storing number
				maxfqnm[j]=nm;
				j++;//changing cursor of array
			}
			//changing reference number
			nm=arg[i];
			//bringing counter variable to zero
			cn=1;
		}
		//incrementing value of i
		i++;
	}
	//displaying results
	cout<<"Maximum frequency = "<<max<<endl;
	cout<<"Number(s) with maximum frequency :-"<<endl;
	for(k=0;k<j;k++){
		cout<<maxfqnm[k]<<endl;
	}
}

//declaring driver function
int main(){
	//declaring variables
	int ln, i, max, min;
	float mean, median;
	//asking user to enter size of array
	cout<<"Enter size of array."<<endl;
	//accepting value
	cin>>ln;
	//declaring array of required size
	int arg[ln];
	//running loop and asking user to enter numbers
	for(i=0;i<ln;i++){
		cout<<"Enter a number."<<endl;
		cin>>arg[i];
	}
	//calling functions
	min=MINIMUM(arg, ln);
	max=MAXIMUM(arg, ln);
	mean=MEAN(arg, ln);
	median=MEDIAN(arg, ln);
	MAXFQ(arg, ln);
	//displaying result
	cout<<"Minimum number = "<<min<<endl;
	cout<<"Maximum number = "<<max<<endl;
	cout<<"Mean = "<<mean<<endl;
	cout<<"Median = "<<median<<endl;
	//returning integer value to main function
	return 0;
}
		
				
			
	
	
