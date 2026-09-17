#include<iostream>
#include<string>
using namespace std;
struct Node{
	string urn;
	string name;
	string branch;
	int sem;
	Node *next;

};
Node *head=NULL;
 Node *createNode(){
	Node *newNode=new Node;
	cout<<"Enter URN: ";
	cin>>newNode->urn;
	cout<<"Enter Your Name: ";
	cin>>newNode->name;
	cout<<"Enter Branch: ";
	cin>>newNode->branch;
	cout<<"Enter semester: ";
	cin>>newNode->sem;
	newNode->next=NULL;
	return newNode;
}
void insertbeginning(){
	Node *newNode=createNode();
	newNode->next=head;
	head=newNode;
	cout<<"Student inserted at beginning."<<endl;
}
void insertend(){
	Node *newnode=createNode();
	if(head==NULL){
		head=newnode;
	}
	else{
		Node *temp=head;
		while(temp->next!=NULL)
		temp=temp->next;
		temp->next=newnode;


	}
	cout<<"Student inserted at end."<<endl;
}
void insertmiddle(){
	Node *newnode=createNode();
	if(head==NULL){
		head=newnode;
		cout<<"Student Inserted."<<endl;
		return;
	}
	int pos;
	cout<<"Enter Position: ";
	cin>>pos;
	if(pos<=1){
		newnode->next=head;
		head=newnode;
		return;
	}
	Node *temp=head;
	for(int i=1;i<pos-1 && temp->next!=NULL;i++){
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	cout<<"Student inserted at position: "<<pos<<endl;
}
void display(){
	if(head==NULL){
		cout<<"List is Empty"<<endl;
		return;
	}
	Node *temp=head;
	int count=0;
	cout<<"\nStudent Records:\n";
	while(temp !=NULL){
		cout<<"Name: "<<temp->name<<endl;
		cout<<"URN: "<<temp->urn<<endl;
		cout<<"Branch: "<<temp->branch<<endl;
		cout<<"Semester: "<<temp->sem<<endl;
		count++;
		temp=temp->next;

	}
	cout<<"Total Number of nodes: "<<count<<endl;
}
void deleteBeginning(){
	if(head==NULL){
		cout<<"List is Empty: "<<endl;
		return;

	}
	Node *temp=head;
	head=head->next;
	delete temp;
	cout<<"First student deleted:"<<endl;
}
void deleteEnd(){
	if(head==NULL){
		cout<<"List is Empty";
		return;
	}
	if(head->next == NULL)
	{
		delete head;
		head = NULL;
		cout << "Last student deleted.\n";
		return;
	}

	Node *temp = head;

	while(temp->next->next != NULL)
		temp = temp->next;

	delete temp->next;
	temp->next = NULL;

	cout << "Last student deleted.\n";
}

void deleteNth()
{
	if(head == NULL)
	{
		cout << "List is empty.\n";
		return;
	}

	int pos;
	cout << "Enter position to delete: ";
	cin >> pos;

	if(pos <= 0)
	{
		cout << "Invalid position.\n";
		return;
	}

	if(pos == 1)
	{
		deleteBeginning();
		return;
	}

	Node *temp = head;

	for(int i = 1; i < pos - 1 && temp->next != NULL; i++)
		temp = temp->next;

	if(temp->next == NULL)
	{
		cout << "Invalid position.\n";
		return;
	}

	Node *del = temp->next;
	temp->next = del->next;
	delete del;

	cout << "Student at position " << pos << " deleted.\n";
}

int main()
{
	int choice;
	cout<<"Name:Rohit Kumar"<<endl;
	cout<<"URN:2514169"<<endl;
	cout<<"CRN:2515244"<<endl;

	do
	{
		cout << "\n===== SINGLY LINKED LIST =====\n";
		cout << "1. Insert at Beginning\n";
		cout << "2. Insert at End\n";
		cout << "3. Insert in Middle\n";
		cout << "4. Display and Count Nodes\n";
		cout << "5. Delete First Student\n";
		cout << "6. Delete Last Student\n";
		cout << "7. Delete Nth Student\n";
		cout << "8. Exit\n";

		cout << "Enter your choice: ";
		cin >> choice;

		switch(choice)
		{
			case 1:
				insertbeginning();
				break;

			case 2:
				insertend();
				break;

			case 3:
				insertmiddle();
				break;

			case 4:
				display();
				break;

			case 5:
				deleteBeginning();
				break;

			case 6:
				deleteEnd();
				break;

			case 7:
				deleteNth();
				break;

			case 8:
				cout << "Program terminated.\n";
				break;

			default:
				cout << "Invalid choice.\n";
		}

	} while(choice != 8);

	return 0;
}
