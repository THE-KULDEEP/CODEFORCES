#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        int diff = abs(a - b);
        int moves = (diff + 9) / 10;

        printf("%d\n", moves);
    }

    return 0;
}
