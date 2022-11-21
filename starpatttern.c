#include <stdio.h>
void starpattern(int line)
{
    for (int i=0; i<line; i++) {
        for (int j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

}
void starpattern2(int line)
{
    for (int i=line; i>0; i--) {
        for (int j=i; j>0; j--) {
            printf("*");
        }
        printf("\n");
    }

}

int main ()
{
    int n;
    printf("Enter the number of line you want to star pattern \n");
    scanf("%d",&n);
    starpattern(n);
    printf("alternating\n");
    starpattern2(n);
    return 0;
}
