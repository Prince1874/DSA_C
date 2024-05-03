#include<stdio.h>

int main()
{
    int arr[3][3]= {{1,2,3},{2,3,4},(6,7,8)};
    int rmax=0,cmax=0;

    printf("Rows wise Sort:\n");

    for(int i=0; i<3; i++)
    {
        for(int j=1; j<3; j++)
        {
             rmax=arr[i][0];
             if(rmax<arr[i][j])
             {
                rmax=arr[i][j];
                
             }
        }
         printf("%d\n",rmax);
    }
    printf("Column wise :\n");

    for(int j=0; j<3; j++)
    {
         cmax=arr[0][j];
        for(int i=1; i<3; i++)
        {
    
             if(cmax<arr[i][j])
             {
                cmax=arr[i][j];
                
             }
        }
         printf("%d ",cmax);
    }
    printf("\n");
    return 0;
}