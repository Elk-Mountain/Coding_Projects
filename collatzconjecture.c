#include <stdio.h>

int number;

void main() {

int loopcounter = 3;

  printf("Collatz Conjecture\n");
  printf("Please enter a number.\n");
  scanf("%i", &number);
  printf("Your number is %i\n", number);

  while(loopcounter != 0) {

    switch(number % 2) {
      case 0:
           number = (number / 2);
           break;
      case 1:
           number = (number * 3) + 1;
           break;
    }
   while(number == 1) {
    loopcounter--;
   }

   printf("%i\n", number);

  }
}
