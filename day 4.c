int main()
{
    int m=3,n=3;
    int arr1[3]={10,12,14};
    int arr2[3]={1,3,5};

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr1[j]>arr2[i])
            {
               int temp=arr1[j];
               arr1[j]=arr2[i];
               arr2[i]=temp;

               for(int k=0;k<n;k++)
               {
                 for(int m=k+1;m<n;m++)
                 {
                     if(arr2[k]>arr2[m])
                     {
                         int temp2=arr2[k];
                         arr2[k]=arr2[m];
                         arr2[m]=temp2;
                     }
                 }
               }
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr2[i]);
    }

    return 0;
}
