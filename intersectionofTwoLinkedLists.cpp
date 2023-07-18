// Code by - Devansh Lohiya
Node* findIntersection(Node *firstHead, Node *secondHead)

{

    // Step 1: Find lengths of both lists

    int length1 = 0, length2 = 0;

    Node *temp1 = firstHead, *temp2 = secondHead;

 

    while (temp1) {

        length1++;

        temp1 = temp1->next;

    }

 

    while (temp2) {

        length2++;

        temp2 = temp2->next;

    }

 

    // Step 2: Move the pointer of the longer list ahead by the difference in lengths

    temp1 = firstHead;

    temp2 = secondHead;

    int diff = abs(length1 - length2);

 

    if (length1 > length2) {

        while (diff > 0) {

            temp1 = temp1->next;

            diff--;

        }

    } else {

        while (diff > 0) {

            temp2 = temp2->next;

            diff--;

        }

    }

 

    // Step 3: Traverse both lists together to find the intersection point

    while (temp1 && temp2) {

        if (temp1 == temp2) {

            return temp1; // Intersection found

        }

        temp1 = temp1->next;

        temp2 = temp2->next;

    }

 

    return nullptr;

}

