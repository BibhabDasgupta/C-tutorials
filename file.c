//OPERATIONS ON FILE
 //Create a file
 //Open a file
 //Close a file
 //Read from a file
 //Write from a file
 //TYPES OF FILES
 //text files(.txt/.c/.java) and binary files(.exe/.mp3/.jpg)
 //FILE POINTER
 //FILE is a (hidden)structure that needs to be created for opening a file
 //A FILE pointer points to this structure and is used to acces this file
 //FILE *fptr;
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("ourfirstfile.txt","w");
//     if(fptr==NULL)
//     {
//         printf("File doesnot exist");
//     }
//     fclose(fptr);
//     return 0;
//  }
 //"r" open to read(if file dont exist then NULL will be stored tin the pointer)
 //"rb" open to read in binary(if file dont exist then NULL will be stored tin the pointer)
 //"w" open to write(if file dont exist then it will be created and if it exists it prev contents will be lost and will be filled with new contents )
 //"wb" open to write in binary(if file dont exist then it will be created and if it exists it prev contents will be lost and will be filled with new contents )
 //"a" open to append(if we want our prev contents to be secured )
 //It is a good practice to check whether a file exists or not before reading it
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("oursecondfile.txt","r");
//     if(fptr==NULL)
//     {
//         printf("File doesnot exist");
//     }
//     else
//     {
//     fclose(fptr);
//     }
//     return 0;
//  }
//At write mode a new file will be created
// #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("oursecondfile.txt","w");
//     if(fptr==NULL)
//     {
//         printf("File doesnot exist");
//     }
//     else
//     {
//     fclose(fptr);
//     }
//     return 0;
//  }
// //READING FROM A FILE
//   #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("ourfirstfile.txt","r");
//     if(fptr==NULL)
//     {
//         printf("File doesnot exist");
//     }
//     else
//     {
//         char ch;
//         fscanf(fptr,"%c",&ch);
//         printf("%c",ch);
//         fscanf(fptr,"%c",&ch);
//         printf("%c",ch);
//         fscanf(fptr,"%c",&ch);
//         printf("%c",ch);
//         fscanf(fptr,"%c",&ch);
//         printf("%c",ch);
//         fscanf(fptr,"%c",&ch);
//         printf("%c",ch);
//     fclose(fptr);
//     }
//     return 0;
//  }
 //WRITING TO A FILE
//   #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("ourfirstfile.txt","w");
//     if(fptr==NULL)
//     {
//         printf("File doesnot exist");
//     }
//     else
//     {
//         fprintf(fptr,"%c",'M');
//         fprintf(fptr,"%c",'a');
//         fprintf(fptr,"%c",'n');
//         fprintf(fptr,"%c",'g');
//         fprintf(fptr,"%c",'o');
//     fclose(fptr);
//     }
//     return 0;
//  }
//ALTERNATIVE
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("ourfirstfile.txt","w");
//     if(fptr==NULL)
//     {
//         printf("File doesnot exist");
//     }
//     else
//     {
//         fputc('M',fptr);
//         fputc('a',fptr);
//         fputc('n',fptr);
//         fputc('g',fptr);
//         fputc('o',fptr);
//         fputc('o',fptr);
//     fclose(fptr);
//     }
//     return 0;
//  }
 //fgetc(fptr) does same work for read mode
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("ourfirstfile.txt","r");
//     if(fptr==NULL)
//     {
//         printf("File doesnot exist");
//     }
//     else
//     {
//         printf("%c\n",fgetc(fptr));
//         printf("%c\n",fgetc(fptr));
//         printf("%c\n",fgetc(fptr));
//         printf("%c\n",fgetc(fptr));
//         printf("%c\n",fgetc(fptr));
//     fclose(fptr);
//     }
//     return 0;
//  }
//EOF(End of file)
// fgetc returns EOF to show that the file has ended
//EOF ONLY WORKS FOR getc(REMEMBER!!!!!)
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("ourfirstfile.txt","r");
//     if(fptr==NULL)
//     {
//         printf("File doesnot exist");
//     }
//     else
//     {
//         char ch;
//        ch=fgetc(fptr);
//         while(ch!=EOF)
//         {
//         printf("%c",ch);
//          ch=fgetc(fptr);
//         }
//     fclose(fptr);
//     }
//     return 0;
//  }
//Write a program to read 5 integers from a file
// #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("ourfirstfile.txt","r");
//     if(fptr==NULL)
//     {
//         printf("File doesnot exist");
//     }
//     else
//     {
//         int ch;
//         fscanf(fptr,"%d",&ch);
//         printf("%d\t",ch);
//         fscanf(fptr,"%d",&ch);
//         printf("%d\t",ch);
//         fscanf(fptr,"%d",&ch);
//         printf("%d\t",ch);
//         fscanf(fptr,"%d",&ch);
//         printf("%d\t",ch);
//         fscanf(fptr,"%d",&ch);
//         printf("%d\t",ch);
//     fclose(fptr);
//     }
//     return 0;
//  }
//WAP to input student information from a user and emter it to a file
//   #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("Students.txt","w");
//     char name[100];
//     int age;
//     float cgpa;
//     printf("Enter name");
//     scanf("%s",name);
//     printf("Enter age");
//     scanf("%d",&age);
//     printf("Enter cgpa");
//     scanf("%f",&cgpa);
//         fprintf(fptr,"%s\t",name);
//         fprintf(fptr,"%d\t",age);
//         fprintf(fptr,"%f",cgpa);
//     fclose(fptr);
    
//     return 0;
//  }
//WAP to input all odd number sfrom 1 to n in a file
//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//     FILE *fptr;
//     fptr=fopen("Students.txt","w");
//     int i;
//     printf("Enter i");
//     scanf("%d",&i);
//    for(int j=1;j<=i;j++)
//    {
//     if(j%2==1)
//         fprintf(fptr,"%d\t",j);
//    }
        
//     fclose(fptr);
    
//     return 0;
//  }
//In a file there are values of a and b Write a program to replace them with their sum
#include<stdio.h>
 int main(int argc, char const *argv[])
 {
    FILE *fptr;
    int ch2;
    fptr=fopen("ourfirstfile.txt","r");
    if(fptr==NULL)
    {
        printf("File doesnot exist");
    }
    else
    {
        int ch;
        fscanf(fptr,"%d",&ch);
        int ch1;
        fscanf(fptr,"%d",&ch1);
        ch2=ch+ch1;
    fclose(fptr);
    }
    fptr=fopen("ourfirstfile.txt","a");
    if(fptr==NULL)
    {
        printf("File doesnot exist");
    }
    else
    {
        fprintf(fptr,"%d\t",ch2);
    fclose(fptr);
    }
    return 0;
 }