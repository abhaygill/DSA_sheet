
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
    bool isPalindrome(ListNode* head) {

        // Efficient Approach.

    ListNode* slow= head;
    ListNode* fast= head;

    int len =0;
    ListNode* curr=head;
    
    while(curr){
        len++;
        curr=curr->next;
    }
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    if(len % 2 !=0) slow=slow->next;

    ListNode* MidToHalf = reverse(slow);

    while(head != NULL && MidToHalf !=NULL){
        if(head->val!=MidToHalf->val) return false;

        head=head->next;
        MidToHalf=MidToHalf->next;
    }
    return true;

    }
    private:
    ListNode* reverse(ListNode* slo){
        ListNode* curr= slo;
        ListNode* prev= NULL;
        while(curr != NULL){
            ListNode* nxtNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxtNode;
        }
        return prev;
    }
    
    //   Time Complexity O(n) and Space Complexity O(n)
    //     if(!head) return true;
    //     vector<int> ele;
    //     ListNode* curr= head;
    //     while(curr){
    //         ele.push_back(curr->val);
    //         curr=curr->next;
    //     }
    //     int n= ele.size()-1;
    //     int i=0;
    //     while(i<n){
    //         if(ele[i]!=ele[n]){
    //             return false;
    //         }
    //         i++;
    //         n--;
    //     }
    // return true;
};
