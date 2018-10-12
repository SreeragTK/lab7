//we are going to define a function to print all the even or odd natural number within the entered range given by the user
//include library
#include<iostream>
using namespace std;
//return something as function prototype
int number(int,int);
//declaring the main function
int main()
   {
    //declaring the varibles
    int lowerlimit,upperlimit,print;
    //print
    cout<<"enter the value of lower and upper limit ";
    //storing the input in varibles
    cin>>lowerlimit>>upperlimit;
    //function calling
    num(lowerlimit,upperlimit);
    return 0;
    }
    //defining the recursive function
    int number(int lowerlimit,int upperlimit)
    {
    //add base condition
    if(lowerlimit<=upperlimit)
      {
      cout<<" "<<lowerlimit<<" ";
    return num(llimit+2,ulimit);}               }
    else
    return 0;      
}
