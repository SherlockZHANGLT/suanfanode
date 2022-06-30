#include <cstdio>
#include <cstring>

const int maxn=110;
char a[maxn], b[maxn], ans[maxn]={0};

void reverse(char s[]){
    int len=strlen(s);
    for(int i=0; i<len/2; i++){
        int temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
}

int main(){
    scanf("%s %s",a,b);
    reverse(a);
    reverse(b);
    int lena=strlen(a); int lenb=strlen(b);
    int len=lena>lenb? lena:lenb;
    for(int i=0; i<len; ++i){
        int numa=i<lena? a[i]-'0':0;
        int numb=i<lenb? b[i]-'0':0;
        if(i%2==0){
            int  temp=(numb+numa)%13;
            if(temp>9) ans[i]='J'+temp-10;
            else ans[i]=temp+'0';
        }
        else{
            int temp=numb-numa;
            if(temp<0) temp+=10;
            ans[i]=temp+'0';
        }
    }
    reverse(ans);
    puts(ans);
    return 0;
}