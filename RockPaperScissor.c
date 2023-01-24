#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int admin(), user(), login(), menu(), setup(), makeLogic();
// int register();
int d = 500, Player, Computer;

int main()
{
    int option;
    printf("\t\t-:WELCOME:-");
    printf("\n\nChoose an option:\n\n");
    printf("1: Admin\n2: Users\n\n");
    printf("Choose : ");
    scanf("%d", &option);
    if (option == 1)
    {
        system("CLS");
        admin();
    }
    else if (option == 2)
    {
        system("CLS");
        user();
    }
    while (1)
    {
        system("cls");
        makeLogic();
        setup();
    }
    return (option);
}
int admin()
{
    char uname[10], pass[10];
    printf("\t\t-:Adminstrator Account:-\n\n\n");
    printf("Enter username : ");
    scanf("%s", &uname);
    printf("Enter password : ");
    scanf("%s", &pass);
    if (strcmp(uname, "admin") == 0 && strcmp(pass, "admin") == 0)
    {
        printf("\nConfirming details....");
        Sleep(d);
        printf("\nlogin successfull");
    }
    else
    {
        printf("Invalid username/password");
    }
}
int user()
{
    int option;
    printf("\t\t-:User Account:-\n\n\n");
    printf("Choose an option:\n\n");
    printf("1: Register\n2: Login\n\n");
    printf("Choose : ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        // register();
        break;
    case 2:
        login();
        break;

    default:
        printf("Wrong Options");
        break;
    }
    return 0;
}
int login()
{
    char id[20], pass[20];
    printf("Enter your ID : ");
    scanf("%s", &id);
    printf("Enter password : ");
    scanf("%s", &pass);
    if (strcmp(id, "username") == 0 && strcmp(pass, "password") == 0)
    {
        printf("\nConfirming details...");
        Sleep(d);
        printf("\nlogin successfull");
    }
    else
    {
        printf("Invalid username/password");
    }
}

// int register()
// {
// printf("First Name : ");
// }

int menu()
{
    int ch;
    printf("\t\t-:WELCOME TO MY GAME:-");
    printf("\n\n\nSelect an option");
    printf("\n1: Rock");
    printf("\n2: Paper");
    printf("\n3: Scissors");
    printf("\n4: Exit");
    printf("\n");
    printf("\nChoose : ");
    scanf("%d", &ch);
    return (ch);
}
int makeLogic()
{
    switch (Player)
    {
    case 1:
        if (Computer == 1)
        {
            printf("Game Draw");
            printf("\nPlayer=Rock\nComputer=Rock");
        }
        else if (Computer == 2)
        {
            printf("Computer Won");
            printf("\nPlayer=Rock\nComputer=Paper");
        }
        else
        {
            printf("You Won");
            printf("\nPlayer=Rock\nComputer=Scissors");
        }

        break;
    case 2:
        if (Computer == 1)
        {
            printf("You Won");
            printf("\nPlayer=Paper\nComputer=Rock");
        }
        else if (Computer == 2)
        {
            printf("Game Draw");
            printf("\nPlayer=Paper\nComputer=Paper");
        }
        else
        {
            printf("Computer Won");
            printf("\nPlayer=Paper\nComputer=Scissors");
        }
        break;
    case 3:
        if (Computer == 1)
        {
            printf("Computer Won");
            printf("\nPlayer=Scissors\nComputer=Rock");
        }
        else if (Computer == 2)
        {
            printf("You Won");
            printf("\nPlayer=Scissors\nComputer=Paper");
        }
        else
        {
            printf("Game Draw");
            printf("\nPlayer=Scissors\nComputer=Scissors");
        }
        break;
    case 4:
        exit(0);
        break;

    default:
        printf("\nInvalid Input\n");
        break;
    }
}
int setup()
{
label:
    Computer = rand() % 4;
    if (Computer == 0)
    {
        goto label;
    }
    Player = menu();
}