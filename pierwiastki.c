#include <stdio.h>
#include <math.h>
void main(){
printf("Wspolczynniki funkcji kwadratowej Ax^2+Bx+C A,B,C:\n");
int a,b,c;
scanf("%d %d %d",&a,&b,&c);


if(a>=0 && b>=0 && c>=0) {printf("Wprowadzona funkcja kwadratowa: %dx^2+%dx+%d\n",a,b,c); }
if(a<0 && b>=0 && c>=0) {printf("Wprowadzona funkcja kwadratowa: %dx^2+%dx+%d\n",a,b,c); }
if(b<0 && a>=0 && c>=0) {printf("Wprowadzona funkcja kwadratowa: %dx^2%dx+%d\n",a,b,c); }
if(c<0 && b>=0 && a>=0) {printf("Wprowadzona funkcja kwadratowa: %dx^2+%dx%d\n",a,b,c); }

if(a<0 && b<0 && c>=0) {printf("Wprowadzona funkcja kwadratowa: %dx^2%dx+%d\n",a,b,c); }
if(a<0 && c<0 && b>=0) {printf("Wprowadzona funkcja kwadratowa: %dx^2+%dx%d\n",a,b,c); }
if((b<0 && c<0 && a>=0)||(b<0 && c<0 && a<0)) {printf("Wprowadzona funkcja kwadratowa: %dx^2%dx%d\n",a,b,c); }
if(a<0 && b<0 && c<0){("Wprowadzona funkcja kwadratowa: %dx^2%dx%d\n",a,b,c);};

double delta=b*b-4*a*c;
double pierwiastekdelty=sqrt(delta);
double x2= (-b+pierwiastekdelty)/(2*a);
double x1= (-b-pierwiastekdelty)/(2*a);
printf("Wynik  funkcji: \n Delta: %f\n Pierwiastek delty: %f\n X1: %f\n X2: %f\n", delta,pierwiastekdelty,x2,x1);
}
