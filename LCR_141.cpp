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
    ListNode* trainningPlan(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode *vershead,*p;
        p = head->next;
        vershead = new ListNode(head->val);
        while(p != nullptr){
            ListNode *q=new ListNode(p->val,vershead);
            vershead=q;
            p=p->next;
        }
        return vershead;
    }
};
