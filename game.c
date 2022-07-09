#include <stdio.h>

#define NUMBER_OF_TRIES 3

int main() {
	// print the game header
	printf("*******************************\n");
	printf("* Welcome to my Guessing Game *\n");
	printf("*******************************\n");
	
	int secretNumber = 42;
	int guess;
	
	for (int i = 1; i <= NUMBER_OF_TRIES; i++) {
		printf("Try %d of %d\n", i, NUMBER_OF_TRIES);
		
		printf("What's your guess?\n");
		scanf("%d", &guess);
		
		if (guess < 0) {
			printf("You can't input negative numbers!\n");
			i--;
			
			continue;
		}
		
		int guessed = (guess == secretNumber);
		int bigger = (guess > secretNumber);
		
		if (guessed) {
			printf("Congratulations! You're right!\n");
			break;
		} else if (bigger) {
			printf("Your guess was bigger than the secret number!\n");
		} else {
			printf("Your guess was smaller than the secret number!\n");
		}
	}
}

