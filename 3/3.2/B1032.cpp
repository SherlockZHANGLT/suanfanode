#include <cstdio>

const int maxn=100010;
int school[maxn]={0};

int main(){
    int n, schID, score;
    scanf("%d", &n);
    int k=1, MAX=-1;
    for(int i=0; i<n; ++i){
        scanf("%d%d", &schID, &score);
        school[schID]+=score;
        if(school[schID]>MAX){
            MAX=school[schID];
            k=schID;
        }
    }
    printf("%d %d\n", k, MAX);
    return 0;
}