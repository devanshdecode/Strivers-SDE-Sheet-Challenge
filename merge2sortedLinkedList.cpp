// Code by - Devansh Lohiya
Node<int>* help(Node<int>* l1, Node<int>* l2)

{

    

    if(l1==NULL)return l2;

    else if(l2==NULL)return l1;

 

    else if(l1->data<l2->data)

    {

        l1->next=help(l1->next,l2);

        return l1;

    }

 

    else

    

        l2->next=help(l1,l2->next);

        return l2;

    

}

  

 

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)

{

    help(first,second);

}

