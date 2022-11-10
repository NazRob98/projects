//Names:Nazeer Robinson
//Date: 4/19/19
//Homework # 19
//Problem # (Savitch problem 13-6)
//The source code in this program is my own work and not the work of anyone else.
//Your signature:
#include<iostream>
#include<cstdlib>
using namespace std;
class Nodelist {
  public:
//declaring the functions
Nodelist();
  void printlist(int max);
  
  void trimovement();
  
   void loop();
  
  void addAtFront(int add);

   void deleteNode(int x);

  
  private:
  	struct node{
  		int num;
  		node* next;
  		
  		void deleteNext()
  		{
  			node* tmp = next;
  			next=next->next;
  			delete tmp;
		}
	  };
	  typedef node *n;
n head;
n current;
n curNode;
n temp;
};


int main()
{	
	int n;
	int i=1;
    Nodelist spot;
	cout << "Input the number of people (the number of suitors in Savitch's description) . " 
	<< endl;
	cin>>n;
	for( i = 1; i<=n; i++)
	{
	    spot.addAtFront(i);	
		cout<<i<<endl;
	}
	cout << "The linked list."<<endl;
	spot.printlist(n);
	cout << "The number of the last person is" << endl;
    //spot.trimovement();
	spot.loop();
	char dummy;
	cin >> dummy; return 0;	
}
Nodelist::Nodelist()
{
	head=NULL;
	temp=NULL;
	current=NULL;
}
void Nodelist :: addAtFront(int add) {
	int i=0;
	n n=new node;
	n->next=NULL;
	n->num=add;
	/* If the list is empty */
	if(head == NULL) {
	    //current = head;
	    //making the new Node as Head
	    head = n;
	    temp=head;
	    //i++;
	    cout<<"if statement"<<endl;
	}
	else {
		n->next = head;
		//get the Last Node and make its next point to new Node
		head = n;
		//i++;
	}
	temp->next=head;
	
}

void Nodelist :: deleteNode(int x) {
  //searching the Node with num x
  n xPtr = NULL;
  temp = head;
  current=head;
      while(current !=NULL && current->num != x) {
      temp=current;
      current=current->next;
    }
  if(current == NULL) {
        cout<<x<<"not in list\n";
    delete xPtr;
  }
  else {
xPtr=current;
current=current->next;
temp->next=current;
if(xPtr==head)
{
	head=head->next;
	temp=NULL;
}
delete xPtr;
cout<<"The value "<<x<<" is now gone\n";
  }
  
}

void Nodelist :: printlist(int max)
{
	node* current = head;
//	while(current != NULL)
	int counter=1;
	while(counter<=max)
	{
		cout<<current->num<<endl;
		current=current->next;
		counter++;
	}
	counter=0;
}
void Nodelist::trimovement()
{
	int counter=1;
    node* curNode=head;
//	while(curNode->next != curNode)
	while(counter<4)
	{
		curNode=curNode->next;
		if(counter%3==0)
		{
			curNode->deleteNext();
			if(counter==1)
		{
			cout<<"deleted numbers"<<endl;
		}
	    cout<<"final num"<<endl;
			cout<<curNode->num<<endl;
			
		}
		++counter;
	}
	//deleteNode(curNode->num);
	//++counter;
	head = curNode;
 } 
 void Nodelist::loop()
 {
 	while(head->next !=head)
 	{
 		trimovement();
	}
	cout<<head->num<<endl;
 }
