// Code by - Devansh Lohiya
LinkedListNode<int> *reverse(LinkedListNode<int> *head){

    if(head == NULL || head->next == NULL)

    return head;

    LinkedListNode<int> *smallReverse = reverse(head->next);

    head->next->next = head;

    head->next = NULL;

    return smallReverse;

}

bool isPalindrome(LinkedListNode<int> *head)

{

    //Write your code here

    if(head == NULL || head->next == NULL)

    return true;

    LinkedListNode<int> *slow = head;

    LinkedListNode<int> *fast = head;

    while(fast->next!=NULL && fast->next->next!=NULL){

        slow = slow->next;

        fast = fast->next->next;

    }

    LinkedListNode<int> *head2 = slow->next;

    slow->next = NULL;

    head2 = reverse(head2);

    while(head2!=NULL){

        if(head->data!=head2->data)

        return false;

        head = head->next;

        head2 = head2->next;

    }

    return true;

 

}

