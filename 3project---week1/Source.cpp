#include<stdio.h>
int main()
{
	char emotion;
	scanf_s("%c", &emotion);

	switch (emotion)
	{
	case 'A': {
		printf("You are happy");
		break;
	}
	case 'B': {
		printf("You are sad");
		break;
	}


	}

	return 0;
}