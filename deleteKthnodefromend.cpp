// Code by - Devansh Lohiya
Node* removeKthNode(Node* head, int k)

{

    Node* curr = head;

    int cnt = 0;

    Node* prev = head;

 

    while (curr != NULL) {

      cnt++;

      curr = curr->next;

    }

    

    if (k >= cnt) {

      head = head->next;

      return head;

    }

    

    k = cnt - k;

 

    

    

    cnt = 0;

    curr = head;

    

    while(curr!=NULL){

    cnt++;

 

    if(cnt == k){

        curr->next = curr ->next->next;

    }

    

    curr = curr ->next;

    

    }

 

    return head;

}
