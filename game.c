#include <stdio.h>

int main() {
	// print the game header
	printf("*******************************\n");
	printf("* Welcome to my Guessing Game *\n");
	printf("*******************************\n");
	
	int secretNumber = 42;
	int won = 0;
	int numberOfTries = 0;
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
	}
	
	printf("You made it in %d tries!\n", numberOfTries);
}

