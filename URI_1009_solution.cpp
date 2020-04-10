

#include <cstdio>

int main()
{
 double a;
 double b;
 char word[256];

 scanf("%s", &word);
 scanf("%lf", &a);
 scanf("%lf", &b);
double total = (a + (b/100)*15);
 printf("TOTAL = R$ %.2lf\n",total );

 return 0;
}


