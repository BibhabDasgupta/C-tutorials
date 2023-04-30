#include<stdio.h>
void main()
{
char ch='E';
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
printf("A small letter and a vowel");
}
else if((ch>='A'&& ch<='Z')&&(ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'))
{
printf("A capital letter and a consonant");
}
else if(((ch>='A'&& ch<='Z')&&(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'))||((ch>='a'&& ch<='z')&&(ch!='a'||ch!='e'||ch!='i'||ch!='o'||ch!='u')))
{
printf("A character in English but does not fall in the last two categories");
}
else
{
printf("Not a character in English");
}
}
