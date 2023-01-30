#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,col,i,j,count=0;
    int arr[10][10];
    printf("enter row number\n");
    scanf("%d",&row);
    printf("enter cooloumn number\n");
    scanf("%d",&col);
    printf("enter matrix elements\n");
    for ( i = 0; i<row; i++)
    {
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matirx is :\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t",arr[i][j]);
        }
    }
    //check if the matrix is sparse or not
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j]==0)
            {
                count++;
            }
        }
        printf(" \n");
    }
    if(count>((row*col)/2))
    {
        printf("the matrix is sparse matrix!\n");
    }
    else{
        printf("It's not a sparse matrix!");
    }
    return 0;
}