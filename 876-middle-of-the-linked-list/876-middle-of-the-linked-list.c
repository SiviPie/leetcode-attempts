/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int target(struct ListNode* head) {
    int x = 0;
    while(head != NULL) {
        x++;
        head = head->next;
    }
    
    return x/2;
}

struct ListNode* middleNode(struct ListNode* head){
    int n = target(head);
    while(n) {
        head = head->next;
        n--;
    }
    
    return head;
}