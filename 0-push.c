#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

void push(stack_t *temp)
{
        int data;
        stack_t *pointer = (struct node*)malloc(sizeof(struct node)); //pointer in this case is used as a temp memory

        if (pointer == NULL) //checking if the pointer is full
        {
                printf("stack overflow");
        }
        else
        {
                printf("Enter the data to be inserted: \n");
                scanf("%d", &data);
                if(temp == NULL)
                {
                        pointer->data = data;
                        pointer->next = NULL;
                        temp = pointer;
                }
                else
        {
                pointer->data = data;
                pointer->next = temp;
                temp = pointer;
        }
        }
}
