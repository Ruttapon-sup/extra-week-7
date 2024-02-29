#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
   int a;
  /*
  enqueue(&headPtr,&tailPtr, 5);
  enqueue(&headPtr,&tailPtr, 6);
  enqueue(&headPtr,&tailPtr, 7);
  a = dequeue(&headPtr,&tailPtr);
  printf("%d\n",a);
  a = dequeue(&headPtr,&tailPtr);
  printf("%d\n",a);
  */

  
 struct Queue;
  Queue q;
  int b;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;
/*
   enqueue_struct(&q,5);
   enqueue_struct(&q,6);
   b = dequeue_struct(&q);
   printf("%d\n",b);
   b = dequeue_struct(&q);
   printf("%d\n",b);
*/
   int i,x,c=1;


 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0)
        {
          if(q.size!=0) 
          {
            printf("Customer No.%d\n",c);
            x=dequeue_struct(&q);
            // printf("dequeing %d\n",x);
            c++;
          } else printf("the queue is empty\n"); }
       else {
       enqueue_struct(&q, atoi(argv[i]), atoi(argv[i+1]));
       printf("My order is %d\n",atoi(argv[i]));
       i+=1;
           
        }
 }
        printf("==========================\n");
        printf("There are %d ppl left in the queue\n",q.size);

  return 0;
}
