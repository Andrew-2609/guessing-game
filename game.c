#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// print the game header
	printf("*******************************\n");
	printf("* Welcome to my Guessing Game *\n");
	printf("*******************************\n\n");
	
	int seconds = time(0);
	srand(seconds);
	
	int secretNumber = rand() % 100;
	int won = 0;
	int numberOfTries = 5;
	float points = 1000;
	int guess;
	
	for (int i = 1; i <= numberOfTries; i++) {
		printf("Try number %d:\n", i);
		
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
		printf("\nYou made it in %d try(ies)!\n", numberOfTries);
		printf("Total Points: %.2f\n", points);
	} else {
		printf("\nYou lost =/ the secret number was %d\n", secretNumber);
	}
}

