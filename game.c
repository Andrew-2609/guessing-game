#include <stdio.h>

int main() {
	// print the game header
	printf("*******************************\n");
	printf("* Welcome to my Guessing Game *\n");
	printf("*******************************\n");
	
	int guess;
	
	printf("What's your guess?\n");
	scanf("%d", &guess);
	
	printf("Your guess was: %d\n", guess);
}
