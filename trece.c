#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int n = atoi (argv[1]);
 int a = 0;
 int b = 1;
 int c = 0;
 if (n == 1) {
   printf("%d\n", a);
   return 0;
 }
 if (n == 2) {
   printf("%d %d\n", a, b);
   return 0;
 }
 printf("%d %d ", a, b);
 for (int i = 3; i <= n; i++) {
 c = a + b;
 printf("%d ", c);
 a = b;
 b = c;
}
printf("%\n");
 return 0;
 }
