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
	
	if (guess == secretNumber) {
		printf("Congratulations! You're right!\n");
	} else {
		printf("You missed! =/\n");
		printf("But that's alright!! You can try again!\n");
	}
}

