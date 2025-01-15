#include <stdio.h>

int main(){

    int UPC[12];
    printf("Enter barcode number \n");
    for(int i=0;i<12;i++){
        scanf("%i",&UPC[i]);
    }

int sum_odd=0;
for(int i=0;i<11;i=i+2){
    sum_odd+=UPC[i];
}
int mul_sum_odd = sum_odd*3;

int sum_even=0;
for(int i=1;i<11;i=i+2){
    sum_even+=UPC[i];
}
int mul_sum_odd_even = mul_sum_odd + sum_even;

int check_digit;
if(mul_sum_odd_even%10==0){
    check_digit=0;
}
else{
    check_digit=10-(mul_sum_odd_even%10);
}


if (check_digit==UPC[11]){
    printf("UPC is correct");
}
else{
    printf("UPC is not valid");
}


    return 0;
}
