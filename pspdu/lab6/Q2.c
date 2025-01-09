#include <stdio.h>


struct element_t{
    int atomic_no;
    char ele_name[50];
    char sym[10];
    char class[50];
    double field;
    int no_of_electrons[7];
};

void scan_element(struct element_t *ele){

    printf("Enter the atomic number \n");
    scanf("%i",&ele->atomic_no);

    printf("Enter Element Name:\n");
    scanf("%s",ele->ele_name);

    printf("Enter  symbol\n");
    scanf("%s",ele->sym);

    printf("Enter class\n");
    scanf("%s",ele->class);

    printf("Enter the field\n");
    scanf("%lf",&ele->field);

    printf("Enter the number of electrons in each shell ");
    for(int i=0;i<7;i++){
        scanf("%i",&ele->no_of_electrons[i]);
    }
}

void print_element(struct element_t *ele){

    printf("Atomic number %i\n",ele->atomic_no);
    printf("Element Name:%s \n",ele->ele_name);
    printf("Symbol: %s \n",ele->sym);
    printf("Class %s \n",ele->class);
    printf("Field %lf \n",ele->field);
    printf("number of electrons in each shell \n");
    for(int i=0;i<7;i++){
        printf("%i ",ele->no_of_electrons[i]);
}
}

int main(){
    struct element_t e;
    printf("Enter the details of the element: \n");
    scan_element(&e);

    printf("The details of element \n");
    print_element(&e);

    return 0;
}




