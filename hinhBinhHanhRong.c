#include<stdio.h>
int main(){
    int n;scanf("%d", &n);
    for(int i = 1; i<= n; i++){
        for(int j = 1; j <= 2*n-i; j++){
            if(j <= (2*n-i-n))   printf("~");
            else if(j > (2*n-i-n)+1 && j < 2*n-i && i > 1 && i < n) printf(".");
            else    printf("*");
        }
        printf("\n");
    }
    return 0;
}