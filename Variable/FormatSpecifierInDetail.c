

#include <stdio.h>

int main()
{

    // int

    int num = 886841;
    printf("%d", num);

    // now

    printf("\n%5d", num);

    // float

    float pi = 6.50;

    printf("\n%f", pi);

    // now

    printf("\n%.2f", pi);
    printf("\n%.3f", pi);
    printf("\n%10.3f", pi);

    // for char

    char letter = 'p';

    printf("\n%c", letter);

    printf("\n%5c", letter);

    // string

    char string[20] = "how are youhhhh";

    printf("\n%s", string);
    printf("\n%30s", letter);

    return 0;
}