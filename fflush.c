#include <stdio.h>

typedef struct Node
{
    struct Node *link;

    int value;
} Node;

int main(void)
{
   Node * first = NULL;

   Node * ans[1];

   ans[0] = first;

   printf("%d\n",ans[0]->value);
   
   fflush(stdout);
    
    printf("Swiss Cheese");
}
