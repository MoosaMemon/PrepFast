#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// varaibles for calculator
char input[100];
int pos = 0;

// function declaration for calculator
int addsub();
int muldiv();
int term();

// functions for calculator
int addsub()
{
    int first, second;
    first = muldiv();
    for (;;)
    {
        if (input[pos] == '+')
        {
            pos++;
            second = muldiv();
            first += second;
        }
        else if (input[pos] == '-')
        {
            pos++;
            second = muldiv();
            first -= second;
        }
        else
        {
            return first;
        }
    }
}
int term()
{
    int n = 0;
    if (input[pos] == '(')
    {
        pos++;
        n = addsub();
        if (input[pos] == ')')
        {
            pos++;
            return n;
        }
    }
    else
    {
        while ('0' <= input[pos] && input[pos] <= '9')
        {
            n = n * 10 + (input[pos] - '0');
            pos++;
        }
    }
    return n;
}

int muldiv()
{
    int first, second;
    first = term();
    for (;;)
    {
        if (input[pos] == '*')
        {
            pos++;
            second = term();
            first *= second;
        }
        else if (input[pos] == '/')
        {
            pos++;
            second = term();
            first /= second;
        }
        else
        {
            return first;
        }
    }
}

// structure for login system
struct user
{
    char pass[20];
    char username[20];
    char fname[20];
    char lname[20];
};

// structures for subject 1
struct quiz1
{
    char item1[200];
    struct quiz1 *next1;
};
struct quiz2
{
    char item2[200];
    struct quiz2 *next2;
};
struct quiz3
{
    char item3[200];
    struct quiz3 *next3;
};
struct quiz4
{
    char item4[200];
    struct quiz4 *next4;
};
struct quiz5
{
    char item5[200];
    struct quiz5 *next5;
};
// structures for subject 2
struct quiz6
{
    char item6[200];
    struct quiz6 *next6;
};
struct quiz7
{
    char item7[200];
    struct quiz7 *next7;
};
struct quiz8
{
    char item8[200];
    struct quiz8 *next8;
};
struct quiz9
{
    char item9[200];
    struct quiz9 *next9;
};
struct quiz10
{
    char item10[200];
    struct quiz10 *next10;
};
// structures for subject 3
struct quiz11
{
    char item11[200];
    struct quiz11 *next11;
};
struct quiz12
{
    char item12[200];
    struct quiz12 *next12;
};
struct quiz13
{
    char item13[200];
    struct quiz13 *next13;
};
struct quiz14
{
    char item14[200];
    struct quiz14 *next14;
};
struct quiz15
{
    char item15[200];
    struct quiz15 *next15;
};

// add functions for subject 1
void insertAtLast1(struct quiz1 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz1.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz1 *n, *t;
        n = (struct quiz1 *)malloc(sizeof(struct quiz1));
        strcpy(n->item1, q);
        n->next1 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next1 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next1);
                t = t->next1;
            }
            t->next1 = n;
        }
        fclose(fptr);
    }
}
void insertAtLast2(struct quiz2 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz2.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz2 *n, *t;
        n = (struct quiz2 *)malloc(sizeof(struct quiz2));
        strcpy(n->item2, q);
        n->next2 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next2 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next2);
                t = t->next2;
            }
            t->next2 = n;
        }
        fclose(fptr);
    }
}

void insertAtLast3(struct quiz3 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz3.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz3 *n, *t;
        n = (struct quiz3 *)malloc(sizeof(struct quiz3));
        strcpy(n->item3, q);
        n->next3 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next3 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next3);
                t = t->next3;
            }
            t->next3 = n;
        }
        fclose(fptr);
    }
}

void insertAtLast4(struct quiz4 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz4.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz4 *n, *t;
        n = (struct quiz4 *)malloc(sizeof(struct quiz4));
        strcpy(n->item4, q);
        n->next4 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next4 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next4);
                t = t->next4;
            }
            t->next4 = n;
        }
        fclose(fptr);
    }
}

