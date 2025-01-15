#include <stdio.h>
#include <string.h>
#include <ctype.h>

void deblank(char input[],char output[]){
    
    int j=0;
    for(int i=0;i<strlen(input);i++){
        if(!isspace(input[i])){
            output[j]=input[i];
            j++;
        }
    }
    output[j] = '\0';
}

int main(){

    char input[100],output[100];
    printf("Enter the string");
    scanf("%s",input);
    deblank(input,output);
    printf("Original %s \n",input);
    printf("Without Space %s \n",output);

    return 0;
}
