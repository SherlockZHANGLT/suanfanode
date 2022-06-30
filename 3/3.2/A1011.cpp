#include <cstdio>

char S[3]={'W', 'T', 'L'};

int main(){
    double ans=1.0, temp, a;
    int idx;
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            scanf("%lf", &a);
            if(a>temp){
                temp=a;
                idx=j;
            }
        }
        ans*=temp;
        printf("%c ", S[idx]);
    }
    printf("%.2f",(ans*0.65-1)*2);
    return 0;
}