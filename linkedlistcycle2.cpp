// Code by - Devansh Lohiya
Node *firstNode(Node *head)

{

    //    Write your code here.

 

    Node *slow =head;

    Node *fast = head;

    Node *temp =head;

    while(slow &&  fast && fast->next)

    {

         slow = slow->next;

        fast = fast->next->next;

          if(slow==fast)

          {

             while(slow!=temp)

             {

                slow = slow->next;

                temp = temp->next; 

             }

             return slow;

          }

 

         

          

    }

    return NULL;

}

