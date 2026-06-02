#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
 // যদি X খুঁজে না পাওয়া যায়, তবে প্রিন্ট করার সময় এই ভেরিয়েবলে গার্বেজ (ভুল) মান থেকে যাবে।
    // সঠিক: int X; int position = -1;
    int X;
    int position = -1;

    scanf("%d", &X);

    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            position = i;
            break; // ✅ প্রথমবার X কে পেলেই লুপ থামিয়ে দেওয়া উচিত, তাই break এখানে হবে।
        }
    }

    printf("%d\n", position);

    return 0;
}