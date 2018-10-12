//we are going to declare a function to find the factorial of entered number
//including library
#include<iostream>
using namespace std;
//return something as function prototype
long factorial(int);
//declaring the main function
int main(){
        //declaring the varibles
	int n;
        cout<<"enter the value of the number: ";
        cin>>n;
	//function calling
	factorial(n);
        cout<<"factorial of number which you are entered is "<<factorial(n)<<endl;
	return 0;
} 
//further definition of the function
long factorial(int n){
                       if (n==0)
	               return 1;
	               else	 
                       return (n*factorial(n-1));
}
