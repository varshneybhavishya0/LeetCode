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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            ListNode*temp=head;
            head=head->next;
            delete temp;
        }
        ListNode*ptr=head;
        ListNode*prev=NULL;
        while(ptr!=NULL){     
     if(ptr->val==val){
        prev->next=ptr->next;
    delete ptr;
    ptr=prev->next;
     }
     else{
        prev=ptr;
        ptr=ptr->next;
     }

        }
   return head;
    }
};