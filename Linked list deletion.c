#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head = NULL, *newnode, *temp, *prev;
    int n, i, value;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("Enter element to delete: ");
    scanf("%d", &value);
    temp = head;
    prev = NULL;
    while(temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Element not found");
    }
    else
    {
        if(prev == NULL)
        {
            head = temp->next;
        }
        else
        {
            prev->next = temp->next;
        }
        free(temp);
        printf("Element deleted successfully\n");
        printf("Linked List: ");
        temp = head;
        while(temp != NULL)
        {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
       printf("NULL");
    }
    return 0;
}
