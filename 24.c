#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void highest_score()
{
    // Declare variables to store the names and scores and the highest score and its index
    char names[3][20];
    int scores[3], highest, index;

    // Open the file in read mode
    FILE *f = fopen("C:\scorestore\score.txt", "r");

    // Check if the file exists
    if (f == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    // Read the names and scores from the file
    for (int i = 0; i < 3; i++)
    {
        fscanf(f, "%s %d", names[i], &scores[i]);
    }

    // Close the file
    fclose(f);

    // Find the highest score and its index among the three scores
    highest = scores[0];
    index = 0;
    for (int i = 0; i < 3; i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
            index = i;
        }
    }

    // Print the name and score of the player with the highest score
    if (scores[0] == scores[1] && scores[1] == scores[2] && scores[0] == scores[2])
    {
        printf("All players scored highest");
    }
    else if (scores[0] == scores[1] || scores[1] == scores[2] || scores[0] == scores[2])
    {
        printf("Two players have highest scores");
    }
    else
    {
        printf("The player with the highest score is %s with %d points\n", names[index], highest);
    }
}

void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

    printf("\n\n\t*********************BEST OF LUCK*********************************");
    printf("\n\n\t*****C PROGRAM QUIZ GAME is developed by CODE WITH C TEAM********");
}

void show_record()
{
    system("cls");
    char name[20];
    int scr;
    FILE *f;
    f = fopen("C:\scorestore\score.txt", "r");
    while (fscanf(f, "%s %d", name, &scr) == 2)
    {
        printf("%s\t%d\n", name, scr);
    }
    fclose(f);
    highest_score();
    getch();
}

void mainhome()
{

    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME FOR PLAYER 1\n");
    printf("\n\t\t________________________________________");

    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");

    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    char choice = toupper(getch());
    if (choice == 'V')
    {
        show_record();

        mainhome();
    }
    else if (choice == 'H')
    {
        help();

        getch();
        mainhome();
    }

    else if (choice == 'Q')
        exit(1);
    else if (choice == 'S')
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
        char playername[20];
        gets(playername);
        FILE *f;
        f = fopen("C:\scorestore\score.txt", "w"); // "a" to append data to the file (creates if not exists)
        fprintf(f, "%s ", playername);
        fclose(f);

        system("cls");
        home();

        return playername;
    }
}

void mainhome2()
{

    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME for player 2\n");
    printf("\n\t\t________________________________________");

    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");

    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");

    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    char choice = toupper(getch());
    if (choice == 'V')
    {
        show_record();

        mainhome2();
    }
    else if (choice == 'H')
    {
        help();

        getch();
        mainhome2();
    }

    else if (choice == 'Q')
        exit(1);
    else if (choice == 'S')
    {
        // system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
        char playername2[20];

        scanf("%s", playername2);

        FILE *f;
        f = fopen("C:\scorestore\score.txt", "a"); // "a" to append data to the file (creates if not exists)
        fprintf(f, "\n%s", playername2);
        fclose(f);

        system("cls");
        home2();
    }
}

void mainhome3()
{

    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME for player 3\n");
    printf("\n\t\t________________________________________");

    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");

    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");

    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    char choice = toupper(getch());
    if (choice == 'V')
    {
        show_record();

        mainhome3();
    }
    else if (choice == 'H')
    {
        help();

        getch();
        mainhome3();
    }

    else if (choice == 'Q')
        exit(1);
    else if (choice == 'S')
    {

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tRegister your name:");
        char playername3[20];

        scanf("%s", playername3);

        FILE *f;
        f = fopen("C:\scorestore\score.txt", "a"); // "a" to append data to the file (creates if not exists)
        fprintf(f, "\n%s", playername3);
        fclose(f);

        system("cls");
        home3();
    }
}

