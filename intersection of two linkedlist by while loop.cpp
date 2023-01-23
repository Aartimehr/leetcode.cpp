class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     while(headB)
     {
         ListNode* temp = headA;
        while (temp) {
            if (temp == headB)
                return headB;
            temp = temp->next;
        }
        headB = headB->next;
    }
    return NULL;
     }

};
