#include<stdio.h>
#include<conio.h>

int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int i=1;
    int j=r;

    while(i<=r){
        while(j>=i){
            j--;
            printf("* ");
            }
        printf("\n");
        i++;
        j=r;
    }
    return 0;
}
