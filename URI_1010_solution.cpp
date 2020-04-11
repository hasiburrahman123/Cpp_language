#include<cstdio>
using namespace std;

int main(int argc , char const * argv[])
{
    int a , b ;
    double c , calculate;

    scanf("%d %d %lf",&a ,&b, &c);
    calculate = b * c;
    scanf("%d %D %lf", &a , &b ,&c);
    calculate += b * c;
    printf("VALOR A PAGAR: R$ %.2lf\n" ,calculate );

    return 0;
}
