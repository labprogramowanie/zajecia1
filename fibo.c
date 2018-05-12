#include <stdio.h>

// PIERWSZY SPOSOB

int main(){
int liczba;
int i=3;
int a=1;
int b=1;
int fibo=2;
printf("Podaj liczbe ciagu: \n");
scanf("%i", &liczba);

if (liczba>2){
while(i<=liczba){
    fibo=b+a;
    a=b;
    b=fibo;
        if(i==liczba){
            printf("%d liczba ciagu wynosi: %d", liczba, fibo);}
    i++;
}
}
else if (liczba==1 || liczba==2) { printf("%d liczba ciagu wynosi: 1", liczba, fibo);}
else {printf("Bledna liczba");}

return 0;
}

// DRUGI SPOSOB

/*
int main(){
int n,i;
printf("Podaj liczbe ciagu: \n");
scanf("%i", &n);
int tab[n];
tab[0]=1;
tab[1]=1;

if(n>2){
for (i=2; i<=n; i++){
    tab[i]=tab[i-1]+tab[i-2];
    if(i==(n-1)) { printf("%d liczba ciagu wynosi: %d",n, tab[i]);}
}}
else if (n==1 || n==2) { printf("%d liczba ciagu wynosi: 1", n);}
else {printf("Bledna liczba");}

return 0;
}
*/
