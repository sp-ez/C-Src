#include <stdio.h>
#include <stdlib.h>

// && = and
// || = or
// != = not equals
// == = equals
// operators

void main()
{
    int age;

    printf("Enter your age: ");
    scanf ("%d", &age);

    if(age >= 18 && age < 100){
        printf("\nYou are eligible for votings as you are above 18", age);
    } 
    else if (age >= 100){
        printf("\nYou are eligible for voting, Plese be carefull", age);
    }
    else if (age < 18 && age > 0){
        int temp = 18 - age;   // to find out difference
        printf("\nYou are not eligible for voting , You have to wait for %d years to vote", temp);
    }
    else {
        printf("Wrong Input");
    }

}