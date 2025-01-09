#include <stdio.h>
#include <stdlib.h>

int main()
{
   float number1, number2, result;
   int operation;

   printf("Enter the first number: ");
   scanf("%f", &number1);

   printf("Enter the second number: ");
   scanf("%f", &number2);

   do
   {
      printf("What operation do you want to perform?\n");
      printf("1 - Addition\n");
      printf("2 - Subtraction\n");
      printf("3 - Multiplication\n");
      printf("4 - Division\n");
      scanf("%d", &operation);

      if (operation <= 0 || operation > 4)
      {
         printf("Enter a valid value.\n");
      }
   } while (operation <= 0 || operation > 4);

   switch (operation)
   {
   case 1:
      result = number1 + number2; 
      break;

   case 2:
      result = number1 - number2;
      break;

   case 3:
      result = number1 * number2;
      break;

   case 4:
      result = number1 / number2;
      break;

   default:
      break;
   }

   printf("Result: %.2f\n", result);
   return 0;
}