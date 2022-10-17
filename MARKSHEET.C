#include<stdio.h>
#include<conio.h>
void main()
{
     FILE *fp;
     clrscr();
     char name[50];
     int rno;
     int p,bc,m2,bm,bcomp;
     int total;
     float percentage;
     printf("Enter student name : ");
     scanf("%s",&name);
     printf("Enter roll no : ");
     scanf("%d",&rno);

     printf("Enter marks of Engineering physics : ");
     scanf("%d", &p);
     printf("Enter marks of Mathematics 2 : ");
     scanf("%d", &m2);
     printf("Enter marks of Basic Civil Engineering : ");
     scanf("%d", &bc);
     printf("Enter marks of Basic Machenical Engineering : ");
     scanf("%d", &bm);
     printf("Enter marks of Basic Computer Engineering : ");
     scanf("%d", &bcomp);

     total = p+m2+bc+bm+bcomp;
     percentage = total/5.0;

     fp=fopen("result.doc","w");
     fprintf(fp,"\n--------------------------------------------");
     fprintf(fp,"\nJawaharlal Institute of Technology, Borawan");
     fprintf(fp,"\n              MARKSHEET                   ");
     fprintf(fp,"\n--------------------------------------------");
     fprintf(fp,"\nName: %s                    Roll No = %d",name, rno);
     fprintf(fp,"\n--------------------------------------------");
     fprintf(fp,"\nSno.     Sub     Max        Marks Obt.    ");
     fprintf(fp,"\n--------------------------------------------");
     fprintf(fp,"\n 1       EP      100           %d        ",p);
     fprintf(fp,"\n 2       M2      100           %d        ",m2);
     fprintf(fp,"\n 3       BC      100           %d        ",bc);
     fprintf(fp,"\n 4       BM      100           %d        ",bm);
     fprintf(fp,"\n 5       BC      100           %d        ",bcomp);
     fprintf(fp,"\n--------------------------------------------");
     fprintf(fp,"\n                 500           %d         ",total);
     fprintf(fp,"\n--------------------------------------------");
     fprintf(fp,"\n  Percentage = %.2f                         ",percentage);
     fprintf(fp,"\n--------------------------------------------");
     getch();
}