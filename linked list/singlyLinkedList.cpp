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
    int s = 0;

public:
    void insert_data(int data){
        node* newNode = (node*) malloc(sizeof(node));
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL){
            head = newNode;
        }
        if(previous_node != NULL){
            previous_node->next = newNode; 
        }
        
        previous_node = newNode;   
        s++;     
    }

    void traverse_list(){
        node* iterator = head;

        while(iterator != NULL){
            cout << iterator -> data << " ";
            iterator = iterator -> next;
        }
    }

    int size(){
        return s;
    }
    

};

int main(){
    LinkedList list;

    list.insert_data(3);
    list.insert_data(8);

    list.traverse_list();

    cout << list.size();

    return 0;
}