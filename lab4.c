#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])
{
    char ch;
	FILE *fp1;
    FILE *fp2;
    if(argc!=3)
    {
        printf("invalid ");
        exit(1);
    }
	fp1 = fopen(argv[1], "a+");
	fp2 = fopen(argv[2], "r");
	if (fp1==NULL || fp2==NULL) 
    {
		printf("Unable to open/"
			"detect file(s)\n");
        exit(1);
	}
	//ch=fgetc(fp1);
     //While (ch!=EOF)
     //{
       //  fputc(ch,fp2);
         //ch=fgetc(fp1);
     //}

     while(1)
     {
         ch=fgetc(fp2);
         if(ch==EOF)
            break;
        fputc(ch,fp1);
     }
     printf("\n successful ");
     fclose(fp1);
     fclose(fp2);
     //getch();
}

// https://youtu.be/ZpeNH1Xjyj0
// https://www.geeksforgeeks.org/c-program-to-append-content-of-one-text-file-to-another/
// https://stackoverflow.com/questions/19429138/append-to-the-end-of-a-file-in-c