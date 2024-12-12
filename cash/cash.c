#include <cs50.h>
#include <stdio.h>

int main(void) {
  // 25C
  int quarters = 0;
  // 10C
  int dimes = 0;
  // 5C
  int nickels = 0;
  // 1C
  int pennies = 0;

  int changeOwed;
  
  // Prompt the user for change owed, in cents, and treating negatives.
  do 
  {
    changeOwed = get_int("Change owed:\n ");
  } while (changeOwed < 0);
  
  // Calculate how many quarters you should give customer
  // Subtract the value of those quarters from cents
  while (changeOwed >= 25) 
  {
    changeOwed -= 25;
    quarters++;

    if (changeOwed < 25) {
      break;
    }
  }

  // Calculate how many dimes you should give customer
  // Subtract the value of those dimes from remaining cents
  while (changeOwed >= 10) 
  {
    changeOwed -= 10;
    dimes++;

    if (changeOwed < 10) {
      break;
    }
  }
  
  // Calculate how many nickels you should give customer
  // Subtract the value of those nickels from remaining cents
  while (changeOwed >= 5) 
  {
    changeOwed -= 5;
    nickels++;

    if (changeOwed < 5) 
    {
      break;
    }
  }

  // Calculate how many pennies you should give customer
  // Subtract the value of those pennies from remaining cents
  while (changeOwed >= 1) 
  {
    changeOwed -= 1;
    pennies++;

    if (changeOwed < 1) 
    {
      break;
    }
  }

  // Sum the number of quarters, dimes, nickels, and pennies used
  // Print that sum
  int sumCoinsUsed = quarters + dimes + nickels + pennies;

  printf("Quantity of coins used: %d\n", sumCoinsUsed);
}