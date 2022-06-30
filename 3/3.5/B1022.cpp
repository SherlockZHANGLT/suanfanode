#include <cstdio>

int main(){
    int a,b,d;
    scanf("%d%d%d", &a, &b, &d);
    int sum=a+b;
    int ans[31], num=0;
    char cans[31];
    do{
        ans[num]=sum%d;
        if(ans[num]<10) cans[num]='0'+ans[num];
        else cans[num]='A'+ans[num]-10;
        num++;
        sum/=d;
    }while(sum!=0);
    for(int i=num-1; i>=0; i--) printf("%c", cans[i]);
    return 0;
}