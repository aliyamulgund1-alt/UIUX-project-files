#include<stdio.h>
int main()
{
    int marks[100],n,i;
    int pass=0,fail=0;
    printf("enter the number of students(minimum5):");
    scanf("%d",&n);
    if(n<5)
    {
        printf("please enter at least 5 students.\n");
        return 0;
    }
    printf("enter marks of %d students:\n",n);
    for(0;i<n;i++)
    {
    printf("student %d:",i+1);
    scanf("%d",&marks[i]);
    if(marks[i]>=40)
    pass++;
    else
    fail++;
    }
    printf("\n number of students passed:%d\n",pass);
    printf("number of students failed:%d\n",fail);
    return 0;
    }
