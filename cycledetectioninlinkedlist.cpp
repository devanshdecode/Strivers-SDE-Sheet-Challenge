// Code by - Devansh Lohiya

bool detectCycle(Node *head)

{

    //  Write your code here

       

   Node * slow=head;

   Node * fast = head->next;

   while(slow && fast)

   {

         if(slow==fast)

         {

             return true;

         }

         slow = slow->next;

         fast = fast->next;

         if(fast!=NULL)

         fast = fast->next;

   }

   return false;

 

}

