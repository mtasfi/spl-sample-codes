/*This code is written by MT ASFI and has no bugs... trust me*/

/*আমাদেরকে ২টা সংখ্যা দেওয়া হবে। ২য় সংখ্যাটি দিয়ে ১ম সংখ্যাকে ভাগ করা যাবে কিনা তা আউটপুট হিসাবে দিতে হবে। তবে প্রবলেম হচ্ছে ১ম সংখ্যাটা অনেক বড় 10e200, যেটা long long এও store করা সম্ভব না। তাই আমাদেরকে সংখ্যাটি string এ store করা লাগবে।
এই প্রবলেমটি সলভ করার জন্য আমাদেরকে ছোটবেলার হাতে-হাতে ভাগ করার টেকনিকটা ব্যবহার করতে হবে। যেখানে একটা বড় সংখ্যাকে ধাপে ধাপে ভাগ করে ভাগফল বের করা হয়।
*/

#include <stdio.h>
#include <string.h>

int main() {

int t;
scanf("%d",&t);

for(int k=1;k<=t;k++){

char s[300];
int n;
scanf("%s%d",s,&n);

int l=strlen(s);

long long int vagfol=0,rem=0,current=0;

//vagfol না বের করে শুধু rem এর মান দিয়েই ans বলা সম্ভব।

for(int i=0;i<l;i++){
    if(s[i]=='-')continue;
    long long int current=rem*10+(s[i]-'0');
    vagfol=vagfol*10+(current/n);
    rem=current%n;
}


if(rem==0)printf("Case %d: divisible\n",k);
else printf("Case %d: not divisible\n",k);
}
    return 0;
}