void insertAtLast5(struct quiz5 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz5.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz5 *n, *t;
        n = (struct quiz5 *)malloc(sizeof(struct quiz5));
        strcpy(n->item5, q);
        n->next5 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next5 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next5);
                t = t->next5;
            }
            t->next5 = n;
        }
        fclose(fptr);
    }
}

// add functions for subject 2
void insertAtLast6(struct quiz6 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz6.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz6 *n, *t;
        n = (struct quiz6 *)malloc(sizeof(struct quiz6));
        strcpy(n->item6, q);
        n->next6 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next6 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next6);
                t = t->next6;
            }
            t->next6 = n;
        }
        fclose(fptr);
    }
}
void insertAtLast7(struct quiz7 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz7.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz7 *n, *t;
        n = (struct quiz7 *)malloc(sizeof(struct quiz7));
        strcpy(n->item7, q);
        n->next7 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next7 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next7);
                t = t->next7;
            }
            t->next7 = n;
        }
        fclose(fptr);
    }
}

void insertAtLast8(struct quiz8 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz8.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz8 *n, *t;
        n = (struct quiz8 *)malloc(sizeof(struct quiz8));
        strcpy(n->item8, q);
        n->next8 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next8 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next8);
                t = t->next8;
            }
            t->next8 = n;
        }
        fclose(fptr);
    }
}

void insertAtLast9(struct quiz9 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz9.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz9 *n, *t;
        n = (struct quiz9 *)malloc(sizeof(struct quiz9));
        strcpy(n->item9, q);
        n->next9 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next9 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next9);
                t = t->next9;
            }
            t->next9 = n;
        }
        fclose(fptr);
    }
}

void insertAtLast10(struct quiz10 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz10.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz10 *n, *t;
        n = (struct quiz10 *)malloc(sizeof(struct quiz10));
        strcpy(n->item10, q);
        n->next10 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next10 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next10);
                t = t->next10;
            }
            t->next10 = n;
        }
        fclose(fptr);
    }
}

// add functions for subject 1
void insertAtLast11(struct quiz11 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz11.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz11 *n, *t;
        n = (struct quiz11 *)malloc(sizeof(struct quiz11));
        strcpy(n->item11, q);
        n->next11 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next11 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next11);
                t = t->next11;
            }
            t->next11 = n;
        }
        fclose(fptr);
    }
}
void insertAtLast12(struct quiz12 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz12.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz12 *n, *t;
        n = (struct quiz12 *)malloc(sizeof(struct quiz12));
        strcpy(n->item12, q);
        n->next12 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next12 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next12);
                t = t->next12;
            }
            t->next12 = n;
        }
        fclose(fptr);
    }
}

void insertAtLast13(struct quiz13 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz13.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz13 *n, *t;
        n = (struct quiz13 *)malloc(sizeof(struct quiz13));
        strcpy(n->item13, q);
        n->next13 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next13 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next13);
                t = t->next13;
            }
            t->next13 = n;
        }
        fclose(fptr);
    }
}

void insertAtLast14(struct quiz14 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz14.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz14 *n, *t;
        n = (struct quiz14 *)malloc(sizeof(struct quiz14));
        strcpy(n->item14, q);
        n->next14 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next14 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next14);
                t = t->next14;
            }
            t->next14 = n;
        }
        fclose(fptr);
    }
}

void insertAtLast15(struct quiz15 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quiz6.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quiz15 *n, *t;
        n = (struct quiz15 *)malloc(sizeof(struct quiz15));
        strcpy(n->item15, q);
        n->next15 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->next15 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->next15);
                t = t->next15;
            }
            t->next15 = n;
        }
        fclose(fptr);
    }
}

