#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int f=-1,r=-1;
void insert();
void del();
void display();
int main()
{
    int ch;
    while(1)
    {
        printf("\n\n~~~~~~~~~~~~~~~~MENU~~~~~~~~~~~~~~~~\n");
        printf("\n\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("ENTER A CHOICE:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: insert();
                    break;
            case 2: del();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
                    break;

            default: printf("WRONG CHOICE!!!\n");
        }
    }
}
void insert()
{
    int item;
    if(r==MAX-1)
        printf("OVERFLOW!");
    else

        printf("Enter your number: ");
        scanf("%d\n",&item);
        r=r+1;
        queue[r]=item;
        printf("%d is added to the queue.",item);
        if(f==-1)
    {
        f=0;
    }
}
void del()
{
    if (f==-1)
        printf("UNDERFLOW!");
    else{
       printf("%d is deleted from the queue",queue[r]);
       r=r-1;
}
}
void display(){
    int i;
    if(f==-1)
        printf("EMPTY QUEUE\n");
    else
    {
        for(i=f;i<=r;i++)
            printf("%d\t",queue[r]);
    }
}




