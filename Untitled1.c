#include<stdio.h>
int main(){
    int x,h,i,w,f;
    scanf("%d %d",&x,&h);
    w = 0;
    for(i = 1;i<=x;i++){
        scanf("%d",&f);
        if(f > h)
            w +=2;
        else
            w++;
    };
    printf("%d\n",w);
    return 0;
};
