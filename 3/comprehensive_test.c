#include <stdio.h>

int main(void)
{
    int a=26;
    for(int i=1; i<26; i++){
        if(i%3==0){
        printf("%d\n",i);
        }
    }
    while(a<51){
        if(a%3==0){
            printf("%d\n",a);
        }
        a++;
    }
 return 0;
}