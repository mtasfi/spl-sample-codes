/*This code is written by MT ASFI and has no bugs... trust me*/

/*একটা সংখ্যা n দেওয়া হবে। ওই সংখ্যার বাইনারীতে কয়টা 1 আছে তা কাউন্ট করতে হবে। কাউন্ট যদি odd হয় তাহলে output odd, নাহয় even
এধরণের বাইনারী রিলেটেড প্রবলেমগুলো bitwise operators দিয়ে করাই optimal। নরমাল নিয়েমে ২ দিয়ে ভাগ করে বাইনারী তে নিয়ে তারপর সেখানে কয়টা ১ আছে, ওভাবে করলেও হবে। তবে সেটা অনেক lengthy process
এই কোডে bitwise and (&) আর left shift (<<) অপারেটর ব্যবহার করা হয়েছে।*/

#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
    for(int k=1;k<=t;k++){
        int n;
        scanf("%d",&n);
        
        int one=0;
        
        for(int i=0;i<=31;i++){
            if((n&(1<<i))!=0)one++;
            //printf("%d\n",n&(1<<i));
        }
        
        if(one&1)
        printf("Case %d: odd\n",k);
        else
        printf("Case %d: even\n",k);
    }
    return 0;
}