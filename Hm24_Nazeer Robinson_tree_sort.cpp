//Names:Nazeer Robinson
//Date:4/8/18
//Homework # 23
//Problem # (Tree )
//The source code in this program is my own work and not the work of anyone else.
//Your signature:NazeerRobinson
#include <iostream>
#include <fstream>
#include <ostream>
#include<iomanip>
#include <cstdlib>
#include<algorithm>
#include <vector>
using namespace std;
struct node
{
  vector<int> key_value;
  node *left;
  node *right;
};
class binerytree
{
    public:
        binerytree();
        ~binerytree();

        void insert(vector<int> key);
        node *search(vector<int> key);
        void destroy_tree();

    private:
        void destroy_tree(node *num);
        void insert(vector<int> a, node *num);
        node *search(int key, node *num);
        
        node *root;
};
void Swap(int&, int&);
int partition(vector<int>& a, int start, int end)
{
	int point=start+1;
	for(int i=start + 1;i <= end;i++)
	{
		if(a[start]<a[i])
		{
			continue;	
		}
		else
		{
			Swap(a[point],a[i]);
			point++;
		}
	}
	Swap(a[start],a[point-1]);
	return (point-1);
}
void Swap(int & a,int & b)
{
	int temp=a;
	a=b;
	b=temp;
}
void Sort(vector<int> & a, int b,int q)
{
	int point;
    if(b<q)
	{
    	point=partition(a,b,q);
    	Sort(a,(b),point);
        Sort(a,(point+1),q);
    }
}

binerytree::binerytree()
{
  root=NULL;
}
void binerytree::destroy_tree(node *num)
{
  if(num!=NULL)
  {
    destroy_tree(num->left);
    destroy_tree(num->right);
    delete num;
  }
}
void binerytree::insert(vector<int> key, node *num)
{
  if(key< num->key_value)
  {
    if(num->left!=NULL)
     insert(key, num->left);
    else
    {
      num->left=new node;
      num->left->key_value=key;
      num->left->left=NULL;    
      num->left->right=NULL;   
    }  
  }
  else if(key>=num->key_value)
  {
    if(num->right!=NULL)
      insert(key, num->right);
    else
    {
      num->right=new node;
      num->right->key_value=key;
      num->right->left=NULL;  
      num->right->right=NULL; 
    }
  }
}
int main()
{
	int nums;
	node *head;
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
	for(vector<int>::iterator it=num.begin(); it !=num.end(); it++) 
	{
		cout << *it << ' ';
		
	}
	cout << "\nNew Numbers:\n";
    Sort(num,0,num.size()-1);
	for (vector<int>::iterator it=num.begin(); it !=num.end(); it++) 
	{
		int i=0;
		i++;
		cout << *it << ' ';
		binerytree::insert(it,node *);
		/* Your trying to input an int into the function. Num is a vector of ints so it isn't cooperating with the function.
			You have to make a node pointer that points to num in order for the function to accept it. Also I get that you use
			the vector to sort, but afterthat it seems to make things more confusing. It seems that each struct has a vector
			of ints. You just want one int for each node, because in your insert function your making a new node each time. 
			The program is trying to put the vector in for each node, so each node contains multiple numbers. Your putting the
			data through using the variable "it" so you don't need to put num there. You need to put a pointer there instead.
		*/
	}
			ostream << "Numbers:\n";
			Sort(num,0,num.size()-1);
			for (int i=0; i<num.size(); i++) 
			{
				ostream << num[i] << ' ';
			}
	
    istream.close();
	ostream.close();
	return 0;
    
     
}
