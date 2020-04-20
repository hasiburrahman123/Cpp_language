#include<cstdio>

using namespace std ;

int main(){
   int A , B , C ,   temp ;

   scanf("%d  %d %d" , &A , &B , &C);

   temp = A ;
   if(A < B || A < C ){

     if (B < C ){
            temp = C ;
     }

    else {
        temp = B ;
    }
   }

printf("Heighest number is :%d\n ", temp);
}
