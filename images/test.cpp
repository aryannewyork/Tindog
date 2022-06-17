#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};




int main(){
    Node* head;
    Node* second;
    head->data = 5;
    head->next = second;

    second->data = 7;
    second->next = NULL;

cout << "hi" << "\n";
    while(head != NULL){
        cout << head->data << "\n";
        head = head->next;
    }
    
}