// structures for ans 1
struct quizA1
{
    char itemA1[200];
    struct quizA1 *nextA1;
};
struct quizA2
{
    char itemA2[200];
    struct quizA2 *nextA2;
};
struct quizA3
{
    char itemA3[200];
    struct quizA3 *nextA3;
};
struct quizA4
{
    char itemA4[200];
    struct quizA4 *nextA4;
};
struct quizA5
{
    char itemA5[200];
    struct quizA5 *nextA5;
};

// structures for ans 2
struct quizA6
{
    char itemA6[200];
    struct quizA6 *nextA6;
};
struct quizA7
{
    char itemA7[200];
    struct quizA7 *nextA7;
};
struct quizA8
{
    char itemA8[200];
    struct quizA8 *nextA8;
};
struct quizA9
{
    char itemA9[200];
    struct quizA9 *nextA9;
};
struct quizA10
{
    char itemA10[200];
    struct quizA10 *nextA10;
};
// structures for ans 3
struct quizA11
{
    char itemA11[200];
    struct quizA11 *nextA11;
};
struct quizA12
{
    char itemA12[200];
    struct quizA12 *nextA12;
};
struct quizA13
{
    char itemA13[200];
    struct quizA13 *nextA13;
};
struct quizA14
{
    char itemA14[200];
    struct quizA14 *nextA14;
};
struct quizA15
{
    char itemA15[200];
    struct quizA15 *nextA15;
};

// add functions for ans 1
void insertAtLastA1(struct quizA1 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA1.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA1 *n, *t;
        n = (struct quizA1 *)malloc(sizeof(struct quizA1));
        strcpy(n->itemA1, q);
        n->nextA1 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA1 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA1);
                t = t->nextA1;
            }
            t->nextA1 = n;
        }
        fclose(fptr);
    }
}
void insertAtLastA2(struct quizA2 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA2.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA2 *n, *t;
        n = (struct quizA2 *)malloc(sizeof(struct quizA2));
        strcpy(n->itemA2, q);
        n->nextA2 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA2 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA2);
                t = t->nextA2;
            }
            t->nextA2 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA3(struct quizA3 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA3.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA3 *n, *t;
        n = (struct quizA3 *)malloc(sizeof(struct quizA3));
        strcpy(n->itemA3, q);
        n->nextA3 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA3 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA3);
                t = t->nextA3;
            }
            t->nextA3 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA4(struct quizA4 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA4.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA4 *n, *t;
        n = (struct quizA4 *)malloc(sizeof(struct quizA4));
        strcpy(n->itemA4, q);
        n->nextA4 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA4 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA4);
                t = t->nextA4;
            }
            t->nextA4 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA5(struct quizA5 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA5.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA5 *n, *t;
        n = (struct quizA5 *)malloc(sizeof(struct quizA5));
        strcpy(n->itemA5, q);
        n->nextA5 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA5 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA5);
                t = t->nextA5;
            }
            t->nextA5 = n;
        }
        fclose(fptr);
    }
}

// add functions for subject 2
void insertAtLastA6(struct quizA6 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA6.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA6 *n, *t;
        n = (struct quizA6 *)malloc(sizeof(struct quizA6));
        strcpy(n->itemA6, q);
        n->nextA6 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA6 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA6);
                t = t->nextA6;
            }
            t->nextA6 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA7(struct quizA7 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA7.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA7 *n, *t;
        n = (struct quizA7 *)malloc(sizeof(struct quizA7));
        strcpy(n->itemA7, q);
        n->nextA7 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA7 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA7);
                t = t->nextA7;
            }
            t->nextA7 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA8(struct quizA8 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA8.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA8 *n, *t;
        n = (struct quizA8 *)malloc(sizeof(struct quizA8));
        strcpy(n->itemA8, q);
        n->nextA8 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA8 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA8);
                t = t->nextA8;
            }
            t->nextA8 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA9(struct quizA9 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA9.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA9 *n, *t;
        n = (struct quizA9 *)malloc(sizeof(struct quizA9));
        strcpy(n->itemA9, q);
        n->nextA9 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA9 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA9);
                t = t->nextA9;
            }
            t->nextA9 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA10(struct quizA10 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA10.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA10 *n, *t;
        n = (struct quizA10 *)malloc(sizeof(struct quizA10));
        strcpy(n->itemA10, q);
        n->nextA10 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA10 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA10);
                t = t->nextA10;
            }
            t->nextA10 = n;
        }
        fclose(fptr);
    }
}

