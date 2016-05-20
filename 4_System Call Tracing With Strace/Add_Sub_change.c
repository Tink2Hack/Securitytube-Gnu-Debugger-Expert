// Add_Sub.c

#include<stdio.h>

int IamAGlobalVariable;
int IamInitializedGlobalVariable = 20;
int AddNumbers(int number_1, int number_2)
{
    int sum = 0;

    sum = number_1 + number_2;

    return sum;

}

int SubtractNumbers(int number_1, int number_2)
{
    int result = 0;

    result = number_1 - number_2;

    return result;

}

int main(int argc, char **argv)
{
    int input_1 = atoi(argv[1]);

    int input_2 = atoi(argv[2]);

    printf("\n\n Welcome to a Simple Add/Subtract Program\n\n\n");

    printf("Sum of %d + %d = %d\n\n", input_1, input_2, AddNumbers(input_1, input_2));

    printf("Difference of %d - %d = %d\n\n", input_1, input_2, SubtractNumbers(input_1, input_2));

    getchar();

    return 0;

}
