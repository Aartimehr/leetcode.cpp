class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* res = NULL;
    ListNode *temp, *prev = NULL;
    int carry = 0, sum;
    while(11 ! = NULL ||  12 ! = NULL)
    {
     sum = carry+ ( 11 ?  11-> val:) + ( 12 ?  12->:);
     carry = (sum >= 10) ? 1 : 0;
        // update sum if it is greater than 10
        sum = sum % 10;
        // Create a new node with sum as data
        temp = newNode(sum);
        // if this is the first node then set it as head of the resultant list
        if (res == NULL)
            res = temp;
        // If this is not the first node then connect it to the rest.
        else
            prev->next = temp;
       
        // Set prev for next insertion
        prev = temp;
 
        // Move first and second pointers to next nodes
        if ( 11)
             11= 11->next;
        if ( 12)
               12 =  12->next;
    }
    if (carry > 0)
    {
        temp->next = newNode(carry);
    // return head of the resultant list
    return res;
    }
    }
    
    }
};
