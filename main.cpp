#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x=0,y=0,r;
    int n,i,a,b;
    printf("0-25=F\n26-50=B\n51-75=R\n76-99=L\n");
    printf("Enter number of steps: ");
    scanf("%d",&n);
    printf("Steps\tCurrent position\tRandom number\tMovement\tNext position\n");
    for(i=0;i<n;i++)
    {
        r=rand()%100;
        if(r>=0 && r<=25)
        {
            a=x;
            b=y;
            y +=1;
            printf("%d\t\t(%d,%d)\t\t%d\t\tF\t\t(%d,%d)\n",i+1,a,b,r,x,y);

        }
        else if(r>=26 && r<=50)
        {
            a=x;
            b=y;
            y -=1;
            printf("%d\t\t(%d,%d)\t\t%d\t\tB\t\t(%d,%d)\n",i+1,a,b,r,x,y);
        }
        else if(r>=51 && r<=75)
        {
            a=x;
            b=y;
            x +=1;
            printf("%d\t\t(%d,%d)\t\t%d\t\tR\t\t(%d,%d)\n",i+1,a,b,r,x,y);
        }
        else
        {
            a=x;
            b=y;
            x -=1;
            printf("%d\t\t(%d,%d)\t\t%d\t\tL\t\t(%d,%d)\n",i+1,a,b,r,x,y);
        }
    }


}
