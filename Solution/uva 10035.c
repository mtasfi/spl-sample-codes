/*This code is written by MT ASFI and has no bugs... trust me*/

/*এখানে ২টা সংখ্যা যোগ করার সময় মোট carry operation কাউন্ট করা লাগবে। যেমন ৯৯+১ এই অংকে ২বার carry করা লাগে। লাস্ট ডিজিট ৯ আর ১ যোগ করলে হাতে থাকে ১। আর হাতের এক পাশের সংখ্যার সাথে মিলে আবার ১০ হয়ে যায়, আর হাতে থাকে ১।

ইনপুটে প্রতি লাইনে ২টা সংখ্যা থাকবে। আমাদেরকে টোটাল Carry operation হিসাব করে আউটপুট দেওয়া লাগবে। যদি ইনপুটে দুইটা সংখ্যাই 0 0 হয় তাহলে ইনপুট নেওয়া বন্ধ করতে হবে। */


#include <stdio.h>

void carryf(int a,int b);

int main() {

while(1){
    int a,b;
    scanf("%d%d",&a,&b);
    
    if(a==0 && b==0)break; 
    
    carryf(a,b);
}
    return 0;
}


/* এখানে, carry = হাতে কত আছে।
ans = total carry operation */

void carryf(int a,int b){

int carry=0, ans=0;

    while(a%10!=0 || b%10!=0){
    
        int x= a%10 + b%10 + carry;
        if(x>9){
            carry=1;
            ans++;
        }
        else{
            carry=0;
        }
        a=a/10;
        b=b/10;
    }
    
    if(ans==0)printf("No carry operation.\n");
    else if(ans==1) printf("%d carry operation.\n",ans); //singular এর জন্যও কন্ডিশন দেওয়া লাগছে, প্যারা।
    else printf("%d carry operations.\n",ans);
}