#include <cstdio>

bool Judeg(char z[], int num){
    for(int i=0; i<=num/2; ++i){
        if(z[i]!=z[num-1-i]) return false;
    }
    return true;
}

int main(){
    int n,b,z[40],num=0;
    char cans[40];
    scanf("%d%d", &n, &b);
    do{
        z[num]=n%b;
        if(z[num]<10) cans[num]='0'+z[num];
        else cans[num]='A'+z[num]-10;
        num++;
        n/=b;
    }while(n!=0);
    bool flag=Judeg(cans,num);
    if(flag==true) printf("Yes\n");
    else printf("No\n");
    for(int i=num-1; i>=0; i--){
        printf("%c", cans[i]);
        if(i!=0) printf(" ");
    }
    return 0;
}