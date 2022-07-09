#include <stdio.h>

int main() {
	// print the game header
	printf("*******************************\n");
	printf("* Welcome to my Guessing Game *\n");
	printf("*******************************\n");
	
	int secretNumber = 42;
	int guess;
	
	printf("What's your guess?\n");
	scanf("%d", &guess);
	
	int guessed = (guess == secretNumber);
	
	if (guessed) {
		printf("Congratulations! You're right!\n");
	} else {
		int bigger = (guess > secretNumber);
		
		if (bigger) {
			printf("Your guess was bigger than the secret number!\n");
		} else {
			printf("Your guess was smaller than the secret number!\n");
		}
	}
}

