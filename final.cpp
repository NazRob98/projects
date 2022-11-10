//Names:Nazeer Robinson
//Date:4/26/18
//Homework # 23
//Problem # (Recursive sorting 2)
//The source code in this program is my own work and not the work of anyone else.
//Your signature: Nazeer
#include <iostream>
#include <fstream>
#include <ostream>
#include<iomanip>
#include <cstdlib>

using namespace std;



class BinaryTree


{	private:
		struct node
		{
			int data;
			node* left;
			node* right;
		};
		
		node* root;
		
		void addNodePrivate(int data, node* Ptr);
		void PrintPrivate(node* Ptr);
		void PrintfilePrivate(node* Ptr,ostream& out);
	public:
		BinaryTree();
		node* CreateNode(int data);
		void addNode(int data);
		void Print();
		void Printfile(ostream& out);
};


int main()
{
	BinaryTree Btree;
	ifstream infile;
	ofstream outfile;
	int data;
	
	infile.open("input.txt");
	if(!infile)
	{
		cout<<"Cannot poen file"
		<<"aboring progam"<<endl;
		exit(1);
	}

	outfile.open("output.txt");
	if(!outfile)
	{
		cout<<"cannot open file"
		<<"aborting open file"<<endl;
		exit(1);
	}
	
		while(infile>>data)
	{
		Btree.addNode(data);
	}
	cout << "Numbers:\n";
	Btree.Print();
	Btree.Printfile(outfile);
	Btree.Printfile(outfile);

	infile.close();
	outfile.close();
	return 0;
	
	
}

BinaryTree::BinaryTree()
	{
		root = NULL;
	}
	
BinaryTree::node* BinaryTree::CreateNode(int data)
	{
	node* n = new node;
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	
	return n;
	}
	
void BinaryTree::addNode(int data)
	{
	addNodePrivate(data, root);
	}
	
void BinaryTree::addNodePrivate(int data, node* Ptr)
	{
		if (root == NULL)
		{
			root = CreateNode(data);
		}
		else if (data < Ptr -> data)
		{
			if(Ptr ->left != NULL)
			{
				addNodePrivate(data, Ptr-> left);
			}
			else
			{
				Ptr->left = CreateNode(data);
			}
		}
		else if (data > Ptr -> data)
		{
			if(Ptr ->right != NULL)
			{
				addNodePrivate(data, Ptr-> right);
			}
			else
			{
				Ptr->right = CreateNode(data);
			}
		}
		else
		{
			cout<<"The number " <<data << " has already been added to the tree"<<endl;
		}
	}

	void BinaryTree::Print()
	{
		PrintPrivate(root);
	
	}
	
	void BinaryTree::PrintPrivate(node* Ptr)
	{
		if(root != NULL)
		{
			if(Ptr->left != NULL)
			{
				PrintPrivate(Ptr->left);
			}
			cout << Ptr->data << " ";
			
			if (Ptr->right != NULL)
			{
				PrintPrivate(Ptr->right);
			}
		}
		else
		{
			cout<<"tree empty"<<endl;
		}
	}
	
	void BinaryTree::Printfile(ostream& out)
	{
		PrintfilePrivate(root, out);
	}
	
		void BinaryTree::PrintfilePrivate(node* Ptr, ostream& out)
	{
		if(root != NULL)
		{
			if(Ptr->left != NULL)
			{
				PrintfilePrivate(Ptr->left, out);
			}
			out << Ptr->data << " ";
			
			if (Ptr->right != NULL)
			{
				PrintfilePrivate(Ptr->right, out);
			}
		}
		else
		{
			out<<"tree empty"<<endl;
		}
	}
