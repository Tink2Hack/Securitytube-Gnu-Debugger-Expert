// Program_noexecfun.c

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void FunctionShouldNotExecure(void)
{

    printf("\n\nI should not execute!!!\n\n");

}

void EchoInput(char *userInput)
{

        char buffer[20];

        strcpy(buffer, userInput);

        printf("\n\n%s\n\n", buffer);

}

int AddNumbers(int i, int j)
{

    return i + j;
}

int main(int argc, char **argv)
{

        int sum = 0;

        EchoInput(argv[1]);

        sum = AddNumbers(atoi(argv[2]), atoi(argv[3]));

        printf("Sum of %s + %s is %d\n\n", argv[2], argv[3], sum);

        return 0;

}
