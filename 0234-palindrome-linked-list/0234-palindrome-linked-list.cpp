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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL || head==NULL)
        {
            return true;
        }
       
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* first=head;
        ListNode* prev=NULL;
        
        while(fast!=NULL && fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *second=slow;
        
        while(second!=NULL)
        {
            ListNode *nextNode=second->next;
            second->next=prev;
            prev=second;
            second=nextNode;
        } 
        second=prev;
        while(first!=NULL && second !=NULL)
        {
          if(first->val==second->val)
          {
            first=first->next;
            second=second->next;
          }
          else{
            return false;
          }
        }
      return true;
         
        

    }
};