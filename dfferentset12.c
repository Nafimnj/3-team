#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void highest_score()
{
    // Declare variables to store the names and scores and the highest score and its index
    char names[2][20];
    int scores[2], highest, index;

    // Open the file in read mode
    FILE *f = fopen("C:\score.txt", "r");

    // Check if the file exists
    if (f == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    // Read the names and scores from the file
    for (int i = 0; i < 2; i++)
    {
        fscanf(f, "%s %d", names[i], &scores[i]);
    }

    // Close the file
    fclose(f);

    // Find the highest score and its index among the three scores
    highest = scores[0];
    index = 0;
    for (int i = 1; i < 2; i++)
    {
        if (scores[i] > highest)
        {
            highest = scores[i];
            index = i;
        }
    }

    // Print the name and score of the player with the highest score
    printf("The player with the highest score is %s with %d points\n", names[index], highest);
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
    f = fopen("C:\score.txt", "r");
    while (fscanf(f, "%s %d", name, &scr) == 2)
    {

        /*fscanf(f,"%s%d",&name,&scr);
        printf("\n\n\t\t*************************************************************");
        printf("\n\n\t\t %s has secured the Highest Score %d",name,scr);
        printf("\n\n\t\t*************************************************************");*/
        printf("%s\t%d\n", name, scr);
    }
    fclose(f);
    highest_score();
    getch();

    // Open the file in read mode
    /*FILE* file = fopen("C:\score.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read and display the contents of the file
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);*/
}
// player 2---------------------------------------
void show_record2()
{
    system("cls");
    char name[20];
    int scr;
    FILE *f;
    f = fopen("C:\score.txt", "r");
    fscanf(f, "%s%d", &name, &scr);
    printf("\n\n\t\t*************************************************************");
    printf("\n\n\t\t %s has secured the Highest Score %d", name, scr);
    printf("\n\n\t\t*************************************************************");
    fclose(f);
    getch();
}
//-------------------------------------------------------

void mainhome()
{

    system("cls");
    printf("\t\t\tC PROGRAM QUIZ GAME\n");
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
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    char choice = toupper(getch());
    if (choice == 'V')
    {
        show_record();
        // printf("show_record");
        mainhome();
    }
    else if (choice == 'H')
    {
        help();
        // printf("help");
        getch();
        mainhome();
    }

    else if (choice == 'Q')
        exit(1);
    else if (choice == 'S')
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        char playername[20];
        gets(playername);
        FILE *f;
        f = fopen("C:\score.txt", "w"); // "a" to append data to the file (creates if not exists)
        fprintf(f, "%s ", playername);
        fclose(f);

        system("cls");
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
        printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch()) == 'Y')
        {
            home();
            // printf("Home");
        }
        else
        {
            mainhome();
            system("cls");
        }
        // home();
        return playername;
    }
}

// player2------------------------------------------------------------------------------------------------------------------
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
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    char choice = toupper(getch());
    if (choice == 'V')
    {
        show_record2();
        // printf("show_record");
        mainhome2();
    }
    else if (choice == 'H')
    {
        help();
        // printf("help");
        getch();
        mainhome2();
    }

    else if (choice == 'Q')
        exit(1);
    else if (choice == 'S')
    {
        // system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        char playername2[20];
        /*char* playername2 = (char*)malloc(20 * sizeof(char)); // Allocate memory for the player name
            if (playername2 == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }

            printf("Enter player name: ");
            //gets(playername2);*/
        scanf("%s", playername2);
        // gets(playername2);
        FILE *f;
        f = fopen("C:\score.txt", "a"); // "a" to append data to the file (creates if not exists)
        fprintf(f, "\n%s", playername2);
        fclose(f);

        system("cls");
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername2);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded $100,000!");
        printf("\n    By this way you can win upto ONE MILLION cash prize!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch()) == 'Y')
        {
            home2();
            // printf("Home");
        }
        else
        {
            mainhome2();
            system("cls");
        }
        // home2();
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------------------
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
            printf("\n\n----------Science--------\n");
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }

            break;
        case 2:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 3:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;

        case 4:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 5:
            printf("\n\n----------Mathematics--------\n");
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;

        case 6:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 7:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 8:
            printf("\n\n----------History--------\n");
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 9:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 10:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        }
    }

    printf("\n The score is %d \n", count);

    char playername[20];

    FILE *f;
    f = fopen("C:\score.txt", "a"); // "a" to append data to the file (creates if not exists)
    fprintf(f, " %d\n", count);
    fclose(f);

    // printf("\n The score is %d \n", count);
}

// player2-----------------------------------------------------------
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
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }

            break;
        case 2:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 3:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;

        case 4:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 5:
            printf("\n\n----------Mathematics for player 2--------\n");
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;

        case 6:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 7:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 8:
            printf("\n\n----------History for player 2--------\n");
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 9:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        case 10:
            printf("\n\nWhich of the following is a Palindrome number?");
            printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
            printf("\n\nEnter value:\n");
            scanf(" %c", &input);

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
                printf("\n\nWrong!!! The correct answer is C.23232");
                count = count - 5;
                getch();
                break;
            }
            break;
        }
    }

    printf("\n The score is %d \n", count);

    // char playername[20];

    FILE *f;
    f = fopen("C:\score.txt", "a"); // "a" to append data to the file (creates if not exists)
    fprintf(f, " %d\n", count);
    fclose(f);

    // printf("\n The score is %d \n", count);
}
// player2------------------------------------------------------------------------------

int main()
{

    mainhome();
    mainhome2();
}
