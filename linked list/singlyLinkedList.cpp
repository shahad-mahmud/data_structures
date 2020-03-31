#include <iostream>
using namespace std;

class LinkedList{
private:
    struct node{
        int data;
        node* next;
    };
    node* head = NULL;
    node* previous_node = NULL;

public:
    void insert_data(int data){
        node* newNode = (node*) malloc(sizeof(node));
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL){
            head = newNode;
        }

        previous_node = newNode;        
    }

    void traverse_list(){
        node* iterator = head;

        while(iterator != NULL){
            cout << iterator -> data << " ";
            iterator = iterator -> next;
        }
    }
    

};

int main(){
    LinkedList list;

    list.insert_data(3);
    list.insert_data(8);

    list.traverse_list();

    return 0;
}