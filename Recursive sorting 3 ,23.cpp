//Names:Nazeer Robinson
//Date:4/26/18
//Homework # 23
//Problem # (Recursive sorting 3, )
//The source code in this program is my own work and not the work of anyone else.
//Your signature:Nazeer
#include <iostream>
#include <fstream>
#include <ostream>
#include<iomanip>
#include <cstdlib>
#include <vector>
using namespace std;
void swap(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
int nums;
ifstream istream;
ofstream ostream;
vector<int>num;


istream.open("input.txt");
if(istream.fail())	
{
	cout<<"file opening failed. \n";
	exit(1);
	
}

ostream.open("output.txt");

if (ostream.fail())
{
	cout<< "Output file opening failed.\n";
	exit(1);
}

while(istream>>nums)
{
num.push_back(nums);
}
cout << "Numbers:\n";
	for (int i=0; i<num.size(); i++) 
	{
		cout << num[i] << '\n';
		if(i<=num.size())
		{
		int point=0;
		int point2=0;
			
			while(i<=(i+1))
			{
			
				if(num[0]<num[i+1])
				{
				    point=i;
				    point2=i;
					point2++;	
				}
				else if(num[0]>num[i+1])
				{
					point++;
					point2++;
				}
				else
				{
					point++;
					point2++;
				}
				if(num[i]<num[i+1]&&num[0]<num[i+1])
				{
		        swap(num[point],num[i]);
				}
				else if(num[i]<num[i+1]&&num[0]>num[i+1])
				{
                 swap(num[0],num[i+1]);
				}	
				else
				{
					swap(num[0],num[0]);
				}
				i++;
				if(num[0]<=num[i])
				{
					break;
				}
			}
			
		}
			
	}

		ostream << "Numbers:\n";
	for (int i=0; i<num.size(); i++) {
		ostream << num[i] << '\n';
	}
	
    istream.close();
	ostream.close();
	return 0;
    
     
}

