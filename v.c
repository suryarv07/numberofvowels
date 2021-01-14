#include<stdio.h>
#include<string.h>


void toFindnumofvowels( char string[])
{


    int vowels=0;
    int space=0;
    int consonant=0;
    int digits=0;
    int symbols=0;
    char ch;




    for(int i=0;string[i]!='\0';i++)
    {
        ch=string[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowels++;
        else  if(ch==' ')
             space++;
        else if((ch>='0'&&ch<='9'))
                digits++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            consonant++;



    }
    printf("Vowels :%d",vowels);
    printf("\nConsonant : %d",consonant);
    printf("\nSpace :%d",space);
    printf("\nDigits  :%d",digits);



}



void main()
{

    char string[1000];
    system("color 30");
    printf("Enter The String :");
    fgets(string,1000,stdin);
    toFindnumofvowels(string);
}


