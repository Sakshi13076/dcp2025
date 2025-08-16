int main()
{

    int n;
    printf("Enter size of the array ");
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n-1;i++)
    {
        printf("Enter element %d of array: ",i+1);
        scanf("%d",&arr[i]);
    }

     printf("\n");
    printf("The given array is:\n");
    for(int i=0;i<n-1;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            printf("Missing element: %d",i+1);
            break;
        }
    }

    return 0;
}
