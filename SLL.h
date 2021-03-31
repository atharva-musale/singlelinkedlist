#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* next;
};

typedef struct node node;

node* getNewNode(int value){
    node* temp;
     temp = new (node);
    // temp = (node*)malloc(sizeof(node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

class SingleLinkedList{
public:
    node* head;
    SingleLinkedList(){
        head = NULL;
    }
};

SingleLinkedList addAtLast(SingleLinkedList list1, int val){
    node* newNode = getNewNode(val);
    node* temp = list1.head;
    // cout << "Head: " << temp << endl;
    // cout << "newnode: "<< newNode << endl;
    // cout << "newnode_data: " << newNode->data << endl;
    // cout << "newnode_next: " << newNode->next << endl;

    if(list1.head == NULL){
        list1.head = newNode;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return list1;
}

void displayList(SingleLinkedList list1){
        node* temp;
        temp = list1.head;
        while(temp->next != NULL){
            cout<< temp->data << " -> ";
            temp= temp->next;
        }
        cout << temp->data;
    }

SingleLinkedList sortList(SingleLinkedList list1){
    node *node1, *node2;
    int temp;

    if (list1.head == NULL){
        cout << "Empty List" << endl;
        return list1;
    }

    node1 = list1.head;
    while (node1 != NULL){
        for (node2 = node1->next; node2 != NULL; node2 = node2->next){
            if (node1->data > node2->data){
                temp = node1->data;
                node1->data = node2->data;
                node2->data = temp;
            }
        }
        node1 = node1->next;
    }
    return list1;
}

SingleLinkedList deleteNode(SingleLinkedList list1, int value)
{
    if (list1.head == NULL){
        cout<<"List is empty."<<endl;
        return list1;
    }
    node* first = list1.head;
    node* second = (list1.head)->next;

    if (first->data == value){
        list1.head = first->next;
        free(first);
        return list1;
    }
    // else if(second->data == value){
    //     first->next = second->next;
    //     free(second);
    // }
    else{
        while (second->data != value && second != NULL){
            second = second->next;
            first = first->next;
        }
        first->next = second->next;
        free(second);
    }
    return list1;
}

SingleLinkedList reverseList(SingleLinkedList list1)
{
    node *ptr1, *ptr2, *ptr3;
    if (list1.head == NULL){
        cout<<"List is empty"<<endl;
        return list1;
    }
    if (list1.head->next == NULL){
        return list1;
    }
    ptr1 = list1.head;
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;
    ptr1->next = NULL;
    ptr2->next = ptr1;
    while (ptr3 != NULL){
        ptr1 = ptr2;
        ptr2 = ptr3;
        ptr3 = ptr3->next;
        ptr2->next = ptr1;
    }
    list1.head = ptr2;
    return list1;
}
