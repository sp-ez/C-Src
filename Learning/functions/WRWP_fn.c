//With return type With parameters - WRWP//

#include <stdio.h>
#include <conio.h>
void clrscr(void);

int addition(int num1 , int num2)
{
    int answer = num1 + num2;
    return answer;                           //to be called in main function
}

int substraction(int num1 , int num2)
{
    int answer = num1 - num2;
    return answer;                            //to be called in main function
}

void main()
{
    void clrscr();
    int answer , num1 , num2 ;
    printf("\nStart of the program\n");

    printf("\nPlease enter two numbers: ");
    scanf("%d%d", &num1 , &num2);

    answer = addition(num1 , num2);                  //calling with parameters(conditions)
    printf("Addition result is %d\n", answer);

    printf("\nPlease enter two numbers: ");
    scanf("%d%d", &num1 , &num2);

    answer = substraction(num1 , num2);              //calling with parameters(conditions)
    printf("Substraction result is %d\n", answer);

    printf("\nEnd of program\n\n");
}