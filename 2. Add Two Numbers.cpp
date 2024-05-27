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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3 = nullptr;
        int carry = 0;

        add_nodes(l1, l2, l3, carry);

        return l3;
    }

    void add_nodes(ListNode* l1, ListNode* l2, ListNode* &current, int &carry){
        if(l1 == NULL && l2 == NULL && carry == 0){
            return;
        }
        int val1 = (l1 == nullptr)? 0: l1->val;
        int val2 = (l2 == nullptr)? 0: l2->val;

        int ans = val1 + val2 + carry;
        carry = ans/10;

        current = new ListNode(ans%10);
        add_nodes((l1 == nullptr)? nullptr: l1->next, 
                  (l2 == nullptr)? nullptr: l2->next, 
                  current->next, carry);
    
    }
};