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
        ListNode* temp=head ;
        int count=1;
        while(temp->next != NULL){
            temp = temp->next ; 
            count++;
        }
         ListNode* x = head ;
                for(int i=0; i<(count/2) ; i++){
                    x=x->next ;
                }
        return x;
    }
};