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

    ListNode* LLreverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }


    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* newhead = LLreverse(slow->next);

        ListNode* temp = head;

        while(newhead){
            if (temp->val != newhead-> val){
                return false;
            }
            temp = temp->next; newhead = newhead ->next;
        }
        return true;
        
        
        // stack<int> st;
        // ListNode* temp = head;

        // while(temp != nullptr){
        //     st.push(temp->val);
        //     temp = temp->next;
        // }

        // temp = head;
        // while(temp != nullptr){
        //     int v = st.top();st.pop();
        //     if (temp->val != v){
        //         return false;
        //     }
        //     temp = temp->next;
        // }
        // return true;
    }
};