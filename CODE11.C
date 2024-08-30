#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start =NULL;
int main(){
    char ch;
    struct node *newnode, *last, *ptr;
    while(1){
        newnode = (struct node *) malloc( sizeof(struct node));
        if(newnode == NULL){
            printf("Memory Overflow!");
            break;
        }
        else{
            printf("Enter The Data: \n");
            scanf("%d", &newnode->data);
            newnode->next = NULL;

                if(start == NULL){
                    start = newnode;
                    last = newnode;
                }
                else{
                    last->next = newnode;
                    last = newnode;
                }
        }
        fflush(stdin);
        printf("Do you want to continue? \n");
        scanf("%c", &ch);
            if(ch == 'n'){
                break;
            }
            else{
                continue;
            }
    }
ptr = start;
        while(ptr != NULL){
            printf(  "%d ", ptr-> data);
            ptr = ptr->next;
        }
return 0;
}