

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x, int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number = x;
  new_node->q = y;
    new_node->nextPtr = NULL;
    if(q->size==0) (q->headPtr) = new_node;
    else (q->tailPtr)->nextPtr = new_node; 
    (q->tailPtr) = new_node; 
    q->size++;
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   int order = t->order_number;
   int quan = t->q;
   int cash,price;
   if(t){
   int value= t->order_number;
       q->headPtr = t->nextPtr;
       if(q->size==1)
          q->tailPtr=NULL;
        q->size--;
    switch(order)
    {
      case 1: printf("Ramen\n");
              price = quan*100;
              printf("You have to pay %d\n",price); break;

      case 2: price = quan*20;
              printf("Somtum\n");
              printf("You have to pay %d\n",price); break;

      case 3: price = quan*50;
              printf("Fried chicken\n");
              printf("You have to pay %d\n",price); break;

      default: printf("No food\n");
    }
    if(order == 1 || order == 2 || order == 3)
    {
    while(1)
    {
      printf(":cash: ");
      scanf("%d",&cash);
      if(cash == price)
      {
        printf("Thank you\n");
        break;
      }
      if(cash > price)
      {
        printf("Thank you\n");
        printf("Change is:%d\n",cash-price);
        break;
      }
    }
    }
        free(t);
   return value;
   }
   return 0;
}