// add functions for subject 1
void insertAtLastA11(struct quizA11 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA11.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA11 *n, *t;
        n = (struct quizA11 *)malloc(sizeof(struct quizA11));
        strcpy(n->itemA11, q);
        n->nextA11 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA11 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA11);
                t = t->nextA11;
            }
            t->nextA11 = n;
        }
        fclose(fptr);
    }
}
void insertAtLastA12(struct quizA12 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA12.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA12 *n, *t;
        n = (struct quizA12 *)malloc(sizeof(struct quizA12));
        strcpy(n->itemA12, q);
        n->nextA12 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA12 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA12);
                t = t->nextA12;
            }
            t->nextA12 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA13(struct quizA13 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA13.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA13 *n, *t;
        n = (struct quizA13 *)malloc(sizeof(struct quizA13));
        strcpy(n->itemA13, q);
        n->nextA13 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA13 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA13);
                t = t->nextA13;
            }
            t->nextA13 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA14(struct quizA14 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA14.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {
        struct quizA14 *n, *t;
        n = (struct quizA14 *)malloc(sizeof(struct quizA14));
        strcpy(n->itemA14, q);
        n->nextA14 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA14 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA14);
                t = t->nextA14;
            }
            t->nextA14 = n;
        }
        fclose(fptr);
    }
}

void insertAtLastA15(struct quizA15 **s, char *q)
{
    int i = 1;
    FILE *fptr;
    fptr = fopen("quizA15.txt", "w");
    if (fptr == NULL)
    {
        printf("Error\n");
    }
    else
    {

        struct quizA15 *n, *t;
        n = (struct quizA15 *)malloc(sizeof(struct quizA15));
        strcpy(n->itemA15, q);
        n->nextA15 = NULL;
        if (*s == NULL)
        {
            *s = n;
        }
        else
        {
            t = *s;
            while (t->nextA15 != NULL)
            {
                fprintf(fptr, "\nQuestion %d: %s\n", i++, t->nextA15);
                t = t->nextA15;
            }
            t->nextA15 = n;
        }
        fclose(fptr);
    }
}

// structures for todo list
typedef struct ToDoListing todo;

struct ToDoListing
{
    char data[100];
    todo *link;
    int count;
};

todo *start = NULL;

// funtion of timer
void timer(int h, int m, int s)
{
    while (TRUE)
    {
        printf("\r%d:%d:%d", h, m, s);
        Sleep(1000);
        if (s != 0)
        {
            s--;
        }
        if (s == 0 && m != 0)
        {
            s = 59;
            m--;
        }
        if (s == 0 && m == 0 && h != 0)
        {
            h--;
            m = 59;
            s = 59;
        }
        if (h == 0 && s == 0 && m == 0)
        {
            printf("\n\nTime's up!! \a\n");
            break;
        }
    }
}

// functions of todo list
void welcomeInterface()
{
    system("color 9F"); // Operating System dependent - Windows.
    printf("\n\n");
    printf("-------------------------------------------------------------------------\n");
    printf("************************PrepFast TODO APP********************************\n");
    printf("-------------------------------------------------------------------------\n\n\n");
    printf("************************Designed by PrepFast Tech.***********************\n");
    printf("-------------------------------------------------------------------------\n\n");
    system("pause");
}

void viewToDo()
{
    system("cls"); // clear console
    todo *temp;
    temp = start;
    if (start == NULL)
    {
        printf("Your ToDo is empty!");
    }
    while (temp != NULL)
    {
        printf("%d)", temp->count);
        puts(temp->data);
        fflush(stdin);
        temp = temp->link;
    }
    printf("\n\n");
    system("pause");
}

