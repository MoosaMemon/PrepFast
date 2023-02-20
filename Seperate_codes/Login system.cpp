#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>
void createaccount();
void login();

struct user
{
    char pass[20];
    char username[20];
    char fname[20];
    char lname[20];
};

int main()
{
	int tos, choice;
	printf("What do you want to login as?\n\n");
	printf("[1] - Teacher:  \n");
    printf("[2] - Student:  \n");
    printf("\nEnter your choice: ");
    scanf("%d", &tos);
    system("cls");
    
    switch(tos)
    {
    	case 1:
    		printf("[1] - Create Account as a teacher:  \n");
 			printf("[2] - Login as teacher:  \n");
 	    	printf("[3] - Exit:  \n");
    		printf("\nEnter your choice: ");
    		scanf("%d", &choice);
    
		    while(1)
 		   {
  	    		switch(choice)
				{
       				case 1:
   			   	    	createaccount();
        		    	break;
    		    	case 2:
        			    login();
        			    break;
    			    case 3:
        			    exit(0);
        			default:
        	    		printf("Invalid Choice!\n");
        	    		break;
        		}
			}
    		break;
    	case 2:
    		printf("[1] - Create Account:  \n");
 			printf("[2] - Login:  \n");
 	    	printf("[3] - Exit:  \n");
    		printf("\nEnter your choice: ");
    		scanf("%d", &choice);
    
		    while(1)
 		   {
  	    		switch(choice)
				{
       				case 1:
   			   	    	createaccount();
        		    	break;
    		    	case 2:
        			    login();
        			    break;
    			    case 3:
        			    exit(0);
        			default:
        	    		printf("Invalid Choice!\n");
        	    		break;
        		}
			}
			break;	
	}
}

void createaccount()
{
    struct user U;
    FILE *fp;
    system("cls");
    puts("x---Create your Account---x");
    printf("\n\n");
    printf("Enter first name: ");
	scanf("%s", U.fname);
    printf("\n");
    printf("Enter last name: ");
    scanf("%s", U.lname);
    printf("\n");
    printf("Enter username: ");
    scanf("%s", U.username);
    printf("\n");
    printf("Enter password: ");
    scanf("%s", U.pass);
    
    fp = fopen("user details.txt", "wb+");
    if (fp == NULL)
    {
        printf("\nError in opening file containing data!\n");
        exit(1);
    }
    else
    {
    	fwrite(&U, sizeof(struct user), 1, fp);
	    fclose (fp);
	    system("cls");
  		printf("Account Created Successfully!\n\n");
    	printf("Press any key to continue...");
    	getch();
    	system("cls");
	}
	exit(0);
}

void login()
{
    char uname[20], pss[20];
    FILE *fp;
    struct user u;
    system("cls");
    printf("x---LOGIN TO YOUR ACCOUNT---x\n\n");
    printf("Enter username: ");
    scanf("%s", uname);
    printf("\n");
    printf("Enter password: ");
    scanf("%s",pss);
    
    fp=fopen("user details.txt", "rb+");
    if(fp==NULL)
    {
        printf("\nError in opening file containing data!\n");
        exit(1);
    }
    while(fread(&u, sizeof(struct user), 1, fp))
	{
        if( strcmp(uname, u.username) == 0 && strcmp(pss,u.pass) == 0 )
        {
            printf("\nLogin  successful!\n\n");
            printf("Press any key to continue...");
            getch();
        }
        else
        {
            printf("\nLogin unsuccessful!\nEnter correct username and password\n\n");
            printf("Press any key to continue...");
            getch();
        }
    }
    fclose(fp);
    system("cls");
    exit(0);
}