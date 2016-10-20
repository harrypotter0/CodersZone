// C program to delete a linked list
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
 
/* Link list node */
struct node
{
    int data;
    struct node* next;
};
 
/* Function to delete the entire linked list */
void deleteList(struct node** head_ref)
{
   /* deref head_ref to get the real head */
   struct node* current = *head_ref;
   struct node* next;
 
   while (current != NULL) 
   {
       next = current->next;
       free(current);
       current = next;
   }
   
   /* deref head_ref to affect the real head back
      in the caller. */
   *head_ref = NULL;
}
 
/* Given a reference (pointer to pointer) to the head
  of a list and an int, push a new node on the front
  of the list. */
void push(struct node** head_ref, int new_data)
{
    /* allocate node */
    struct node* new_node =
            (struct node*) malloc(sizeof(struct node));
 
    /* put in the data  */
    new_node->data  = new_data;
    
    /* link the old list off the new node */
    new_node->next = (*head_ref);
    
    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}
 
/* Drier program to test count function*/
int main()
{
    /* Start with the empty list */
    struct node* head = NULL;
    
    /* Use push() to construct below list
     1->12->1->4->1  */
    push(&head, 1);
    push(&head, 4);
    push(&head, 1); 
    push(&head, 12);
    push(&head, 1);   
    
    printf("\n Deleting linked list");
    deleteList(&head);  
    
    printf("\n Linked list deleted");
}
