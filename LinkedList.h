using namespace std;
class LinkedList{
public:
//least to greatest
LinkedList();
//returns size
int size();

//always pops the leftmost value in the list
void pop();

// will insert an int value in an ascending order. That is, in a list that contains: 5, 10, 12, 17: push(11) will insert the new node between 10 and 12
void push(int value);
//prints all values from left to right. The values will be in ascending order
void print();

private:
struct Node{
   int data;
   Node* next;
    Node(int value){
    data=value;
    next=nullptr;
    }
};

Node* head;
Node* tail;
int count;

};
