#include <stdio.h>
#include <math.h>
int main () {
    int arr[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int arr1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
    int i,j,k;
    int mult[3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   mult[i][j]=0;
            for(k=0;k<3;k++)
            {
                mult[i][k]+=arr[i][k]*arr1[k][j];
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mult[i][j]);
        }
        printf("\n");
    }
}
