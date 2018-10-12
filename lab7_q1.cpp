//we are going to define a function which finds the power of a number
//including library
#include<iostream>
using namespace std;
//prototype of the functioin
long power(int,int);
int main(){
      int m,n;
      long p;
           //getting the base number from the user
           cout<<"enter the value of number:"<<endl;
           cin>>m;
           //getting the power from the user 
           cout<<"enter the power to which the number is to be raised"<<endl;
           cin>>n;
           //call the function
            p=power(m,n);
           //showing the output of the function
           cout<<m<<"^"<<n<<"is"<<p;
           return 0;
    }
//now we are going to declare a recursive function 
long power(int m,int n)
     {
	   //applying condition
	   if(n>0)
             return (pow(m,n-1)*m);
           else
             return 1;
	   
}
