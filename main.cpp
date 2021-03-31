#include <bits/stdc++.h>
#include "SLL.h"
using namespace std;

int main()
{
    int choice, val;
    SingleLinkedList list1;
    cout<<"-----Single linked list------"<<endl;
    while(1){
        cout << "Enter: "<< endl;
        cout << "1. to append"<<endl;
        cout << "2. to sort"<<endl;
        cout << "3. to delete a node"<<endl;
        cout << "4. to display"<<endl;
        cout << "5. to reverse"<<endl;
        cout << "6. Exit "<<endl;
        cout << "Your choice : ";
        cin >> choice;

        switch(choice){
            case 1: cout<<"Enter the value to be inserted: ";
                    cin >> val;
                    list1= addAtLast(list1, val);
                    displayList(list1);
                    cout<<endl;
                    break;
            case 2: list1 = sortList(list1);
                    displayList(list1);
                    cout<<endl;
                    break;
            case 3: cout<<"Enter value of node: ";
                    cin>> val;
                    list1 = deleteNode(list1, val);
                    displayList(list1);
                    cout<<endl;
                    break;
            case 4: cout<< "Linked List: ";
                    displayList(list1);
                    cout<<endl;
                    break;
            case 5: reverseList(list1);
                    break;
            case 6: cout<<"Thank you"<<endl;
                    exit(1);
                    break;
            default: cout<<"Wrong choice"<<endl;
        }
        cout<<"------------------------------"<<endl;
    }
    return 0;
}









