int dublicate_value(int arr[],int n)
{
for(int i=0;i<n-1;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
            return arr[i];
        }
    }
}

}

int main()
{

    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter array elements only in between 1 to %d\n",n-1);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }


    int ans=dublicate_value(arr,n);
    printf("\nDublicate value: %d",ans);



    return 0;
}
