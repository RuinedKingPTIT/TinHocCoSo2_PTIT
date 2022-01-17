#include<stdio.h>
int isPrime(long long n){
    if(n<2) return 0;
    for(int i = 2; i * i <= n; i++) if(n%i==0)  return 0;
    return 1;
}
int main(){
   
        long long n;    scanf("%ld", &n);
        for(int i = 2; i < n; i++)  if(isPrime(i))  printf("%d\n", i);
    return 0;
}