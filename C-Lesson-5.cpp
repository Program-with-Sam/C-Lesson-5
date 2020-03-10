#include <stdio.h>

int main()
{
    // Declare some bools
    bool varA = true, varB = false;

    // If-Else
    if (varA) {
        printf("VarA is true\n");
    }
    else {
        printf("VarA is false\n");
    }

    // If-Else If-Else
    if (!varA) {
        printf("VarA is false\n");
    }
    else if (!varB) {
        printf("VarB is false\n");
    }
    else {
        printf("I don't know what is happening\n");
    }

    // Declare an int
    int varC = 3;

    // Switch
    switch(varC) {
        case 0:
            printf("VarC is 0\n");
            break;
        case 1:
            printf("VarC is 1\n");
            break;
        case 2:
            printf("VarC is 2\n");
            break;
        case 3:
            printf("VarC is 3\n");
            break;
        default:
            printf("VarC is unknown\n");
    }

    // For loop
    for (int i = 0; i < 5; i++) {
        printf("At run %d in loop\n", i + 1);
    }

    // While loop
    while (varC < 5) {
        printf("VarC is %d\n", varC++);
    }

    // Do-while loop
    do {
        printf("VarC is %d\n", varC++);
    } while (varC < 10);


    // Goto example
    int varD = 12;
    if (varD < 11)
        goto less;
    else
        goto greater;

greater:
    printf("VarD is greater than 11");
less:
    printf("VarD is less than 11");

}

