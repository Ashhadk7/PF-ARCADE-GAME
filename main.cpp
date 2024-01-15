#include<stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include "pman.h"
#include "hman.h"
int main() {
    char s;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("\n\t\t\t\t\t\t\tWELCOME TO THE\n");
    SetConsoleTextAttribute(hConsole, 14);
    printf("\t\t\t\t\t    _     ____   ____     _     ____   _____\n");
    printf("\t\t\t\t\t   / \\   |  _ \\ / ___|   / \\   | __ \\ |\n");
    printf("\t\t\t\t\t  / _ \\  | |_) || |     / _ \\  ||  | ||_____\n");
    printf("\t\t\t\t\t / ___ \\ |  _  || |__  / ___ \\ ||__| ||\n");
    printf("\t\t\t\t\t/_/   \\_\\|_| \\_\\\\____|/_/   \\_\\|____/ |_____\n\n");
    SetConsoleTextAttribute(hConsole, 9);
    printf("\t\t\t\t\t   Press 'P|p' to play PACMAN(Singleplayer)\n\n");
    printf("\t\t\t\t\t   Press 'H|h' to play HANGMAN(Multiplayer)\n\n");
    SetConsoleTextAttribute(hConsole, 7);
    printf("\t\t\t\t\t   Press any other character to exit\n\n");
    printf("\t\t\t\t\tSelect: ");
    scanf("%c", &s);
	if(s == 'P' || s == 'p'){
		system("cls");
		pacman();
	}else if(s == 'H' || s == 'h'){
		system("cls");
		hangman();
	}else{
		SetConsoleTextAttribute(hConsole, 12);
		printf("\n\n\t\t\t\t\t\t  Aracde mode exited.");
		SetConsoleTextAttribute(hConsole, 7);
		exit(0);
	}
    return 0;
}
