#include<stdio.h>
int main(){

    float peso, alt, taxa;
    int idade,codigo;


    scanf("%d", &codigo);
    scanf("%d %f %f", &idade, &peso, &alt);
    scanf("%f", &taxa);

    printf("Codigo: %d \n");
    printf("idade:%d \nPeso:%f \nAltura:%f\n", idade, peso, alt);
    printf("taxa: %f, taxa");
    return 0;
    }
