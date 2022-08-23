/*This code is written by MT ASFI and has no bugs... trust me*/

/*এটা medium level এর প্রব্লেম। প্রব্লেম টা হচ্ছে, কিছু string ইনপুট দেওয়া হবে। ওই string এ কোন char কতবার আছে তা ascii value সহ প্রিন্ট করে দেখাতে হবে।
 স্টেপঃ ১) array input নিবো।
 ২) একটা 128 size এর frequency array তৈরি করবো। 
 ৩) string এর প্রত্যেকটা char এর ascii মানের সমান index ওই char এর frequency store করবো।
 ৪) লুপ চালিয়ে ছোট থেকে বড় সিরিয়ালে সবগুলাকে প্রিন্ট করে দিবো।
*/

#include <stdio.h>
#include <string.h>

int main() {

char s[1010];

while((scanf("%s",s)<=0)?0:1){
    
    int freq[128];
    
    for(int i=0;i<128;i++)freq[i]=0;
    
    
    int l=strlen(s);
    
    for(int i=0;i<l;i++){
        int x=s[i];
        freq[x]++;
        }
    
    
    for(int i=1;i<=l;i++){
        for(int j=127;j>=0;j--){
            if(freq[j]==i)
            printf("%d %d\n",j,freq[j]);
        }
    }
    
    printf("\n\n");
}
    return 0;
}