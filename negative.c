#include<stdio.h>
int main(){
    int num;
    printf("enter array number:");
    scanf("%d",&num);

    int a[num];
    printf("enter array size:\n");
    for(int i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    printf("negitive array is:");{
        for(int i=0;i<num;i++){
            if (a[i]<0)
            {
                printf("%d\n",a[i]);
            }
        }
    }
    return 0;
}
    
