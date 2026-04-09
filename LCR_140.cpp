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
    ListNode* trainingPlan(ListNode* head, int cnt) {
        ListNode *p,*q;
        p=head;
        q=head;
        for(int i=0;i<cnt;i++){
            q=q->next;
        }
        while(q!=nullptr){
            p=p->next;
            q=q->next;
        }
        return p;
    }
};