void checkCount()
{
    todo *temp;
    int i = 1;
    temp = start;
    while (temp != NULL)
    {
        temp->count = i;
        i++;
        temp = temp->link;
    }
}

void createToDo()
{
    char k;
    todo *t, *temp;
    system("cls");

    while (1)
    {
        printf("\nConfirm? (Press \"Y\" - Yes \"N\" - No)");
        fflush(stdin);
        scanf("%c", &k);
        if (k == 'n')
            break;
        else
        {
            if (start == NULL)
            {
                t = (todo *)calloc(1, sizeof(todo));
                start = t;
                printf("\nAdding to your list...\n");
                fflush(stdin);
                gets(t->data);
                t->count = 1;
                start->link = NULL;
            }
            else
            {
                temp = (todo *)calloc(1, sizeof(todo));
                printf("\nAdding to your list...\n");
                fflush(stdin);
                gets(temp->data);
                temp->link = NULL;
                t->link = temp;
                t = t->link;
            }
            checkCount();
        }
    }
}

void deleteToDo()
{
    system("cls");
    int d;
    todo *temp1, *temp;
    printf("\nEnter the number of ToDo you want to delete\n");
    scanf("%d", &d);
    temp1 = start;
    temp = start->link;

    while (1)
    {
        if (temp1->count == d)
        {
            start = start->link;
            free(temp1);
            checkCount();
            break;
        }
        if (temp->count == d)
        {
            temp1->link = temp->link;
            free(temp);
            checkCount();
            break;
        }
        else
        {
            temp1 = temp;
            temp = temp->link;
        }
    }

    system("pause");
}

