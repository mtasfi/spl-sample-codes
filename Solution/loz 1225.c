/*This code is written by MT ASFI and has no bugs... trust me*/

/*reverse function টা এর আগে uva 10018 তেও ব্যবহার করা হয়েছে। এই ফাংশনটা যেকোনো সংখ্যাকে reverse করতে পারে। যেমনঃ ১২৩->৩২১*/

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
    for(int k=1;k<=t;k++){
        int n;
        scanf("%d",&n);
        
        if(n==reverse(n))
        printf("Case %d: Yes\n",k);
        else
        printf("Case %d: No\n",k);
    }
    return 0;
}