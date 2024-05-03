#include<stdio.h>

int main()
{
    int arr[3][3] = {
    {3,4,2},
    {8,7,4},
    {11,9,8}};

    int max=0,r=0,c=0,temp=0;
    int count1=1,count2=1,count3=1;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(max<arr[i][j]){
                r=i;
                c=j;
                max=arr[i][j];
            }
        }
    }
    temp = arr[r][c];
    arr[r][c]=arr[1][1];
    arr[1][1]=temp;

    while(count1!=0)
    {
        // 1st row sorting
        for(int i=0; i<1; i++)
        {
              for(int j=0; j<3; j++)
              {
                 for(int k=0; k<3-j-i; k++){
                    if(arr[i][k]<arr[i][k+1]){
                    int t;
                    t= arr[i][k];
                    arr[i][k]=arr[i][k+1];
                    arr[i][k+1]=temp;
                }
                 }
              }
        }
        count1=0;
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
           printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}