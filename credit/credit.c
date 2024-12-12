#include <stdio.h>
#include <cs50.h>


int main (void)
{
  // American Express uses 15-digit numbers, 
  // MasterCard uses 16-digit numbers, and 
  // Visa uses 13- and 16-digit numbers

  // Prompt for input
  long cardNumber = get_long("Enter card number: ");

  // this is a way to find the last digit
  int numberMod = cardNumber % 10;
  printf("Last digit: %d\n", numberMod);

  // Find a way to check other digits

  // TODOs:
  // Checksum if card is valid

  // Check for card length and starting digits
  
  // Print AMEX, MASTERCARD, VISA or invalid
}