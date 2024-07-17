/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr= head;
        ListNode* slo=head;
        int len=0;
        while(curr){
            len++;
            curr=curr->next;
        }
        int mid=len/2;
        for(int i=0;i<mid;i++){
            slo=slo->next;
        }
        // while(fast!=NULL && fast->next!=NULL){
        //     slo=slo->next;
        //     fast=fast->next->next;
        // }
        

        return slo;

    }
};
