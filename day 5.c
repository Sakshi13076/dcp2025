int main()
{
    int n=4;
    int arr[4]={100,50,20,10};

    int k=0;
    for(int i=0;i<n;i++)
    {
        int j=i+1;
        while(j<n&&arr[j]<arr[i])
        {
                j++;
        }

         if(j==n)
         {
             arr[k]=arr[i];
             k++;
         }


    }

    for(int m=0;m<k;m++)
    {
        printf("%d\t",arr[m]);
    }
    return 0;
}
