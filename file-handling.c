#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp,*fp1;
	char ch, c, fname[30], newch[30], filename[50];
	int cnt=0,i=0,j;
	//To create a file	
	fp = fopen("file.txt","w");
	fprintf(fp,"Ayush");
	fclose(fp);
	printf("Enter the filename with extension: ");
    gets(fname);
    //To read and reverse the file entered above
    fp = fopen(fname, "r");
    printf("\nThe original content is:\n\n");
    ch = getc(fp);
    while(ch != EOF)//Loop to read the string
    {
        cnt++;
        putchar(ch);
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("\n");
    printf("The content in reverse order is:\n\n");
    for(j=(cnt-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    printf("\n");
    getch();
    //To copy one file to another
    printf("Enter the filename to open for cpoying \n");
    scanf("%s", filename);
    fp1 = fopen(filename, "w");
    if (fp1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
    c = fgetc(fp);
    while (c != EOF)
    {
        fputc(c, fp1);
        c = fgetc(fp);
    }
    printf("\nContents copied to %s", filename);
    fclose(fp);
    fclose(fp1);
    return 0;
}
