//to print the first n natural numbers,here the "n" is declared by the user
//including library
#include<iostream>
using namespace std;
//we have to return something as function prototype
int num(int);
//declaring main function
int main(){
	 //declare varibles
	 int n,print;
	 //getting the input from the user
    cout<<"enter the value of n: ";
    //storing input in varibles
    cin>>n;
    //function the calling
    print=num(n);
    //print
    cout<<print<<endl;
    return 0;
   }
   //now we are going to declare the recursive function
   int num(int n){
	         //applying base conditions
	         if(n>1){
	         cout<<" "<<n<<" ";
       return num(n-1);
   }
       else if(n==1)
       return 1;
       else 
//closing the function
return 0;
}
