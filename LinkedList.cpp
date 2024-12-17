#include <iostream>
#include "LinkedList.h"
using namespace std;

LinkedList::LinkedList(){//O(1) const
	count=0;
	head=nullptr;//initializations=const
	tail=nullptr;
}
//return size
int LinkedList::size(){//O(1) const
	return count;//returns count=const
}
//popfront
void LinkedList::pop(){//O(1) const
	if (count == 0){//check if list is empty
	return;
	}
	Node* temp = head;//adjusts head and decrements count=const
	head = head->next;
	delete temp;
	count--;
}
//insert
void LinkedList::push(int value){//O(n) linear
Node* newNode= new Node(value);
if(count== 0 || head->data>= value){
	newNode->next= head;
	head= newNode;            //searching through 'entire' list to insert=worst case O(n)
	}
 else{
	Node* current= head;           //takes n times 
	while(current->next != nullptr && current->next->data < value){
	current= current->next;
}
newNode->next= current->next;
current->next= newNode;
}
	count++;
}
//print function
void LinkedList::print(){//O(n) linear 
Node* current= head;
 while(current !=0){
 cout<<current->data<<" ";   //goes through list to print each node 
 current=current->next;        //takes n times 
}
cout<<endl;
}
