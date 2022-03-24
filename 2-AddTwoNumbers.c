/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    struct ListNode *newl;
    struct ListNode *header;

    newl=l1;
    int flag=0;
    header = newl;

    while(l1->next!=NULL && l2->next!=NULL)
    {
        newl->val = l1->val+l2->val;
        if(flag == 1)
        {
            newl->val++;
            flag=0;
        }
        if(newl->val>9)
        {
            newl->val=newl->val%10;
            flag=1;;
        }
        newl=newl->next;
        l1=l1->next;
        l2=l2->next;
    }
    newl->val = l1->val+l2->val;
    if(flag == 1)
    {
        newl->val++;
        flag=0;
    }
    if(newl->val>9)
    {
        newl->val=newl->val%10;
        flag=1;;
    }

    if(l1->next==NULL&&l2->next!=NULL)
    {
        newl->next=l2->next;
        newl=newl->next;
    }
    if(l2->next==NULL&&l1->next!=NULL)
    {
        newl->next=l1->next;
        newl=newl->next;
    }
    if(l2->next==NULL&&l1->next==NULL)
    {
        if(flag==1)
        {
            struct ListNode *tail=(struct ListNode*)malloc(sizeof(struct ListNode));
            tail->val=0;
            tail->next=NULL;
            newl->next=tail;
            newl=newl->next;
        }
    }
    while(newl!=NULL)
    {
        if(flag==1)
        {
            newl->val++;
            flag=0;
        }
        if(newl->val>9)
        {
            newl->val=newl->val%10;
            flag=1;;
        }
        if(newl->next==NULL&&flag==1)
        {
            struct ListNode *tail=(struct ListNode*)malloc(sizeof(struct ListNode));
            tail->val=0;
            tail->next=NULL;
            newl->next=tail;
        }
        newl=newl->next;
    }

    return header;

}