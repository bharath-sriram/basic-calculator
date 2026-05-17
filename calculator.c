#include <stdio.h>
#include <math.h>

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int multiply(int a, int b){
    return a*b;
}

float divide(int a, int b){
    if (b!=0){
        return a/(float)b;
    } else{
        printf("Division by Zero, ERROR!\n");
        return 0;
    }

}

float rise_to_power(float a, float b){
    return pow(a,b);
}

float square_root(float a){
    return sqrt(a);
}

int main(){
    int num1, num2, choice;
    
    char repeat = 'y';

    while (repeat == 'y'||repeat == 'Y'){
        printf("Enter 2 numbers: ");
        scanf("%d %d", &num1, &num2);
        printf("Choose the operations:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Division\n5. Rise to power\n6. Square root\n");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5){
            switch (choice){
                case 1:
                    printf("Result = %d\n", add(num1, num2));
                    break;
                case 2:
                    printf("Result = %d\n", subtract(num1, num2));
                    break;
                case 3:
                    printf("Result = %d\n", multiply(num1, num2));
                    break;
                case 4:
                    printf("Result = %.2f\n", divide(num1, num2));
                    break;
                case 5:
                    printf("Result = %.2f\n", rise_to_power(num1, num2));
                    break;
                default:
                    printf("Invalid choice!\n");
            }        
        } else if (choice == 6){
            printf("Result = %.2f\n", sqrt(num1));
        }

        printf("Do you want to continue?");
        scanf(" %c", &repeat);

    }
    printf("Goodbye!\n");
    return 0;
}