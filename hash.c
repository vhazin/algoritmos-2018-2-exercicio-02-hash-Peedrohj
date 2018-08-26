#include <stdio.h>

int main(){
    int t = 0;
    unsigned long long int vezes = 0;
    unsigned long long int a, b, x, n, c, d, m;
    unsigned long long int i,hash;

    scanf("%d", &t);
    while (t--){
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &x, &n, &c, &d, &m); 
        for (i = 0; i <= n; i++){
            hash = (a*(x + i) + b) % m;
            if (hash >= c && hash <= d){
                vezes ++;
            }
        }
        printf("%llu\n", vezes);
        vezes = 0;
    }
}