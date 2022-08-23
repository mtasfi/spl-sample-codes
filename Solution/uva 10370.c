/*This code is written by MT ASFI and has no bugs... trust me*/

/*t টা টেস্টকেস দেওয়া থাকবে। প্রত্যেক টেস্টকেসে একটা n সাইজ array দেওয়া থাকবে। আমাদেরকে ওই array এর সংখ্যাগুলোর average বের করতে হবে। array এর যতগুলো সংখ্যা average এর চাইতে বড় হবে তার percentage হিসাব করে আউটপুট দিতে হবে।*/

#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
while(t--){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    
    float avrg=(float)sum/n;
    
    int count=0;
    
    for(int i=0;i<n;i++){
        if(a[i]>avrg)
        count++;
    }
    float ans=(float)count*100/n;
    printf("%.3f% \n",ans);
}
    return 0;
}