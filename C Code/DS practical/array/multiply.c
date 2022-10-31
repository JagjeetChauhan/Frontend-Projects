#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    printf("enter the number of row=");
    scanf("%d", &r);
    printf("enter the number of column=");
    scanf("%d", &c);
     printf(" First Matrix \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element a %d%d : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
     printf(" Second Matrix \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter element a %d%d : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("multiply of the matrix=\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}