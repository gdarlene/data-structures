#include <iostream>
using namespace std;
class  Node{
	public:
		int data;
		Node *next;
	Node(int data){
		this->data=data;
		this->next=NULL;
	}
};
void displayRecursively(Node *n){
	if (n==NULL){
		cout<<"NULL"<<endl;
		return;
		}
	cout<<n->data<<endl;
	displayRecursively(n->next);

}
int countRecursively(Node *n){
	if(n==NULL){
		return 0;
	}
		return 1 + countRecursively(n->next);
}
int main(){
	Node *node1=new Node(1);
	Node *node2=new Node(2);
	Node *node3=new Node(3);
	node1->next=node2;
	node2->next=node3;
	displayRecursively(node1);
	cout<<"The nodes in the list are: "<<countRecursively(node1)<<endl;
	
	 delete node1;
    delete node2;
    delete node3;

	return 0;
}
