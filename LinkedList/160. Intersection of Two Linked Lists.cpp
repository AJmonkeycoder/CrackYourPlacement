class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) return NULL;
        ListNode* a=headA;
        ListNode* b=headB;
        while(a!=b){
            a= a==NULL ? a=headB :a->next;
            b = b==NULL ?b=headA : b->next;
        }

        return a;
    }
};