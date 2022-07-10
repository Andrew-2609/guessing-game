#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// print the game header
	printf("*******************************\n");
	printf("* Welcome to my Guessing Game *\n");
	printf("*******************************\n");
	
	int seconds = time(0);
	srand(seconds);
	
	int secretNumber = rand() % 100;
	int won = 0;
	int numberOfTries = 0;
	float points = 1000;
	int guess;
	
	while (!won) {
		printf("Try number %d:\n", numberOfTries + 1);
		
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
		} else if (bigger) {
			printf("Your guess was bigger than the secret number!\n");
		} else {
			printf("Your guess was smaller than the secret number!\n");
		}
		
		numberOfTries++;
		points = points - abs((guess - secretNumber)) / 2.0;
	}
	
	printf("You made it in %d try(ies)!\n", numberOfTries);
	printf("Total Points: %.2f\n", points);
}

