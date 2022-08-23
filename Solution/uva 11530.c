/*This code is written by MT ASFI and has no bugs... trust me*/

/*এই প্রব্লেমটা বুঝতে সহজ। if else দিয়েই করে ফেলা সম্ভব তবে এধরণের প্রব্লেমে string কে ঠিকঠাক ইনপুট নেওয়াটাই সবচেয়ে কঠিন কাজ। যেটা practically কোড লিখলে টের পাওয়া যায়।
এখানে টেস্টকেসের নিছে একটা char input নেওয়া হয়েছে যাতে t এর পরের \n টা টার্মিনাল থেকে চলে যায়। আর pdf এ যে ইনপুট দেওয়া আছে তাতে কয়েকটা space এক্সট্রা আছে। ওগুলা হিসাব করলে answer wrong আসবে।*/

#include <stdio.h>
#include <string.h>

int main() {
int t;
scanf("%d",&t);

char g;
scanf("%c",&g);


for(int i=1;i<=t;i++){
    char s[110];

    
    gets(s);
    
    int l=strlen(s);
    int ans=0;
    for(int j=0;j<l;j++){
        if(s[j]=='a'||s[j]=='d'||s[j]=='g'||s[j]=='j'||s[j]=='m'||s[j]=='p'||s[j]=='t'||s[j]=='w'||s[j]==' ')ans++;
        else if(s[j]=='b'||s[j]=='e'||s[j]=='h'||s[j]=='k'||s[j]=='n'||s[j]=='q'||s[j]=='u'||s[j]=='x')ans+=2;
        else if(s[j]=='c'||s[j]=='f'||s[j]=='i'||s[j]=='l'||s[j]=='o'||s[j]=='r'||s[j]=='v'||s[j]=='y')ans+=3;
        else ans+=4;
    }
    
    printf("Case #%d: %d\n",i,ans);
    
}
    return 0;
}