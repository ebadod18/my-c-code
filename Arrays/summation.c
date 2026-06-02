#include <stdio.h>
#include <stdlib.h> // llabs() ফাংশন ব্যবহার করার জন্য এই লাইব্রেরিটি লাগবে

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];
    int i;

    long long sum = 0;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        sum += A[i]; 
    }

    printf("%lld\n", llabs(sum));

    return 0;
}