#include <stdio.h>

int silnia(int n){
int i,s=1;
for(i=2; i<=n; i++)
{
    s=s*i;
}
return s;
}
 int main(){
int a,b;
printf("Liczba do silnii: \n");
scanf("%i", &a);
b=silnia(a);
printf("Silnia(%d)=%d\n",a,b);
return 0;
 }
