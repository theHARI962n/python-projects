// Linked List implementation in C++ 
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};

Node *head = nullptr;
Node *tail = nullptr;

void insert(int data){
    Node* ni = new Node(data);
    ni->next = head;
    head = ni;
    if(tail == nullptr){
        tail = ni;
    }
}

Node *getPos(int index){
        Node * temp = head;
        int n = index;
        for(int i = 0; i<n && temp != nullptr; i++){
            temp = temp->next;
        }
        return temp;
     }

void insertAtPos(int index, int data){

    if(index == 0){
        insert(data);
        return;
    }

     Node *prev = getPos(index-1);
     Node *ni = new Node(data);
     ni->next = prev->next;
     prev->next = ni;


    if(ni->next == nullptr){
        tail = ni;
    }

}

void reverse(){
    Node* prev = nullptr;
    Node* curr = head;

    tail = head; 

    while(curr != nullptr){
        Node* ni = curr->next;
        curr->next = prev;
        prev = curr;
        curr = ni;
    }
    head = prev;
}


void display(){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    display();

    insertAtPos(1, 100);  // Insert 100 at index 1
    display();

    reverse();
    display();
    return 0;
}