/* lab10.c
 * =============================================================
 *    Name: JaDoria McClendon
 * Section: T6
 * Purpose: A mad lib program
 * =============================================================
 */

#include <stdio.h>
#include <string.h>
#include "cs210sil.h"

int intVar;

#define MAX_STATEMENT_LENGTH 100
int main(void) {
   char mynamestring[MAX_STATEMENT_LENGTH];

   scanf("%s", mynamestring);

   char aplacestring[MAX_STATEMENT_LENGTH];

   scanf("%s", aplacestring);

   intVar = getIntegerSafe();

   char anounstring[MAX_STATEMENT_LENGTH];

   scanf ("%s", anounstring);

   printf("%s went to %s to buy %i different types of %s.\n",mynamestring, aplacestring, intVar, anounstring);
   return 0;
}
