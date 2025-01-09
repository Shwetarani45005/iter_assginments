#include <stdio.h>

int recursive(int x){
    if(x<=0){
        return 0;
    }
    return recursive(x-1)+2;
}
int main(){
    int n;
    scanf("%i",&n);
    int ans=recursive(n);
    printf("%i ",ans);
    return 0;
}
