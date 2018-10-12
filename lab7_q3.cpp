//we are going declare a function find the sum of first n natural number enterd by user
//including libary
#include<iostream>
using namespace std;
//prototype of the function
int sum(int);
//declaring the main function
int main(){
	//declare class of variables 
	int n,addition;
	//getting the input fron the user
	cout<<"enter the value of n: "<<endl;
	//storing the number in varible n
	cin>>n;
	//function calling
	addition=sum(n);
	//now we are going declare the out of the function
	cout<<"the sammation of numbers upto the number which you are entered is "<<addition<<endl;
	return 0;
}
//declaring recursive function
int sum(int n){
	//applying base condition
	if(n>1){
        //function recursion
	return (sum(n-1)+n);}      
        else if(n==1)
        return 1;
        else
//closing the function
return 0;
}
