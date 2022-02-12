#include "../function.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compute()
{
	system("cls || clear");
	printf("==========================================================\n");
	printf(" _____          _         __  __                 _\n");
	printf("|_   _| __ __ _(_)_ __   |  \\/  | __ _ _ __ ___ | |_\n");
	printf("  | || '__/ _` | | '_ \\  | |\\/| |/ _` | '_ ` _ \\| __|\n");
	printf("  | || | | (_| | | | | | | |  | | (_| | | | | | | |_\n");
	printf("  |_||_|  \\__,_|_|_| |_| |_|  |_|\\__, |_| |_| |_|\\__|\n");
	printf("                                 |___/\n");
	printf("==========================================================\n");

	printf(" \n Press any key to continue:");

	getchar();
	printf("\e[1;1H\e[2J");
	login();

	int menu_choice, choice_return;
start:
	printf("\e[1;1H\e[2J");
	printf("\n=================================\n");
	printf("    TRAIN RESERVATION SYSTEM");
	printf("\n=================================");
	printf("\n1>> Reserve A Ticket");
	printf("\n------------------------");
	printf("\n2>> View All Available Trains");
	printf("\n------------------------");
	printf("\n3>> Display Booked Tickets");
	printf("\n------------------------");
	printf("\n4>> Cancel Booked Tickets");
	printf("\n------------------------");
	printf("\n5>> validate Booked Tickets");
	printf("\n------------------------");
	printf("\n6>> Exit");
	printf("\n------------------------");
	printf("\n\n-->");
	scanf("%d", &menu_choice);
	switch (menu_choice)
	{
	case 1:
		reservation();
		break;
	case 2:
		viewdetails();
		printf("\n\nPress any key to go to Main Menu..");
		getchar();
		getchar();
		break;
	case 3:
		display();
		break;
	case 4:
		cancel();
		break;
	case 5:
		validate();
		break;
	case 6:
		exit(0);
	default:
		printf("\nInvalid choice");
	}
	goto start;
}
