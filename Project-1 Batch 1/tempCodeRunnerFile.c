#include <stdio.h>

void add();
void subtract();
void multiply();
void division();
int main()
{

    char operator;

    do
    {

        printf("Enter an operator (+, -, *, /), if want to exit press x: ");
        scanf(" %c", &operator); 

        switch (operator)
        {
        case '+':

            add();
            printf("\n");
            break;
        case '-':
            subtract();
            printf("\n");
            break;
        case '*':
            multiply();
            printf("\n");

            break;

        case '/':
            division();
            printf("\n");
            break;

        default:
            break;
        }
    } while (operator!='x' || operator!='X');

    return 0;
}
void add()
{
    int a, b,output=0;
    printf("Please Enter Two Number: ");
    scanf("%d %d",&a,&b);
    output=a+b;
    printf(" %d + %d = %d",a,b,output);
}
void subtract()
{
    int a, b;
    printf("Please Enter Two Number: ");
    scanf("%d %d", &a, &b);

    printf("\n %d - %d = %d",a,b, a - b);
}
void multiply()
{
    int a, b;
    printf("Please Enter Two Number: ");
    scanf("%d %d", &a, &b);

    printf("\n %d * %d = %d",a,b, a * b);
}
void division()
{
    int a, b;
    printf("Please Enter Two Number: ");
    scanf("%d %d", &a, &b);

    printf("\n %d / %d = %d",a,b, a / b);
}