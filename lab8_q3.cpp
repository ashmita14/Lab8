//Write a program to find the kth largest and kth smallest number.

//including libraries
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//declaring function to find kth largest number
void klarge(int arg[], int l, int k){
	//sorting array
	sort(arg, arg+l);
	//declaring variables
	int kmax, max, i;
	//initializing variables
	kmax=arg[l-1];
	max=1;
	i=l-1;
	//running loop to find kth largest number
	while(i>0){
		if(arg[i]<kmax){
			kmax=arg[i];
			max++;
		}
		//checking if kth value reached
		if(max==k){
			cout<<k<<"th largest number = "<<kmax<<endl;
			break;
		}
		//decrementing value of i
		i--;
	}
	//checking condition if max never reaches k
	if(max!=k) cout<<"There is no such number."<<endl;
}

//declaring function to find kth smallest number
void ksmall(int arg[], int l, int k){
	//sorting array
	sort(arg, arg+l);
	//declaring variables
	int kmin, min, i;
	//initializing variables
	kmin=arg[0];
	min=1;
	i=0;
	//running loop to find kth smallest number
	while(i<l){
		if(arg[i]>kmin){
			kmin=arg[i];
			min++;
		}
		//checking if kth value reached
		if(min==k){
			cout<<k<<"th smallest number = "<<kmin<<endl;
			break;
		}
		//incrementing value of i
		i++;
	}
	//checking condition if min never reaches k
	if(min!=k) cout<<"There is no such number."<<endl;
}

//declaring driver function
int main(){
	//declaring variables
	int ln, kn, i;
	//asking user to enter size of array
	cout<<"Enter size of array."<<endl;
	//accepting value
	cin>>ln;
	//declaring array of required size
	int arg[ln];
	//asking user to enter elements of array
	for(i=0;i<ln;i++){
		cout<<"Enter element of array."<<endl;
		//accepting value
		cin>>arg[i];
	}
	//asking user to enter k
	cout<<"Enter a number k to find kth largest and kth smallest value."<<endl;
	//accepting value
	cin>>kn;
	//calling functions
	klarge(arg, ln, kn);
	ksmall(arg, ln, kn);
	//returning integer value to main function
	return 0;
}
	
