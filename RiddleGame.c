#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char riddles[][100] = {
        "I’m tall when I’m young, and I’m short when I’m old. What am I?",
        "I have branches, but no fruit, trunk or leaves. What am I?",
        "What can’t talk but will reply when spoken to?",
        "The more of this there is, the less you see. What is it?",
        "What has a head and a tail but no body?"
    };

    char answers[][10] = {"candle","bank","echo","darkness","coin"};

    printf("\nRIDDLE GAME");
    printf("\n\n\t Rules : ");
	printf("\n\t - Only two chances are given to guess the correct answer");
	printf("\n\t - Answer should be entered in lower case.");
    printf("\n\t - If you want to skip the question just enter skip in lower case.");
    printf("\n\t - All answers are one word answers.");

    int i,result = 0;
    char ans[10];
    loop_start:
    for (i=0;i<5;i++)
    {
        printf("\nRiddle no. - %d\n",i+1);
        printf("%s\n",riddles[i]);
        printf("Enter your ans : ");
        scanf("%9s",ans);

        if (strcmp(ans,answers[i]) == 0)
        {
            printf("That is the correct answer!!!");
            result++;
        }

        else if (strcmp(ans,"skip") == 0)
        {
            continue;
        }

        else 
        {
            printf("Incorrect answer.\n");
            printf("Enter your answer again : ");
            scanf("%s",ans);

            if (strcmp(ans,answers[i]) == 0)
            {
                printf("That is the correct answer!!!");
                result++;
                continue;
            }

            else if (strcmp(ans,"skip") == 0)
            {
                continue;
            }

            else 
            {
                printf("Incorrect answer.\n");
                printf("The correct answer is : %s",answers[i]);
            }

        }
        
    }

    printf("\nYour total score for the game is : %d\n",result);

    return 0;

}