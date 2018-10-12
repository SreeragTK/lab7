//we are going to define afunction whinch the n terms of a fibonacci sequence where n is defined by the user
//including library
#include<iostream>
using namespace std;
//return something function as prototype
int fibonacci(int);
//decaring main function
int main(){
        int n;  
        //declare varibles
	int first,second;
        cout<<"enter the no of term you want: ";
        //storing the input
	cin>>n;
	//function calling
	fibonacci(n);
        cout<<"the term of fibonacci sequence is "<<fibonacci(n)<<endl; 
return 0;
}
//further declaration of the function  
int fibonacci(int n){
	              //applaying conditions
                      if (n==1 || n==2)
	              return 1;
	              else	 
                      return (fibonacci(n-1)+fibonacci(n-2));
}
