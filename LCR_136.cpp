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
    ListNode* deleteNode(ListNode* head, int val) {
        while(head != nullptr && head->val == val){ // 删除匹配的头结点
            head = head->next;
        }
        if(head == nullptr){ 
            return nullptr;
        }
        ListNode *p,*q;
        p=head;
        q=head->next;
        while(q != nullptr){
            if(q->val != val){
            q = q->next;
            p = p->next;
            }
            else{
                p->next = q->next;
                q = q->next;
            }
        }
        return head;
    }
};
