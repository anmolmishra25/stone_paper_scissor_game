#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<process.h>
#include<string.h>
int getch();
void human(char choose[])
{
     printf("choose one among stone , paper and scissor\n");
     scanf("%s",choose);
}
void computer(char com[],int *t2)
{
    srand(time(0));
            int num=rand()%100;
            if(num<33)
            {
                strcpy(com,"stone");
                *t2=1;
            }
            else if(num>=33&&num<=66)
            {
                strcpy(com,"paper");
                *t2=2;
            }
            else if(num<99&&num>+65)
            {
                strcpy(com,"scissor");
                *t2=3;
            }
}
void main()
{
    char name[100],choose[10],com[10],ch,ex;
    int r,a=0,c=0,t1,t2;
    printf("enter the name of the player\n");
    scanf("%s",name);
    printf("hello %s I am dell and I will play the game of stone paper scissor with you\nnow I am starting the game\n",name);
    do{
            human(choose);
            if(strcmp(choose,"stone")==0)
            {
                t1=1;
            }
            else if(strcmp(choose,"paper")==0)
            {
                t1=2;
            }
            else if(strcmp(choose,"scissor")==0)
            {
                t1=3;
            }
            else
            {
                printf("wrong input \n");
                continue;
            }
            computer(com,&t2);
            if(t2==1&&t2==2)
        r=1;
    else if(t2==2&&t1==1)
        r=2;
    else if(t2==1&&t1==3)
        r=2;
    else if(t2==3&&t1==1)
        r=1;
    else if(t2==2&&t1==3)
        r=1;
    else if(t2==3&&t1==2)
        r=2;
    else if(t2==1&&t1==1)
        r=3;
    else if(t2==2&&t1==2)
        r=3;
    else if(t2==3&&t1==3)
        r=3;
    if(r==1)
    {
        printf("\nthis time you win you have choose %s and I have choose %s",choose,com);
        a++;
        printf("\nif you want to exit the game please press e and to continue press c\n");
        ex=getch();
        if(ex=='e'){
            break;
        }
         else if(ex=='c'){
                continue;
        }
    }
    else if(r==2)
    {
        printf("\nthis time I win  you have choose %s and I have choose %s",choose,com);
        c++;
        printf("\nif you want to exit the game please press e and to continue press c\n");
        ex=getch();
        if(ex=='e'){
            break;
        }
         else if(ex=='c'){
                continue;
        }
    }
    else if(r==3)
    {
        printf("\nthis time the game is drawn  you have choose %s and I have choose %s",choose,com);
        printf("\nif you want to exit the game please press e and to continue press c\n");
        ex=getch();
        if(ex=='e'){
            break;
        }
        else if(ex=='c'){
                continue;
        }
    }

    }while(1);
    if(a>c)
    {
        printf("%s your score is %d and my score is %d\noops unfortunatly %s you have won this game\n",name,a,c,name);
    }
    else if(c>a)
    {
        printf("%s your score is %d and my score is %d\ncongratulation to me %s I have won this game\n",name,a,c,name);
    }
    else{
        printf("%s your score is %d and my score is %d\n%s this game is drawn\n",name,a,c,name);
        }
}

