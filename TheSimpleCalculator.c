#include <stdio.h>
#include <math.h>
#include <ctype.h>

void greeting();
int choice();
double addition();
double subtraction();
double multiplication();
double division();
long long int modulo();
double squareroot();
double cuberoot();
double trigonometry();

int counter = 0;
int main(){
    greeting();
    double result;
    long long int resultmod;
    int choices = choice();
    switch(choices){
        case 1:
            printf("You selected [Addition]!\n");
            result = addition();
            printf("Your final added number is %.5lf\n", result);
            break;
        case 2:
            printf("You selected [Subtraction]!\n");
            result = subtraction();
            printf("Your final subtracted number is %.5lf\n", result);
            break;
        case 3:
            printf("You selected [Multiplication]!\n");
            result = multiplication();
            printf("Your final multiplied number is %.5lf\n", result);
            break;
        case 4:
            printf("You selected [Division]!\n");
            result = division();
            printf("Your final divided number is %.5lf\n", result);
            break;
        case 5:
            printf("You selected [Modulo]!\n");
            resultmod = modulo();
            printf("Your final remainder is %lld\n", resultmod);
            break;
        case 6:
            printf("You selected [Square Root]!\n");
            result = squareroot();
            printf("Your final square rooted number is %.5lf\n", result);
            break;
        case 7:
            printf("You selected [Cube Root]!\n");
            result = cuberoot();
            printf("Your final cube rooted number is %.5lf\n", result);
            break;
        case 8:
            printf("You selected [Trigonometry]!\n");
            trigonometry();
    }
    getchar();
    if(counter >= 4) printf("\nThanks for using The Simple Calculator 1.0 -_-\n\n"); 
    else             printf("\nThanks for using The Simple Calculator 1.0 ^_^\n\n");
    char yn;
    printf("Would you like to calculate again? (Y to accept)? ");
    scanf("%c", &yn);
    yn = toupper(yn);
    if(yn == 'Y'){
        printf("\e[1;1H\e[2J"); //clear screen
        main();
    } 
    else{
        printf("\n<The Simple Calculator 1.0>\n");
        return 0;
    }
}


void greeting(){
    printf("Hi! ^_^\n");
    printf("Welcome to The Simple Calculator 1.0!\n");
    printf("1. Addition         5. Modulo\n");
    printf("2. Subtraction      6. Square Root\n");
    printf("3. Multiplication   7. Cube Root\n");
    printf("4. Division         8. Trigonometry\n");
    printf("How can I help you?\n");
    printf("I would like to do number ");
}

int choice(){
    int choices;
    do{
        scanf("%d", &choices);
        if((choices < 1 || choices > 8) && counter < 4){
            printf("\nPlease enter the correct number ^_^\n");
            printf("I would like to do number ");
            counter++;
        }
        else if((choices < 1 || choices > 8) && counter >= 4){
            printf("\nEnter correct number -_-\n");
            printf("Just enter it.\n");
            printf("Number ");
        }
    }while(choices < 1 || choices > 8);
    return choices;
}

double addition(){
    getchar();
    double result;
    double num;
    printf("Enter first number (0 to exit): ");
    scanf("%lf", &result);
    if(result == 0) return result;

    printf("enter a number (0 to exit): ");
    do{
        scanf("%lf", &num);
        result = result + num;
        if(num != 0) printf("%.5lf + ", result);
    }while(num != 0);
    return result;
}

double subtraction(){
    getchar();
    double result;
    double num;
    printf("Enter first number (0 to exit): ");
    scanf("%lf", &result);
    if(result == 0) return result;

    printf("enter a number (0 to exit): ");
    do{
        scanf("%lf", &num);
        result = result - num;
        if(num != 0) printf("%.5lf - ", result);
    }while(num != 0);
    return result;
}

double multiplication(){
    getchar();
    double result;
    double num;
    printf("Enter first number (0 to exit): ");
    scanf("%lf", &result);
    if(result == 0) return result;

    printf("enter a number (0 to exit): ");
    do{
        scanf("%lf", &num);
        result = result * num;
        if(num != 0) printf("%.5lf * ", result);
    }while(num != 0);
    return result;
}

double division(){
    getchar();
    double result;
    double num;
    printf("Enter first number (0 to exit): ");
    scanf("%lf", &result);
    if(result == 0) return result;

    printf("enter a number (0 to exit): ");
    do{
        scanf("%lf", &num);
        result = result / num;
        if(num != 0) printf("%.5lf / ", result);
    }while(num != 0);
    return result;
}

long long int modulo(){
    getchar();
    long long int resultmod;
    long long int num;
    printf("Enter first number (0 to exit): ");
    scanf("%lld", &resultmod);
    if(resultmod == 0) return resultmod;

    printf("enter a number (0 to exit): ");
    do{
        scanf("%lld", &num);
        if(num == 0) return num;
        resultmod = resultmod % num;
        if(resultmod != 0) printf("%lld %% ", resultmod);
    }while(resultmod != 0);
    return resultmod;
}

double squareroot(){
    getchar();
    double result;
    double num1;
    double num2;
    printf("Enter first number (0 to exit): ");
    scanf("%lf", &num1);
    if(num1 == 0) return num1;

    printf("enter a number (0 to exit): ");
    do{
        scanf("%lf", &num2);
        num1 = num1 + num2;
        if(num2 != 0) printf("%.5lf + ", num1);
    }while(num2 != 0);
    result = sqrt(num1);
    return result;
}

double cuberoot(){
    getchar();
    double result;
    double num1;
    double num2;
    printf("Enter first number (0 to exit): ");
    scanf("%lf", &num1);
    if(num1 == 0) return num1;

    printf("enter a number (0 to exit): ");
    do{
        scanf("%lf", &num2);
        num1 = num1 + num2;
        if(num2 != 0) printf("%.5lf + ", num1);
    }while(num2 != 0);
    result = cbrt(num1);
    return result;
}

void sine(){
    getchar();
    double rad;
    double result;
    printf("Enter radians: ");
    scanf("%lf", &rad);
    result = sin(rad);
    printf("Sine of %lf is %.5lf\n", rad, result);
}

void cosine(){
    getchar();
    double rad;
    double result;
    printf("Enter radians: ");
    scanf("%lf", &rad);
    result = cos(rad);
    printf("Cosine of %lf is %.5lf\n", rad, result);
}

void tangent(){
    getchar();
    double rad;
    double result;
    printf("Enter radians: ");
    scanf("%lf", &rad);
    result = tan(rad);
    printf("Tangent of %lf is %.5lf\n", rad, result);
}

double trigonometry(){
    int trgchoice;
    double result;
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. Tangent\n");
    printf("How can I help you?\n");
    printf("I would like number ");
    do{
        scanf("%d", &trgchoice);
        if((trgchoice < 1 || trgchoice > 3) && counter >= 4){
            printf("\nWhy did you do it again? -_-\n");
            printf("Just enter the correct number.\n");
            printf("Number ");
        }
    }while(trgchoice < 1 || trgchoice > 3);
    switch(trgchoice){
        case 1:
            if(counter >=4) printf("-_- [Sine].\n");
            else            printf("\nYou selected [Sine]!\n");
            sine();
            break;
        case 2:
            if(counter >=4) printf("-_- [Cosine].\n");
            else            printf("\nYou selected [Cosine]!\n");
            cosine();
            break;
        case 3:
            if(counter >=4) printf("-_- [Tangent].\n");
            else            printf("\nYou selected [Tangent]!\n");
            tangent();
            break;
    }
}
