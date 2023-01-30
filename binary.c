#include<stdio.h>
int binarySearch(int arr,int n,int key)
{
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid==key)
        {
            return mid;
        }
        else if(key<mid)
        {
            
            high=mid-1;
        }
        else
        {
           
            low=mid+1;
        }
    }
    return -1;
}

int main()
{
    int n,key;
    printf("enter aray size \n");
    scanf("%d",&n);
    int arr[n];
    printf("entr array element\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("entr element for search\n");
    scanf("%d",&key);
    int ans= binarySearch(arr,n,key);
    if(ans==-1)
    {
        printf("element is not given in the array\n");
    }
    else 
    {
        printf("element found at pos %d\n",ans);
    }
    return 0;
}