void editToDo()
{
    system("cls");
    todo *temp, *t;
    char k;

    while (1)
    {
        printf("\nConfirm? (Press \"Y\" - Yes \"N\" - No)");
        fflush(stdin);
        scanf("%c", &k);
        if (k == 'n')
            break;
        printf("\nAdding to your list...\n");
        temp = (todo *)calloc(1, sizeof(todo));
        fflush(stdin);
        gets(temp->data);
        temp->link = NULL;
        t = start;

        while (t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
        checkCount();
    }
    printf("\n\n");
    system("pause");
}
// functions for login system
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
        fclose(fp);
        system("cls");
        printf("Account Created Successfully!\n\n");
        printf("Press any key to continue...");
        getch();
        system("cls");
    }
    exit(0);
}
void loginT()
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
    scanf("%s", pss);

    fp = fopen("user details.txt", "rb+");
    if (fp == NULL)
    {
        printf("\nError in opening file containing data!\n");
        exit(1);
    }
    while (fread(&u, sizeof(struct user), 1, fp))
    {
        if (strcmp(uname, u.username) == 0 && strcmp(pss, u.pass) == 0)
        {
            printf("\nLogin  successful!\n\n");
            int choice, chapter;
            char q1[200], q2[200], q3[200], q4[200], q5[200];
            // For questions
            struct quiz1 *start1 = NULL;
            struct quiz2 *start2 = NULL;
            struct quiz3 *start3 = NULL;
            struct quiz4 *start4 = NULL;
            struct quiz5 *start5 = NULL;

            struct quiz6 *start6 = NULL;
            struct quiz7 *start7 = NULL;
            struct quiz8 *start8 = NULL;
            struct quiz9 *start9 = NULL;
            struct quiz10 *start10 = NULL;

            struct quiz11 *start11 = NULL;
            struct quiz12 *start12 = NULL;
            struct quiz13 *start13 = NULL;
            struct quiz14 *start14 = NULL;
            struct quiz15 *start15 = NULL;
            // for answers
            struct quizA1 *startA1 = NULL;
            struct quizA2 *startA2 = NULL;
            struct quizA3 *startA3 = NULL;
            struct quizA4 *startA4 = NULL;
            struct quizA5 *startA5 = NULL;

            struct quizA6 *startA6 = NULL;
            struct quizA7 *startA7 = NULL;
            struct quizA8 *startA8 = NULL;
            struct quizA9 *startA9 = NULL;
            struct quizA10 *startA10 = NULL;

            struct quizA11 *startA11 = NULL;
            struct quizA12 *startA12 = NULL;
            struct quizA13 *startA13 = NULL;
            struct quizA14 *startA14 = NULL;
            struct quizA15 *startA15 = NULL;

            printf("Select the subject you want to study:\n\n");
            printf(" \"1\" Programming Fundamentals (CS-1002)\n \"2\" English Composition & Comprehension (SS-1004)\n \"3\" Pakistan Studies (SS-1003)\n \"4\" To exit\n\n");
            printf("Your choice: ");
            scanf("%d", &choice);

            if (choice != 6)
            {
                switch (choice)
                {
                case 1:
                    printf("\nChoose the chapter you want to study:\n\n");
                    printf(" \"1\" Conditional Statements in C (if/if-else/if-elseif-else/Switch Case Statements)\n \"2\" Loops in C (while/do-while/for)\n \"3\" Functions in C\n \"4\" Arrays in C\n \"5\" Structures in C\n \"6\" To Exit\n\n");
                    printf("Your choice: ");
                    scanf("%d", &chapter);

                    if (chapter != 6)
                    {
                        if (chapter == 1)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast1(&start1, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast1(&start1, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast1(&start1, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast1(&start1, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast1(&start1, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA1(&startA1, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA1(&startA1, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA1(&startA1, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA1(&startA1, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA1(&startA1, q5);
                        }
                        else if (chapter == 2)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast2(&start2, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast2(&start2, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast2(&start2, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast2(&start2, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast2(&start2, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA2(&startA2, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA2(&startA2, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA2(&startA2, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA2(&startA2, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA2(&startA2, q5);
                        }
                        else if (chapter == 3)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast3(&start3, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast3(&start3, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast3(&start3, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast3(&start3, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast3(&start3, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA3(&startA3, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA3(&startA3, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA3(&startA3, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA3(&startA3, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA3(&startA3, q5);
                        }
                        else if (chapter == 4)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast4(&start4, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast4(&start4, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast4(&start4, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast4(&start4, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast4(&start4, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA4(&startA4, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA4(&startA4, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA4(&startA4, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA4(&startA4, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA4(&startA4, q5);
                        }
                        else if (chapter == 5)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast5(&start5, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast5(&start5, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast5(&start5, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast5(&start5, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast5(&start5, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA5(&startA5, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA5(&startA5, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA5(&startA5, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA5(&startA5, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA5(&startA5, q5);
                        }
                    }
                    break;
                case 2:
                    printf("\nChoose the chapter you want to study:\n\n");
                    printf(" \"1\" Sentences Structures \"2\" Correcting Run-ons\n \"3\" Revision and Editing\n \"4\" Fragments\n \"5\" Misplaced and Dangling Modifiers\n \"6\" To Exit\n\n");
                    printf("Your choice: ");
                    scanf("%d", &chapter);

                    if (chapter != 6)
                    {
                        if (chapter == 1)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast6(&start6, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast6(&start6, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast6(&start6, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast6(&start6, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast6(&start6, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA6(&startA6, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA6(&startA6, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA6(&startA6, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA6(&startA6, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA6(&startA6, q5);
                        }
                        else if (chapter == 2)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast7(&start7, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast7(&start7, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast7(&start7, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast7(&start7, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast7(&start7, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA7(&startA7, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA7(&startA7, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA7(&startA7, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA7(&startA7, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA7(&startA7, q5);
                        }
                        else if (chapter == 3)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast8(&start8, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast8(&start8, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast8(&start8, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast8(&start8, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast8(&start8, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA8(&startA8, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA8(&startA8, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA8(&startA8, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA8(&startA8, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA8(&startA8, q5);
                        }
                        else if (chapter == 4)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast9(&start9, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast9(&start9, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast9(&start9, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast9(&start9, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast9(&start9, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA9(&startA9, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA9(&startA9, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA9(&startA9, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA9(&startA9, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA9(&startA9, q5);
                        }
                        else if (chapter == 5)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast10(&start10, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast10(&start10, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast10(&start10, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast10(&start10, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast10(&start10, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA10(&startA10, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA10(&startA10, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA10(&startA10, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA10(&startA10, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA10(&startA10, q5);
                        }
                    }
                    break;
                case 3:
                    printf("\nChoose the chapter you want to study:\n\n");
                    printf(" \"1\" Factors of Nationalism \"2\" Sir Syed Ahmed Khan\n \"3\" Early problems of Pakistan\n \"4\" Constitution Making\n \"5\" Period of 1947-2013\n \"6\" To Exit\n\n");
                    printf("Your choice: ");
                    scanf("%d", &chapter);

                    if (chapter != 6)
                    {
                        if (chapter == 1)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast11(&start11, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast11(&start11, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast11(&start11, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast11(&start11, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast11(&start11, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA11(&startA11, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA11(&startA11, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA11(&startA11, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA11(&startA11, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA11(&startA11, q5);
                        }
                        else if (chapter == 2)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast12(&start12, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast12(&start12, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast12(&start12, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast12(&start12, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast12(&start12, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA12(&startA12, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA12(&startA12, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA12(&startA12, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA12(&startA12, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA12(&startA12, q5);
                        }
                        else if (chapter == 3)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast13(&start13, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast13(&start13, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast13(&start13, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast13(&start13, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast13(&start13, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA13(&startA13, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA13(&startA13, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA13(&startA13, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA13(&startA13, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA13(&startA13, q5);
                        }
                        else if (chapter == 4)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast14(&start14, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast14(&start14, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast14(&start14, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast14(&start14, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast14(&start14, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA14(&startA14, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA14(&startA14, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA14(&startA14, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA14(&startA14, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA14(&startA14, q5);
                        }
                        else if (chapter == 5)
                        {
                            printf("Enter Questions: \n"); // q
                            printf("Enter Question 1: \n");
                            scanf(" ");
                            fgets(q1, 200, stdin);
                            insertAtLast15(&start15, q1);

                            printf("Enter Question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLast15(&start15, q2);

                            printf("Enter Question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLast15(&start15, q3);

                            printf("Enter Question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLast15(&start15, q4);

                            printf("Enter Question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLast15(&start15, q5);

                            printf("Enter Answers: \n"); // a
                            printf("Enter answer of question 1: \n");
                            fgets(q1, 200, stdin);
                            insertAtLastA15(&startA15, q1);

                            printf("Enter answer of question 2: \n");
                            fgets(q2, 200, stdin);
                            insertAtLastA15(&startA15, q2);

                            printf("Enter answer of question 3: \n");
                            fgets(q3, 200, stdin);
                            insertAtLastA15(&startA15, q3);

                            printf("Enter answer of question 4: \n");
                            fgets(q4, 200, stdin);
                            insertAtLastA15(&startA15, q4);

                            printf("Enter answer of question 5: \n");
                            fgets(q5, 200, stdin);
                            insertAtLastA15(&startA15, q5);
                        }
                    }
                    break;
                }
            }
        }
        else
        {
            printf("\nLogin unsuccessful!\nEnter correct username and password\n\n");
        }
    }
    fclose(fp);
    system("cls");
    exit(0);
}
void loginS()
{
    int option, num1, num2, ans;
    float ans_f;
    char expression[100];
    int pos = 0;
    char uname[20], pss[20];
    FILE *fp;
    struct user u;
    system("cls");
    printf("x---LOGIN TO YOUR ACCOUNT---x\n\n");
    printf("Enter username: ");
    scanf("%s", uname);
    printf("\n");
    printf("Enter password: ");
    scanf("%s", pss);

    fp = fopen("user details.txt", "rb+");
    if (fp == NULL)
    {
        printf("\nError in opening file containing data!\n");
        exit(1);
    }
    while (fread(&u, sizeof(struct user), 1, fp))
    {
        if (strcmp(uname, u.username) == 0 && strcmp(pss, u.pass) == 0)
        {
            printf("\nLogin  successful!\n\n");
            int option;
            int choice;
            int c, num, i;
            int h, m, s;
            printf(" \"1\" Pomodoro timer\n \"2\" Todo list\n \"3\" Quiz\n \"4\" Performance analysis\n \"5\" Calculator\n \"6\" To exit\n\n");
            printf("Your choice: ");
            scanf("%d", &option);
            if (option != 6)
            {
                switch (option)
                {
                case 1:
                    printf("1 - Pomodoro Timer\n2 - Customized timer\n\nEnter choice: ");
                    scanf("%d", &c);

                    switch (c)
                    {
                    case 1:
                        printf("\nEnter the number of times you want to run this block: ");
                        scanf("%d", &num);
                        printf("\n");
                        for (i = 1; i <= num; i++)
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
                case 2:
                    welcomeInterface();
                    printf("\n");
                    while (1)
                    {
                        printf("Please select the options below for your ToDo List.\n");
                        printf("1. View your ToDo List.\n");
                        printf("2. Add to your ToDo List.\n");
                        printf("3. Edit your ToDo.\n");
                        printf("4. Delete your ToDo.\n");
                        printf("4. Exit\n");
                        scanf("%d", &choice);
                        switch (choice)
                        {
                        case 1:
                            viewToDo();
                            break;
                        case 2:
                            createToDo();
                            break;
                        case 3:
                            editToDo();
                            break;
                        case 4:
                            deleteToDo();
                            break;
                        case 5:
                            exit(0);
                            break;
                        default:
                            printf("Please select an appropriate choice.");
                            break;
                        }
                    }
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    printf("[1] - Basic calculator\n");
                    printf("[2] - Scientific calculator\n");
                    printf("\nEnter choice: ");
                    scanf("%d", &option);

                    switch (option)
                    {
                    case 1:
                        printf("1 - Additon\n");
                        printf("2 - Subtraction\n");
                        printf("3 - Multiplication\n");
                        printf("4 - Division\n");
                        printf("5 - Solve Expression\n");
                        printf("\nEnter choice: ");
                        scanf("%d", &option);

                        switch (option)
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
                        }
                        getch();
                        break;
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

                        switch (option)
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
                        }
                        getch();
                        break;
                    }
                }
            }
        }
        else
        {
            printf("\nLogin unsuccessful!\nEnter correct username and password\n\n");
        }
    }
    fclose(fp);
    system("cls");
    exit(0);
}

int main()
{
    int tos, choice1;
    printf("What do you want to login as?\n\n");
    printf("[1] - Teacher:  \n");
    printf("[2] - Student:  \n");
    printf("\nEnter your choice: ");
    scanf("%d", &tos);
    system("cls");

    switch (tos)
    {
    case 1:
        printf("[1] - Create Account as a teacher:  \n");
        printf("[2] - Login as teacher:  \n");
        printf("[3] - Exit:  \n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice1);

        while (1)
        {
            switch (choice1)
            {
            case 1:
                createaccount();
                break;
            case 2:
                loginT();
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
        scanf("%d", &choice1);

        while (1)
        {
            switch (choice1)
            {
            case 1:
                createaccount();
                break;
            case 2:
                loginS();
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
    return 0;
}
