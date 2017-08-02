#include <iostream>
#include<stdlib.h>
using namespace std;

typedef struct node
{

		int data;
		node* next;
};
node* start=NULL;
node* create(node*);

int length(node*);

int main(int argc, char** argv) {
	system("cls");
int option;
for(;;){
cout<<"Welcome\n";
cout<<"1.Create List\n2.Length of list\n3.Exit\nSelect one of the above options:";
cin>>option;
switch(option)
{
	case 1:start=create(start);break;
	case 2:{int x=length(start);cout<<"Length of list using recursion:"<<x<<"\n";
		break;
	}
	case 3:exit(0);
}       }
	return 0;
}
node* create(node * start)
{	cout<<"\nPress -1 to end link list\n";
	cout<<"Enter data:";
	int data;
	cin>>data;
	while(data!=-1){
		if(start==NULL){
			start=new node;
			start->data=data;
			cout<<"\n";
			start->next=NULL;
		}
		else
		{
			node *temp=start;

			for(int i=0;temp!=NULL;i++)
			{
				if(temp->next==NULL){
	
							temp->next=new node;
							temp->next->data=data;
							cout<<"\n";
							temp->next->next=NULL;
							break;
				}
				temp=temp->next;
			}
		}
		cout<<"Enter data:";cin>>data;

	  }
return start;
}
int length(node *start)
{     if(start->next==NULL){return 1;}
      else{
	return (1+length(start->next));
	  }
}
