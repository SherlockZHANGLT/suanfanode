#include <cstdio>
#include <cstring>

struct node{
    char name[20], password[20];
    bool ischange;
}T[1005];

char in[5]={'1','0','l','O'};
char out[5]={'@','%','L','o'};

void crypt(node& t, int& cnt){
    int len=strlen(t.password);
    for(int i=0; i<len; ++i){
        for(int j=0; j<4; ++j){
            if(t.password[i]==in[j]){
                t.password[i]=out[j];
                t.ischange=true;
            }
        }
    }
    if(t.ischange) cnt++;
}

int main(){
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0; i<n; ++i){
        scanf("%s %s",T[i].name, T[i].password);
        T[i].ischange=false;
    }
    for(int i=0; i<n; ++i) crypt(T[i],cnt);
    if(cnt==0){
        if(n==1) printf("There is %d account and no account is modified",n);
        else printf("There are %d account and no account is modified",n);
    }
    else{
        printf("%d\n",cnt);
        for(int i=0; i<n; ++i){
            if(T[i].ischange) printf("%s %s\n",T[i].name, T[i].password);
        }
    }
    return 0;
}