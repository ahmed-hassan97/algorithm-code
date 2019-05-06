#include <stdio.h>
#include <stdlib.h>
#define maxel 10
//int count[max];
//int count1[max];

int i,j;
int main()
{
int array[maxel];
srand(time(NULL));
for(i=0;i<maxel;i++){
  array[i]=rand()%100;

}


printf("\n array you enter :\n");
for(i=1;i<maxel;i++){
printf("%d   ",array[i]);


}
counting_sort(array,maxel);


    return 0;


}
 void counting_sort(int arr[],int l){
     int max=arr[0];
     for(i=0;i<l;i++){
        if(arr[i]>max){
            max=arr[i];
        }
     }
     printf("\n %d",max);
int b[l],c[max];
for(i=0;i<max;i++){
    c[i]=0;
}
for(j=0;j<l;j++){
c[arr[j]]=c[arr[j]]+1;
}
for(i=1;i<=max;i++){
 c[i]=c[i]+c[i-1];
}
for(j=l;j>=1;j--){
   b[c[arr[j]]]=arr[j];
c[arr[j]]=c[arr[j]]-1;
}
for(j=l;j<=l;j++){
        printf("%d ",b[i]);
}
 }

