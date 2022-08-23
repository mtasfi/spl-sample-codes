/*This code is written by MT ASFI and has no bugs... trust me*/

/* t টা টেস্টকেস দেওয়া থাকবে। প্রতেক টেস্টকেসে ৩টা নাম্বার a,b,money দেওয়া থাকবে। a, average এর চেয়ে কতঘন্টা বেশি কাজ করেছে তা হিসাব করে, মোট টাকা থেকে কত টাকা পাবে তা আউটপুট হিসাবে দেওয়া লাগবে।
*/

#include <stdio.h>

int main() {
int t;
scanf("%d",&t);
while(t--){
    int a,b,money;
    scanf("%d%d%d",&a,&b,&money);
    
    float avrg=(a+b)/3.0;
    
    float ans=(a-avrg)*money/avrg;
    printf("%.2f\n",ans);
}
    return 0;
}