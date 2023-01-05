#include<stdio.h>
#include<stdlib.h>



int main(){

    //váriaveis passíveis  de uso.
    int x = 00000000;
    int y = 00000000;
    int z = 00000000;
    int k = 00000000;
    int w = 0;
    int j = 1;
    int i = 0;
    //#########################
    while(w!=-1){
        printf("Digite um inteiro entre 0 a 5000: ");
        scanf("%d", & w);
        if(w>=0&&w<=1250){
            for(int i = 0; i < w; i++) j*= 10;
            x+= 1 * j;
            j=1;
        }if(w > 1250 && w <= 2500){
            for(int i = 0; i < ( w - 1250); i ++) j*= 10;
            y+= 1 * j;
            j= 1;
        }if(w > 2500 && w <= 3750){
            for(int i = 0;i < (w - 2500);i ++) j*= 10;
            z+= 1 * j;
            j= 1;
        }if(w > 3750 && w <= 5000){
            for(int i = 0; i < (w - 3750); i ++) j*= 10;
            k+= 1 * j;
            j= 1;
        }
    }for(int i = 0; i < 1250; i++){
        if(x % 10> 0)printf("%d\n", i);
        x = x / 10;
    }for(int i= 0;i < 1250;i ++){
        if(y % 10 > 0)printf("%d\n", i + 1250);
        y = y / 10;
    }for(int i= 0;i < 1250;i ++){
        if(z % 10 > 0)printf("%d\n", i + 2500);
        z = z / 10;
    }for(int i = 0;i < 1250;i ++){
        if(k % 10 > 0)printf("%d\n", i + 3750);
        k = k / 10;
    }
    //######################### 

    return 0;
}