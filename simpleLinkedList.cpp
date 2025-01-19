//program to demonstrate the implementation of a simple linked list:

#include<iostream>
using namespace std;
class Node{ //creation of the node class: it will contain data of type char and a pointer to the next node
	public: 
	char data;
	Node* next;
};

//method to print the whole linked list:
void toPrintList(Node *head){//it will contain a pointer head to the head node as the input
	if(head == NULL){
		cout<<"Empty list";//checking if the linked list is empty
	}
	while(head!=NULL){
		cout<<head->data; //->used to access data of pointers:
		head = head->next;
	}
//	cout<<"No contents to display";
}
int main(){
	//declare the pointers to the nodes that will be needed
	Node *headNode;
	Node *secondNode;
	Node *thirdNode;
	Node *fourthNode;
	
	//add the nodes created to the list(heap)
	headNode = new Node();
	secondNode = new Node();
	thirdNode = new Node();
	fourthNode = new Node();
	//assign the data to the nodes:
	
	headNode->data = 'c';
	headNode->next = secondNode;
	secondNode->data='a';
	secondNode->next=thirdNode;
	thirdNode->data ='r';
	thirdNode->next=fourthNode;
	fourthNode->data='.';
	fourthNode->next=NULL;
	//finally print the linked list
		toPrintList(headNode);
	return 0;
}
