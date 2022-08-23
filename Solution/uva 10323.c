/*This code is written by MT ASFI and has no bugs... trust me*/

/*Question এ যে লিমিট দিছে সেটা অনুযায়ী ইনপুট ৮ এর চেয়ে ছোট হলে ans Underflow আর ১৩ এর চেয়ে বেশি হলে ans Overflow হবে।*/

#include <stdio.h>

long long int fact(int n){
    if(n==0)return 1;
    else return n*fact(n-1);
}
int main() {
long long int n;

while((scanf("%lld",&n)>0)?1:0){

    if(n>13)printf("Overflow!\n");
    else if(n<8)printf("Underflow!\n");
    else{
    long long int ans=fact(n);
    printf("%lld\n",ans);}
}
    return 0;
}