// Code by - Devansh Lohiya
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    LinkedListNode<int> *newHead = NULL;
    while(head!=NULL){
        LinkedListNode<int> *next = head->next;
        head->next=newHead;
        newHead=head;
        head=next;
    }
    return newHead;
}
