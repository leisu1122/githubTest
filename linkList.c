#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<conio.h>


typedef struct student
{
    int data;
    struct student *next;
}node;

node *creat()
{
        node  *head,*p,*q;
        int x,y=1;
        head = (node *)malloc(sizeof(node));
	p = head;
	while(y)
 	   {
		printf("asdasd");
		scanf("d%",&x);
        if(x!=0)
        {
           q =  (node *)malloc(sizeof(node));
           q->data = x;
           *p->next = q;
            p = q;
        }
        else 
           y = 0;

	   }

head = head->next;
p->next = NULL;
return (head);		
}


void searchmid(node* head , node* mid)
	{
        node *temp = head;
		while(head->next->next != NULL)
			{
			    head = head->next->next;
				temp = temp->next;
				mid = temp;
			}
	}
void judge(node *head)
	{
	    node  *head1,*p1,*p2,*p3;
		p1 = head;
		p2 = p1->next;
        while(p2)
		{
		    p3 = p2->next;
		    p2->next = p1;
			p1 = p2;
			p2 = p3; 
		}
		head1->next = NULL;
		head1 = p1;
		while(head->next != NULL)
		{
		    while(*hea d != *head1)
			{
			   return -1;            
			
			}
     		head = head +1;
     	    head1 = head1 +1;
		}
		
		return 1;
		
		
		
		
	}

