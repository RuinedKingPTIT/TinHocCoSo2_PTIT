#include<stdio.h>
int check(int n){
    if(n<2) return 0;
    for(int i = 2 ; i *i <= n; i++) if(n%i==0)  return 0;
    return 1;
}
int main(){
    int n;  scanf("%d", &n);
    int a[n];
    for(int i = 0 ;  i< n; i++) scanf("%d", &a[i]);
    int dem = 0;
    for(int i = 0 ; i < n; i++) if(check(a[i])) dem++;
    printf("%d ", dem);
    for(int i = 0 ; i < n; i++) if(check(a[i])) printf("%d ", a[i]);
}