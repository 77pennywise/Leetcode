class Solution {
public:

    ListNode* solve(ListNode* head){
        if(!head or !head->next)
        return head;

        ListNode* t1=head,*t2=head->next;
        ListNode* next;

        next=solve(head->next->next);
        t2->next=t1;
        t1->next=next;
        return t2;
    }

    ListNode* swapPairs(ListNode* head) {
        if(!head or !head->next)
        return head;

        return solve(head);

        
    }
};