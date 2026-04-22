

#include <stdio.h>

int main()
{

    // integer

    int num = 60;

    // float

    float decimalValue = 10.5;

    // char

    char character = 'p';

    // string    

    char *string = "Hi how are you";

    // this can be modifyble

    char anotherString[50] = "this is another string";

    anotherString[1] = '6';

    printf("\n%c", anotherString[1]);

    return 0;
}