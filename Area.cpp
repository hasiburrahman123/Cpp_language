#include<cstdio>

using namespace std ;
 int main(){
   double A , B , C ;
   scanf("%lf %lf %lf" , &A ,&B ,&C);
    printf("TRIANGLE: %.3lf\n", (A * C) / 2);
    printf("CIRCLE: %.3lf\n", C * C * 3.14159);
    printf("TRAPEZIO: %.3lf\n", ((A + B) / 2) * C);
    printf("Square: %.3lf\n", B * B);
    printf("RETANGULO: %.3lf\n", A * B);

    return 0;
 }
