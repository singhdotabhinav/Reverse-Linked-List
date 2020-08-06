
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

struct Node* Reverse(struct Node* head){
    
    struct Node *next, *current, *prev;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
