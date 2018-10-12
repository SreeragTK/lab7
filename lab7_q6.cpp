//we are going define a function which numbers given by the user in reverse order
//including library
#include<iostream>
using namespace std;
//returning something as function prototype
int reverse(int);
//declaring the main function
int main()
   {
        //declare varibles
	int n;
        cout<<"enter the value of the number: ";   
        //storing the input in avariable
	cin>>n;
	//function calling
        reverse(n);
	return 0;
   }
   
  int reverse(int n){
     //applying conditions
     if (n!=0){
	      cout<<n%10;
    return reverse(n/10);
	 }
    else
//closing the function
return 0;
}

