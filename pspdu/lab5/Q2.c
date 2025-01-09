#include <stdio.h>
#include <math.h>

#define MAX_SIZE 20
#define sentinel 0

int main(){
    int x[MAX_SIZE],y[MAX_SIZE],z[MAX_SIZE];
    int n;

    printf("Enter the first list (ended by %d): \n",sentinel);
    for(int i=0;i<MAX_SIZE;i++){
        scanf("%d",&x[i]);
        if(x[i]==sentinel)
        {
            n = i;
            break;
        }
    }

    printf("Enter the second list (ended by %d): \n",sentinel);
    for(int j=0;j<MAX_SIZE;j++){
        scanf("%d",&y[j]);
        if(y[j]==sentinel){
            if (j!=n){
                printf("Error:list must be of same length\n");
            }
            break;
        }
    }

    for(int i=0;i<n;i++){
        z[i]=x[i]*y[i];
    }

    printf("\n   x   |   y   |    z\n");
    printf("-----|-----|-----\n");
    for(int i=0;i<n;i++){
        printf("%4d | %4d | %4d\n", x[i], y[i], z[i]);
    }

    double sum=0;
    for(int i=0;i<n;i++){
        sum+=z[i];
    }
    printf("Square root of the sum of the items in z: %.2f\n",sqrt(sum));

    return 0;
}
