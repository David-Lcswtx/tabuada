#include<stdio.h>

int main(){
    
    float n;
    int i;
    
    printf("Digite um numero: ");
    scanf("%f", &n);
    
    printf("Tabuada de multiplicacao do numero %.f:\n\n", n);
    
    for(i = 1; i <= 10; i++){
        
        printf("%.f x %d = %.f\n", n, i, n * i);
        
    }
    
    printf("\nTabuada de divisao do numero %.f:\n\n", n);
    
    for(i = 1; i <= 10; i++){
        
        printf("%.f / %d = %.2f\n", n, i, n / i);
        
    }
    
    printf("\nTabuada de adição do numero %.f:\n\n", n);
    
    for(i = 1; i <= 10; i++){
        
        printf("%.f + %d = %.f\n", n, i, n + i);
        
    }
    
    printf("\nTabuada de subtração do numero %.f:\n\n", n);
    
    for(i = 1; i <= 10; i++){
        
        printf("%.f - %d = %.f\n", n, i, n - i);
        
    }
    return 0;
}
