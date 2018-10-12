//we are going to declare a function to show the the lcm of  enered no
//including library
#include<iostream>
using namespace std;
//return something as function prototype
int lcm(int,int,int);
//main function
int main(){
	  //declaring varibles
	  int p,q,common=2;
	  cout<<"enter the numbers from which lcm has to be calculated: ";
          //storing the input
	  cin>>p>>q;
	  //function calling
	  lcm(p,q,common);
	  cout<<"least common multiple of numbers which you are entered is"<<lcm(p,q,common)<<endl;
return 0;
}
//define further details of the function
int lcm(int p,int q,int common){
      //applaying condition
      if(common%p==0 && common%q==0)
      return common;
      else
      return lcm(p,q,++common);
}