void home()
{
    system("cls");
    int r1, i, count = 0;
    char input;
    for (i = 1; i <= 10; i++)
    {
        system("cls");
        r1 = i;

        switch (r1)
        {

        case 1:
            do
            {
                printf("\n\n----------Science for player 1--------\n");
                printf("\n\n1Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;

        case 2:
            do
            {

                printf("\n\n2Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 3:
            do
            {

                printf("\n\n3Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;

        case 4:
            do
            {

                printf("\n\n4Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 5:
            printf("\n\n----------Mathematics for player 1--------\n");
            do
            {

                printf("\n\n5Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;

        case 6:
            do
            {

                printf("\n\n6Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 7:
            do
            {

                printf("\n\n7 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 8:
            printf("\n\n----------History for player 1--------\n");
            do
            {

                printf("\n\n8 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 9:
            do
            {

                printf("\n\n9 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 10:
            do
            {

                printf("\n\n10 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        }
    }

    printf("\n The score is %d \n", count);

    char playername[20];

    FILE *f;
    f = fopen("C:\scorestore\score.txt", "a"); // "a" to append data to the file (creates if not exists)
    fprintf(f, " %d\n", count);
    fclose(f);
}

void home2()
{
    system("cls");
    int r1, i, count = 0;
    char input;
    for (i = 1; i <= 10; i++)
    {
        system("cls");
        r1 = i;

        switch (r1)
        {
        case 1:
            printf("\n\n----------Science for player 2--------\n");
            do
            {

                printf("\n\n11 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 2:
            do
            {

                printf("\n\n12 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 3:
            do
            {

                printf("\n\n13 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;

        case 4:
            do
            {

                printf("\n\n14 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 5:
            printf("\n\n----------Mathematics for player 2--------\n");
            do
            {

                printf("\n\n15 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;

        case 6:
            do
            {

                printf("\n\n16 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 7:
            do
            {

                printf("\n\n17 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 8:
            printf("\n\n----------History for player 2--------\n");
            do
            {

                printf("\n\n18 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 9:
            do
            {

                printf("\n\n19 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 10:
            do
            {

                printf("\n\n20 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        }
    }

    printf("\n The score is %d \n", count);

    FILE *f;
    f = fopen("C:\scorestore\score.txt", "a"); // "a" to append data to the file (creates if not exists)
    fprintf(f, " %d\n", count);
    fclose(f);
}

void home3()
{
    system("cls");
    int r1, i, count = 0;
    char input;
    for (i = 1; i <= 10; i++)
    {
        system("cls");
        r1 = i;

        switch (r1)
        {
        case 1:
            printf("\n\n----------Science for player 3--------\n");
            do
            {

                printf("\n\n21 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 2:
            do
            {

                printf("\n\n22 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 3:
            do
            {

                printf("\n\n23 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;

        case 4:
            do
            {

                printf("\n\n24 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 5:
            printf("\n\n----------Mathematics for player 3--------\n");
            do
            {

                printf("\n\n25 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;

        case 6:
            do
            {

                printf("\n\n26 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 7:
            do
            {

                printf("\n\n27 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 8:
            printf("\n\n----------History for player 3--------\n");
            do
            {

                printf("\n\n28 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 9:
            do
            {

                printf("\n\n29 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        case 10:
            do
            {

                printf("\n\n30 Which of the following is a Palindrome number?");
                printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
                printf("\n\nEnter value:\n");
                scanf(" %c", &input);
                input = toupper(input);

                switch (input)
                {
                case 'Q':

                    printf("\n\nQuit?");
                    getch();
                    mainhome('V', 'H', 'Q', 'S', 'Y');
                case 'S':
                    printf("\n\nSkip?");
                    getch();
                    break;
                case 'C':
                    printf("\n\nCorrect!!!");
                    count = count + 10;
                    getch();
                    break;
                default:
                    printf("\n\nWrong!!! ");
                    count = count - 5;
                    getch();
                    break;
                }
            } while (input != 'Q' && input != 'S' && input != 'A' && input != 'B' && input != 'C' && input != 'D');

            break;
        }
    }

    printf("\n The score is %d \n", count);

    FILE *f;
    f = fopen("C:\scorestore\score.txt", "a"); // "a" to append data to the file (creates if not exists)
    fprintf(f, " %d\n", count);
    fclose(f);
}

int main()
{

    mainhome();
    mainhome2();
    mainhome3();
}
