#include<stdio.h>
void nabila(){
int n;
scanf("%d",&n);
int mri[n];
for(int i=0;i<n;i++){
    scanf("%d",&mri[i]);
}
int max=mri[0];
int min = mri[0];
for(int i=1;i<n;i++){
    if(mri[i]>max){
        max=mri[i];
    }
    if(mri[i]<min){
        min =mri[i];
    }
}
printf("%d ",min);
printf("%d",max);
}
 
int main(){
nabila();
 
}
