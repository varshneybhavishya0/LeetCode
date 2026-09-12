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
        ListNode*ptr;
        ptr=head;
        int count=0;
        int mid;
        while(ptr!=NULL){
            ptr=ptr->next;
            count++;
        }
    mid=(count/2)+1;
    ptr=head;
    for(int i=1;i<mid;i++){
        ptr=ptr->next;
    }
    return ptr;
    }
};