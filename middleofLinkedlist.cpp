// Code by - Devansh Lohiya

Node *findMiddle(Node *head) {
    // Write your code here
    Node *fast=head;
    Node *slow=head;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

