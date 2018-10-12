//we are going to declare a funcntion to find the sum of all digit of a number given by the user
//including library
#include<iostream>
using namespace std;
//return something as function prototype
int sum(int);
//declaring the main function
int main(){
	//declaring the varibles
	int n;
        //getting the input from the user
	cout<<"enter the value of p";
	cin>>n;
	//function calling
	sum(n);
	cout<<sum(n)<<endl;
	return 0;
}
//we are declaring the further details of the function
int sum(int n){
              //applying conditions
              if (n==0)
	      return 0;
	      else	 
              return (n%10+sum(n/10));     
}
