#include<stdio.h>
int main(void){
    long long int N,K;
    scanf("%lld %lld",&N,&K);
    N=N%K;
    if((-1)*(N-K)<N)
    {
        N=(-1)*(N-K);
    }
    printf("%lld",N);
}