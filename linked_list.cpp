#include<iostream>
using namespace std;
struct node{
    
    int x;
    struct node *link;
}; 
void append(node *head,int val){
    
    struct node *current;
    current->x = val;
    current->link = NULL;
    
    head->link->link->link = current;

}

int main(){
    node NODE;
    node *head;
    head = &NODE;
    head->x=10;
    head->link = NULL;


    struct node *current;
    current->x = 20;
    current->link = NULL;
    head->link = current;

    current = new node;
    current->x = 30;
    current->link = NULL;
    head->link->link = current;
    append(head,40);

    
    while(head != NULL){
        cout<<head->x<<"  ";
        head = head->link;
    }



    
    return 0;
}