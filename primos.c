#include<stdio.h>
int main(int argc, char const *argv[]) 

{
    int num,i,a;
    a=0; 

    printf("Introduce un numero: ");
    scanf("%d",&num);

for(i=1;i<=num;i++)
{
    if(num%i==0)
    a++;
}

if(a==2) {
    printf("El numero es primo");
}
 else {
    printf("El numero no es primo");
}
    return 0;
}