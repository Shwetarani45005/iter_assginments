#include <stdio.h>

int main(void){
    printf("(1) Carbon monoxide \n");
    printf("(2) Hydrocarbons \n");
    printf("(3) Nitrogen oxides \n");
    printf("(4) Nonmethane hydrocarbons \n");

    int pno;
    printf("Enter pollutant number: ");
    scanf("%d ",&pno);

    double em;
    printf("\nEnter number of grams emitted per mile: ");
    scanf("%lf ",&em);

    int dist;
    printf("\nEnter odometer reading: "); 
    scanf("%d ",&dist);

    switch(pno){
        case 1:
            if(dist<=50000 && em>3.4){
                printf(" Emissions exceed permitted level of 3.4 grams/mile.");
            }
            else if(dist>50000 && em>4.2){
                printf(" Emissions exceed permitted level of 4.2 grams/mile.");
            }
            else{
                printf("Emissions within the limit ");
            }
            break;
        case 2:
            if(dist<=50000 && em>0.31){
                printf(" Emissions exceed permitted level of 0.31 grams/mile.");
            }
            else if(dist>50000 && em>0.39){
                printf(" Emissions exceed permitted level of 0.39 grams/mile.");
            }
            else{
                printf("Emissions within the limit ");
            }
            break;
        case 3:
            if(dist<=50000 && em>0.4){
                printf(" Emissions exceed permitted level of 0.4 grams/mile.");
            }
            else if(dist>50000 && em>0.5){
                printf(" Emissions exceed permitted level of 0.5 grams/mile.");
            }
            else{
                printf("Emissions within the limit ");
            }
            break;
        case 4:
            if(dist<=50000 && em>0.25){
                printf(" Emissions exceed permitted level of 0.25 grams/mile.");
            }
            else if(dist>50000 && em>0.31){
                printf(" Emissions exceed permitted level of 0.31 grams/mile.");
            }
            else{
                printf("Emissions within the limit ");
            }
            break;

    }

}
