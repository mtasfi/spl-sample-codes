/*This code is written by MT ASFI and has no bugs... trust me*/

/*Love is complicated but love calculator is even more complicated.
এই প্রব্লেমে আমাদেরকে কয়েক জোড়া নাম দেওয়া হবে। নামের মধ্যে %#&+;৳ অনেক char থাকতে পারে, তবে আমাদেরকে শুধু Alphabet গুলা কাউন্ট করতে হবে। 
কাউন্ট করার নিয়ম হচ্ছে a/A=1,b/B=2,c/C=3...
কাউন্ট করার পর যে sum আসবে ওইটা যদি ৯ এর চেয়ে বড় হয় তবে ডিজিটগুলা কে নিজেদের মধ্যে যোগ করে দেখতে হবে তা ৯ এর ছোট হয় কিনা। এভাবে চলতে থাকবে। যেমনঃ ৭৮৯=২৪=৬

এভাবে ২টা নামের জন্য ২টা সংখ্যা আসবে। ছোট সংখ্যাকে বড় টা দ্বারা ভাগ করে % এ রুপান্তর করলেই answer চলে আসবে।

So enjoy the calculator...*/

#include <stdio.h>
#include <string.h>

int cnvt_to_one(int n){
    
    int sum=0;
    if(n<10)return n;
    else{
        while(n){
            sum+=n%10;
            n/=10;
        }
    }
   if(sum>10)sum=cnvt_to_one(sum);
    
     return sum;
}

int main() {

char s1[100],s2[100];

while((scanf("%s %s",s1,s2)<=0)?0:1){
    int l1=strlen(s1),sum1=0;
    int l2=strlen(s2),sum2=0;
    
    for(int i=0;i<l1;i++){
        if(s1[i]>='a' && s1[i]<='z'){
            sum1+=s1[i]-96;
        }
        else if(s1[i]>='A' && s1[i]<='Z'){
            sum1+=s1[i]-64;
        }
    }
    for(int i=0;i<l2;i++){
        if(s2[i]>='a' && s2[i]<='z'){
            sum2+=s2[i]-96;
        }
        else if(s2[i]>='A' && s2[i]<='Z'){
            sum2+=s2[i]-64;
        }
    }
    
    sum1= cnvt_to_one(sum1);
    sum2= cnvt_to_one(sum2);
    
    float ans=(sum1>sum2)?(float)sum2/sum1:(float)sum1/sum2;
    
    printf("%.2f %\n",ans*100);
}
    return 0;
}