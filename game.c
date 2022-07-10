#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// print the game header
	printf("*******************************\n");
	printf("* Welcome to my Guessing Game *\n");
	printf("*******************************\n");
	
 	printf("\t    .---.				\n");
	printf("\t   /     \\			\n");
	printf("\t   \\.@-@./			\n");
	printf("\t   /`\\_/`\\			\n");
	printf("\t  //  _  \\\\		\n");
	printf("\t | \\     )|_		\n");
	printf("\t/`\\_`>  <_/ \\	\n");
	printf("\t\\__/'---'\\__/	\n");
	
	int level;
	int numberOfTries;
	
	printf("\nChoose the game difficulty:\n");
	printf("(1) Easy / (2) Medium / (3) Hard\n\n");
	printf("I choose: ");
	scanf("%d", &level);
	
	switch(level) {
		case 1:
			numberOfTries = 20;
			break;
		case 2:
			numberOfTries = 10;
			break;
		default:
			numberOfTries = 5;
			break;
	}
		
	int seconds = time(0);
	srand(seconds);
	
	int secretNumber = rand() % 100;
	int won = 0;
	float points = 1000;
	int guess;
	
	int currentTry = 1;
	
	for (currentTry = 1; currentTry <= numberOfTries; currentTry++) {
		printf("Try number %d/%d:\n", currentTry, numberOfTries);
		
		printf("What's your guess?\n");
		scanf("%d", &guess);
		
		if (guess < 0) {
			printf("You can't input negative numbers!\n");
			continue;
		}
		
		int guessed = (guess == secretNumber);
		int bigger = (guess > secretNumber);
		
		if (guessed) {
			printf("\nCongratulations! You're right!\n");
			won = 1;
			break;
		} else if (bigger) {
			printf("Your guess was bigger than the secret number!\n");
		} else {
			printf("Your guess was smaller than the secret number!\n");
		}

		points = points - abs((guess - secretNumber)) / 2.0;
	}
	
	if (won) {
		printf("\nYou made it in %d tries)!\n", currentTry + 1);
		printf("Total Points: %.2f\n", points);
		
		printf("\t__   __                                _ 					\n");
		printf("\t\\ \\ / /                               | |				\n");
		printf("\t \\ V /___  _   _  __      _____  _ __ | |				\n");
		printf("\t  \\ // _ \\| | | | \\ \\ /\\ / / _ \\| '_ \\| |	\n");
		printf("\t  | | (_) | |_| |  \\ V  V / (_) | | | |_|				\n");
		printf("\t  \\_/\\___/ \\__,_|   \\_/\\_/ \\___/|_| |_(_)	\n\n");
	} else {
		printf("\nYou lost =/ the secret number was %d\n", secretNumber);
		
		printf("\t__   __            _               _   					\n");
		printf("\t\\ \\ / /           | |             | |  				\n");
		printf("\t \\ V /___  _   _  | |     ___  ___| |_ 				\n");
		printf("\t  \\ // _ \\| | | | | |    / _ \\/ __| __|			\n");
		printf("\t  | | (_) | |_| | | |___| (_) \\__ \\ |_ 				\n");
		printf("\t  \\_/\\___/ \\__,_| \\_____/\\___/|___/\\__|	\n\n");
	}
}

