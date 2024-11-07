#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // Initialize random number generator
  srand(time(0));
  int randomNumber = (rand() % 100) + 1;
  int no_of_guesses = 0;
  int guessed_number;

  printf("Welcome to the Number Guessing Game!\n");
  printf("I have picked a number between 1 and 100. Can you guess it?\n");

  do
  {
    printf("Enter your guess: ");
    if (scanf("%d", &guessed_number) != 1)
    {
      while (getchar() != '\n')
        ;
      printf("Invalid input! Please enter a valid number.\n");
      continue;
    }
    if (guessed_number > randomNumber)
    {
      printf("Lower number please!\n");
    }
    else if (guessed_number < randomNumber)
    {
      printf("Higher number please!\n");
    }
    else
    {
      printf("Congrats!! You guessed the correct number!\n");
    }
    no_of_guesses++;
  } while (guessed_number != randomNumber);
  printf("You guessed the number in %d guesses.\n", no_of_guesses);
  return 0;
}
