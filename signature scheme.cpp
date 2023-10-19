#include<stdio.h>
#include<string.h>
int checklucky(char *a);
int main()
{
    int c;
    c=checklucky(char *a);

    if(c==1)
        printf("%s is lucky",a);
    else
        printf("%s is not lucky",a);

    return 0;
}

int checklucky(char *a)
{
    char name[100];
    int sum=0,len,i;
    a=name;

    printf("Enter the input string\n");
    scanf("%s",name);

    len=strlen(name);

    for(i=0;i<len;i++)
    {
        sum=sum+name[i];
    }

    if(sum%2==0)
        return (1);
    else
        return (0);
}
