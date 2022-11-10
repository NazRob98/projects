
//Names:Nazeer Robinson 
//Date:4/12/18
//Homework # 20
//Problem # (Savitch problem 14-1)
//The source code in this program is my own work and not the work of anyone else.
//Your signature:

#include<iostream>
#include<cstdlib>
using namespace std;
long long int k(long long int a)
{
   if (a == 1||a==0)
    {
    	return a;
	}
    else if (a>1)
   	{
   		return k(a-1) + k(a-2);
   	}
	else 
	{
		cout<< "\n Please enter an integer with a value greater than or equal to 0."<<endl;
		exit(0);
	}	
}


int main()
{
	long long int num;
	cout<<"Input positive integer, for n, and the program will calculate the nth Fibonacci number F_n"<< endl;
	cin>>num;
	printf("%i", k(num));
	
	char dummy;
	
	cin>>dummy;
	return  0;
}
