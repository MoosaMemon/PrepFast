#include <stdio.h>
#include<math.h>

char input[100];
int pos = 0;

int addsub();
int muldiv();
int term();

int main(void)
{
	int option,num1,num2,ans;
	float ans_f;
	char expression[100];
	int pos = 0;
	printf("[1] - Basic calculator\n");
	printf("[2] - Scientific calculator\n");
	printf("\nEnter choice: ");
	scanf("%d", &option);
	
	switch(option)
	{
		case 1:
			printf("1 - Additon\n");
			printf("2 - Subtraction\n");
			printf("3 - Multiplication\n");
			printf("4 - Division\n");
			printf("5 - Solve Expression\n");
			printf("\nEnter choice: ");
			scanf("%d", &option);
			
			switch(option)
			{
				case 1:
					printf("Enter number 1: \n");
					scanf("%d", &num1);
					printf("Enter number 2: \n");
					scanf("%d", &num2);
					ans = num1 + num2;
					printf("Answer : %d", ans);
					break;
				case 2:
					printf("Enter number 1: \n");
					scanf("%d", &num1);
					printf("Enter number 2: \n");
					scanf("%d", &num2);
					ans = num1 - num2;
					printf("Answer : %d", ans);
					break;
				case 3:
					printf("Enter number 1: \n");
					scanf("%d", &num1);
					printf("Enter number 2: \n");
					scanf("%d", &num2);
					ans = num1 * num2;
					printf("Answer : %d", ans);
					break;
				case 4:
					printf("Enter number 1: \n");
					scanf("%d", &num1);
					printf("Enter number 2: \n");
					scanf("%d", &num2);
					ans_f = (float)num1 / (float)num2;
					printf("Answer : %f", ans_f);
					break;
				case 5:
					printf("Enter Expression:\n");
                    scanf("%s", input);
                    ans = addsub();
                    printf("Answer : %d", ans);  
					break;
			break;	
			}
		case 2:
			printf("1 - Find squareroot \n");
			printf("2 - Find the sine \n");
			printf("3 - Find the cosine \n");
			printf("4 - Find the tangent\n");
			printf("5 - Find power of a number\n");
			printf("6 - Find the remainder \n");
			printf("7 - Find the exponential \n");
			printf("8 - Find the natural log \n");
			printf("9 - Find the cuberoot \n");
			printf("10 - Find the sine inverse \n");
			printf("11 - Find the cos inverse \n");
			printf("12 - Find the tan inverse \n");
			printf("\nEnter choice: ");
			scanf("%d", &option);
			
			switch(option)
			{
				case 1:
					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = sqrt(num1);
					printf("Answer: %f", ans_f);
					break;
				case 2:

					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = (float)sin(num1);
					printf("Answer: %f", ans_f);
			        break;
				case 3:
					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = (float)cos(num1);
					printf("Answer: %f", ans_f);
    			    break;
				case 4:
					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = (float)tan(num1);
					printf("Answer: %f", ans_f);
        			break;
				case 5:
					printf("Enter the base: ");
					scanf("%d", &num1);
					printf("Enter a power: ");
					scanf("%d", &num2);
					ans = pow(num1, num2);
					printf("Answer: %d", ans);
        			break;
				case 6:
					printf("Enter the numerator: ");
					scanf("%d", &num1);
					printf("Enter a denominator: ");
					scanf("%d", &num2);
					ans = fmod(num1, num2);
					printf("Answer: %d", ans);
        			break;
				case 7:
					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = exp(num1);
					printf("Answer: %f", ans_f);
        			break;
				case 8:
					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = log(num1);
					printf("Answer: %f", ans_f);
        			break;
				case 9:
					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = cbrt(num1);
					printf("Answer: %f", ans_f);
        			break;
				case 10:
					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = asin(num1);
					printf("Answer: %f", ans_f);
        			break;
				case 11:
					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = acos(num1);
					printf("Answer: %f", ans_f);
        			break;
				case 12:
					printf("Enter a number: ");
					scanf("%d", &num1);
					ans_f = atan(num1);
					printf("Answer: %f", ans_f);
        			break;
			break;
			}
	}
	return 0; 
}
int term()
{
    int n = 0;
    if(input[pos] == '('){
        pos++;
        n = addsub();
        if(input[pos] == ')'){
            pos++;
            return n;
        }
    } 
	else{
        while('0' <= input[pos] && input[pos] <= '9'){
            n = n*10 + (input[pos] - '0');
            pos++;
        }
    }
    return n;
}

int muldiv()
{
    int first,second;
    first = term();
    for(;;){
        if(input[pos] == '*'){
            pos++;
            second = term();
            first *= second; 
        }
        else if(input[pos] == '/'){
            pos++;
            second = term();
            first /= second;
        }
		else{
            return first;
        }
    }
}

int addsub()
{
    int first,second;
    first = muldiv();
    for(;;){
        if(input[pos] == '+'){
            pos++;
            second = muldiv();
            first += second; 
        }
	    else if(input[pos] == '-'){
            pos++;
            second = muldiv();
            first -= second;
        }
		else{
            return first;
        }
    }
}


