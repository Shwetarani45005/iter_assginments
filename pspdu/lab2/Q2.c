#include <stdio.h>

void display(){
    printf("Enter the type of bread as 'W' for white and 'S' for sweet");
    printf("is the loaf size is double(l) or not(0)");
    printf("Enter if the baking is manual?(y/n)");
}
int main(void)
{
    char bread,manual;
    int size;

    display();

    scanf("%c %d %c",&bread,&size,&manual);
    double baking;
    double bakingtime;

    if(bread=='w')
    {
        if(size==1){
            baking = 45+45*0.5;
        }
        else{
            baking = 45;
        }
        if(manual=='y'){
            bakingtime = 15+60+18+20+0.0334+75+baking+30;
        }
        else{
            bakingtime=15+60+18+20+0.0334;
        }
    }

    else
    {
        if(size==1){
            baking=35+35*0.5;
        }
        else{
            baking=35;
        }
        if(manual=='y'){
            bakingtime = 20+60+33+30+0.0334+75+baking+30;
        }
        else{
            bakingtime = 20+60+33+30+0.0334;
        }
    }

    printf("The display time is %f \n",bakingtime);
}
