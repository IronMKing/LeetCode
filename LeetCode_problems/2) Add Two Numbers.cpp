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
        ListNode * result= new ListNode();
        ListNode *temp= result;				
        int num=0;
        while(l1!=nullptr || l2 !=nullptr || num){		
            int sum=0;								
            if(l1!=nullptr){
                sum+=l1->val;
                l1=l1->next;						
            }
            if(l2!=nullptr){
                sum+=l2->val;
                l2=l2->next;					
            }
            sum+=num;						
            num=sum/10;							
            ListNode *node=new ListNode(sum%10);	
            temp->next=node;						
            temp=temp->next;						
        }
        return result->next;							
    }
};