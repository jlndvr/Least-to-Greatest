#include <iostream>
#include "LinkedList.h"
using namespace std;
//prints functions from least to greatest. 
//inserts a value in its position based off surrounding values.
//deletes first value.
//returns size.
//singly ll
int main()
{
LinkedList x;

//push 
x.push(5);
x.push(10);
x.push(12);
x.push(17);
cout<<"Values: ";

//print
x.print(); 
x.push(11);
cout<<"Insert: ";
x.print(); 
    
//remove first value
x.pop();
cout<<"Remove first element: ";
x.print();
    
//return size
cout<<"Size after insert: "<<x.size()<<endl; 
}
