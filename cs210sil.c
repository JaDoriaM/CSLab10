/* cs210sil.c
 * =============================================================
 *    Name: JaDoria McClendon
 * Section: T6
 * Purpose: Creating a safe input library
 * =============================================================
 */

#include <stdlib.h>
#include <stdio.h>

// Use this function as a template for the others
int getIntegerSafe(){
   int value;
   int scanfReturn = 0;

   // attempt to read an integer value
   scanfReturn = scanf("%i", &value);
   fflush(stdin); // eliminate any excess input

   // quit if unsuccessful
   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}
long getLongSafe(){
   long value;
   long scanfReturn = 0;

   scanfReturn = scanf("%ld", &value);
   fflush(stdin);

   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}
float getFloatSafe() {
   float value;
   float scanfReturn = 0;

   scanfReturn = scanf("%f", &value);
   fflush(stdin);
   

   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}
double getDoubleSafe() {
   double value;
   double scanfReturn = 0;

   scanfReturn = scanf("%le", &value);
   fflush(stdin);
   

   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}
char getCharSafe() {
   char value;
   char scanfReturn = 0;

   scanfReturn = scanf("%c", &value);
   fflush(stdin);
   

   if(scanfReturn != 1){
      fprintf(stderr, "Bad integer input - terminating\n");
      exit(1);
   }
   return value;
}



