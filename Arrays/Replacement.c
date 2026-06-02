#include<stdio.h>
int main()
{
    int N,X;
    scanf("%d",&N);
    int A[N];

    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
        if(0<A[i]){
            printf(" 1 ");}
        else if(0>A){
            printf(" 2 ");
        }
        else 
        {
        printf(" 0 ");
        }
    }
    return 0;
}