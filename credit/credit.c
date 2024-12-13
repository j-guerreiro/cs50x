#include <stdio.h>
#include <cs50.h>

/**
 * Receive cardNumber and digits
 * Outputs single card digit from right-to-left
 */
int getDigit(long cardNumber, int digits)
{
  long divisor = 1;
  long digit = 0;

  for (int i = 0; i < digits; i++)
  {
    divisor *= 10;
  }

  if ((cardNumber % divisor) != 0)
  {
    digit = cardNumber % divisor;
    return digit;
  }
  else 
  {
    digit = 0;
    return digit;
  }
}

int getDigit(long cardNumber, int digits);
int main()
{
  // American Express uses 15-digit numbers,
  // MasterCard uses 16-digit numbers, and
  // Visa uses 13- and 16-digit numbers

  // Prompt for input
  // long cardNumber = get_long("Enter card number: ");

  long card = 4003600000000014;

  int howManyDigits = 1;
  int digit = getDigit(card, howManyDigits);
  printf("Digit: %d\n", digit);

  // TODOs:
  // Checksum if card is valid

  // Check for card length and starting digits

  // Print AMEX, MASTERCARD, VISA or invalid
}