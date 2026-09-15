/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode*slow=head;
       ListNode*fast=head;
       while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;//1
        fast=fast->next->next;//2
    if(slow==fast){
        break;
    }
       }
    if(fast==NULL||fast->next==NULL){
    return NULL;
    }
     slow=head;
     while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
     }  
     return slow;
    }
};