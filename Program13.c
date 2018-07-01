//C program using logical operators....

#include <stdio.h>

int main() 
{

   int a = 4;
   int b = 2;
   int c ;

   if ( a && b ) {
      printf("Line 1 - Condition is true\n" );
   }
	
   if ( a || b ) {
      printf("Line 2 - Condition is true\n" );
   }
   
   /* lets change the value of  a and b */
   a = 0;
   b = 5;
	
   if ( a && b ) {
      printf("Line 3 - Condition is true\n" );
   } else {
      printf("Line 3 - Condition is not true\n" );
   }
	
   if ( !(a && b) ) {
      printf("Line 4 - Condition is true\n" );
   }
   
   return 0;
	
}
