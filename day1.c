int main()
{
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element of array:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("The array is: ");
    for(int i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }

    int m=0,q=0,p=0;
    int j;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            m++;
        }
        else if(arr[i]==1)
        {
            q++;
        }
        else{
            p++;
        }

    }

    int index = 0;
    for (int j = 0; j < m; j++)
        arr[index++] = 0;
    for (int j = 0; j < q; j++)
        arr[index++] = 1;
    for (int j = 0; j < p; j++)
        arr[index++] = 2;

    printf("\n");
     printf("The sorted array is: ");
    for(int i=0;i<n;i++)
    {
        printf("\t%d",arr[i]);
    }
    return 0;
}
