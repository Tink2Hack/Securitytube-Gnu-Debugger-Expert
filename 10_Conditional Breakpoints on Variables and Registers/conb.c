// conb.c

#include<stdio.h>

int main(int argc, char **argv)
{
    int counter = 10;

    while (counter --)
    {
        printf("%d\n", counter);
    }

    if (strcmp(argv[1], "hahaha") == 0)
    {
        printf("Correct password!\n\n");
    }
    else
    {
        printf("Sorry! Please try again! \n\n");
    }

    return 0;
}

