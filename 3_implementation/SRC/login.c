#include "../function.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"
int check;
void logg()
{
	TEST_ASSERT_EQUAL(1, check);
}
void login()
{
	int a = 0, i = 0;
	FILE *in = fopen("input.txt", "r");
	char uname[10], passs[10];
	char user[10] = "nithish";
	char pass[10] = "root";

	do
	{
		printf("\n  =======================  USER LOGIN  =======================\n  ");
		printf(" \n                       ENTER USERNAME:-");
		scanf("%s", uname);
		printf(" \n                       ENTER PASSWORD:-");
		scanf("%s", passs);
		i = 0;
		if (strcmp(uname, user) == 0 && strcmp(passs, pass) == 0)
		{
			printf("  \n\n\n       WELCOME TO THE SYSTEM !! LOGIN SUCCESSFUL\n");
			check = 1;
			UNITY_BEGIN();
			RUN_TEST(logg);
			UNITY_END();
			printf("\n\n\n\t\t\t\tPress any key to continue...");
			getchar();
			getchar();
			printf("\e[1;1H\e[2J");
			break;
		}
		else
		{
			printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL\n");
			check = 0;
			a++;
			UNITY_BEGIN();
			RUN_TEST(logg);
			UNITY_END();
			printf("\n\n\n\t\t\t\tPress any key to Login again...");
			getchar();
			getchar();
			printf("\e[1;1H\e[2J");
		}
	} while (a <= 2);
	if (a > 2)
	{
		printf("\nSorry you have entered the wrong username and password for four times!!!");
		getchar();
		exit(0);
	}
}
