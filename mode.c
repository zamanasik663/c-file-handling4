#include<stdio.h>


int main(){


    char s[100];
    FILE *fp;
    fp = fopen("appened.txt","a");
    if(fp == NULL)
  {
     printf("can't open to the file.\n");
  }
  printf("Enter your notes:\n");
  gets(s);
  fputs(s,fp);
  fclose(fp);



    return 0;
}