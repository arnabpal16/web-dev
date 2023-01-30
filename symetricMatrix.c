#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row=3,col=3,i,j,count=0;
    int a[row][col];
    int b[row][col];

    printf("enter matrix elements:\n");

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }

    printf("matrix is\n");

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n");
    }

    // assigning a->row into b->col & a->col into b->row

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            b[row][col]=a[col][row];
        }
    }

    // checking if the two matrix is same ot not ?!

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            if(a[row][col]==b[row][col])
            {
                count++;
                break;

            }
        }
    }
    if(count==1)
    {
        printf(" symetric\n");
    }
    else
    {
           printf("NOT SYMETRIC");
    }
    return 0;
}