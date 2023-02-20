#include<stdio.h>
#include<windows.h>

void timer(int, int ,int);

int main()
{
	int c, num, i;
	int h, m, s;
	printf("1 - Pomodoro Timer\n2 - Customized timer\n\nEnter choice: ");
	scanf("%d", &c);
	
	switch(c)
	{
		case 1:
			printf("\nEnter the number of times you want to run this block: ");
			scanf("%d", &num);
			printf("\n");
			for(i=1;i<=num;i++)
			{
				printf("\nSession begins for %d out of %d times\n", i, num);
				printf("\n");
				timer(00, 25, 00);
				printf("\n5 minute break starts now!\n\n");
				timer(00, 05, 00);
			}
			break;
		case 2:
			printf("\nFormat: \nHH\nMM\nSS\n\n");		
			printf("Enter the duration you want the countdown to run for:\n");
			scanf("%d%d%d", &h, &m, &s);
			timer(h, m, s);
			break;
	
	}
}

void timer(int h, int m, int s)
{
	while(TRUE)
	{
		printf("\r%d:%d:%d", h, m, s);
		Sleep(1000);
		if( s!=0 )
		{
			s--;
		}
		if(s==0 && m!=0)
		{
			s=59;
			m--;
		}
		if(s==0 && m==0 && h!=0)
		{
			h--;
			m = 59;
			s=59;
		}
		if(h==0 && s==0 && m==0)
		{
			printf("\n\nTime's up!! \a\n");
			break;
		}
	}
}