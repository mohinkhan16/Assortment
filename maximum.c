#include<stdio.h>
int main(){

    int num;
    printf("enter array size");
    scanf("%d",&num);

    int array[num];

    printf("enter first number\n");
    for(int i=0;i<num;i++){
        scanf("%d",&array[i]);
    }

    int max=array[0];
    for(int i=1;i<num;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    printf("maximum number is :%d",max);

    return 0;
}