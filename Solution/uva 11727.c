/*This code is written by MT ASFI and has no bugs... trust me*/

/*বাচ্চাদের প্রবলেম। ৩টা সংখ্যার মধ্যে মাঝের সংখ্যাটা প্রিন্ট করতে হবে।*/

#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
    for(int k=1;k<=t;k++){
        int a[3];
        int max=0,min=100000,sum=0;
        for(int i=0;i<3;i++){
            scanf("%d",&a[i]);
            sum+=a[i];
            if(a[i]>max)max=a[i];
            if(a[i]<min)min=a[i];
        }
        
        int ans=sum-min-max;
        printf("Case %d: %d\n",k,ans);
    }
    return 0;
}