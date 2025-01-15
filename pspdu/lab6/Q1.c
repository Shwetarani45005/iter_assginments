#include <stdio.h>
#include <string.h>

struct date_t{
    int day;
    int month;
    int year;
};

struct tank_t{
    double tank_capacity;
    double current_fuel_level;
};

struct auto_t{
    char make[50];
    char model[50];
    int odometer;
    struct date_t manufacture;
    struct date_t purchase;
    struct tank_t gas_tank;
};


void scan_date(struct date_t *d){
    printf("Enter date\n");
    scanf("%i %i %i",&d->day,&d->month,&d->year);
}

void scan_tank(struct tank_t *t){
    printf("Enter tank capacity and current fuel level\n");
    scanf("%lf %lf",&t->tank_capacity,&t->current_fuel_level);
}

void scan_auto(struct auto_t *a){
    printf("Enter make\n");
    scanf("%s",a->make);
    printf("Enter model\n");
    scanf("%s",a->model);
    printf("Enter the odometer reading: \n");
    scanf("%i",&a->odometer);
    printf("Enter the manufacture date\n");
    scan_date(&a->manufacture);
    printf("Enter the purchase date\n");
    scan_date(&a->purchase);
    printf("Enter gas tank details: \n");
    scan_tank(&a->gas_tank);
}

void print_date(struct date_t *d){
    printf("%i %i %i\n",d->day,d->month,d->year);
}

void print_tank(struct tank_t *t){
    printf("tank_capacity:%lf current_fuel_level:%lf\n",t->tank_capacity,t->current_fuel_level);
}

void print_auto(struct auto_t *a){
    printf("Make %s model %s\n",a->make,a->model);
    printf("Odometer reading %i\n",a->odometer);
    printf("Manufacture Date: \n");
    print_date(&a->manufacture);
    printf("Purchase Date: \n");
    print_date(&a->purchase);
    printf("Gas tank details:\n");
    print_tank(&a->gas_tank);
}

int main(){
    struct auto_t car;

    printf("Enter the details of the car\n");
    scan_auto(&car);

    printf("The Car Details: \n");
    print_auto(&car);

    return 0;
}
