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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // Create a set for fast lookup
        unordered_set<int> numSet(nums.begin(), nums.end());
        
        // Create a dummy node
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* current = dummy;
        
        // Traverse the linked list
        while (current->next != nullptr) {
            if (numSet.find(current->next->val) != numSet.end()) {
                // Remove current->next from the list
                current->next = current->next->next;
            } else {
                current = current->next; // Move to the next node
            }
        }
        
        // Return the modified list
        return dummy->next;
    }
};