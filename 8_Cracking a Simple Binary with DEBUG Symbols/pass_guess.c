// pass_guess.c

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void UnlockSecret(void)
{
	printf("Secret code: 7854-9624-8547-1236\n\n");

}

int IsPasswordCorrect(char *password, char *userInput)
{

	int result;

	result = strcmp(password, userInput);

	if (result == 0)
	{
		return 1;
	}

	return 0;

}

int main(int argc, char **argv)
{

	int checkPass = 0;

	if (argc < 2)
	{
		printf("%s password_to_unlock", argv[0]);
		exit(0);
	}

	checkPass = IsPasswordCorrect(argv[1], "l33tsp3ak");

	if (checkPass == 1)
	{
		UnlockSecret();
	}
	else
	{
		printf("\n\n Incorrect Password! please try again! \n\n\n");
	}

	return 0;
}
