
1 递归实现单链表反转
struct ListNode* reverseList(struct ListNode* head){
  if(head==NULL||head->next==NULL)
  {
      return head;
  }
    
    struct ListNode*cur=reverseList(head->next);
    head->next->next=head;
    head->next=NULL;
    return cur;
}





2,迭代实现单链表反转
struct ListNode* reverseList(struct ListNode* head){
        struct ListNode*cur=head;
    struct ListNode*prev=NULL;
    if(head==NULL)
    {
        return head;
    }
    else
    {
        while(cur!=NULL)
        {
            struct ListNode*temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
    }
    return prev;
}

