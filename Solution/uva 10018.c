/*This code is written by MT ASFI and has no bugs... trust me*/

/*Pdf এ ডিটেইলস দিয়ে বুঝানো আছে, তারপরও আমি হালকা করে explain করছি... t টা টেস্টকেস দেওয়া থাকবে। এবং প্রত্যেক টেস্টকেসে একটা নাম্বার n দেওয়া থাকবে। আমাদের কাজ হচ্ছে সংখ্যাটি palindrome কিনা তা চেক করা। যদি সংখ্যাটি palindrome না হয় তাহলে সংখ্যাটিকে উলটা করে মেইন সংখ্যার সাথে যোগ করে আবার palindrome চেক করা লাগবে। এভাবে চলতেই থাকবে।
এভাবে যোগ করতে করতে যখন palindrome হয়ে যাবে, তখন ওই সংখ্যাটা এবং কতবার যোগ করার পর palindrome হয়েছে তা আউটপুট দিতে হবে।
*/

#include <stdio.h>

int reverse(int n){
    int x=0;
    while(n){
        x=x*10+n%10;
        n=n/10;
    }
    return x;
}

int main() {
int t;
scanf("%d",&t);
while(t--){
    int n;
    scanf("%d",&n);
    
    int count=0;
    while(n!=reverse(n)){
        n+=reverse(n);
        count++;
    }
    printf("%d %d\n",count,n);
    
    }
    
    return 0;
}