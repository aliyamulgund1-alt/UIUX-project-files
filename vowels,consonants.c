 #include<stdio.h>
 #include<ctype.h>
 int main()
 {
    char str[100];
    int i=0,vowels=0,consonants=0,specials=0;
    printf("enter a sentence:");
    fgets(str,sizeof (str),stdin);
    while(str[i]!='\0')
    {
    char ch=tolower(str[i]);
    if(ch>='a'&&ch<='z')
    {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    vowels++;
    else
    consonants++;
    }
    else if (ch!=' '&&ch!='\n')
    {
    specials++;
    }
    i++;
    }
    printf("vowels:%d\n",vowels);
    printf("consonants:%d\n",consonants);
    printf("special characters:%d\n",specials);
    return 0;
    }
