//to find sum of even or odd natural number of entered range given by the user
//including library
#include<iostream>
using namespace std;
//prototype of the function
int sum(int,int);
//declaring main function
int main(){
	//declaring class of variables 
	int llimit,ulimit,addition;
	//getting the input from the user
	cout<<"enter the value of lower and upper limit "<<endl;
	//storing the numbers given by the user in varible llimit and ulimit
	cin>>llimit>>ulimit;
	//function calling
	addition=sum(llimit,ulimit);
	//showing the output of the function
	cout<<"the summation of even or odd  number is:"<<addition<<endl;
	return 0;
}
//declaring the recursive function
int sum(int llimit,int ulimit){
	//applying base condition
	if(llimit<ulimit){
        //function recursion
	return (sum(llimit+2,ulimit) +llimit);
                     }
	else 
//closing the function
        return 0;
}
