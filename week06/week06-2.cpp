#include <stdio.h>
int main()
{
    FILE *fin=fopen("output.txt","r");
    ///fprintf(fout,"Hello World\n");
    char line[3000];
    fscanf(fin,"%s",line);
    printf("�AŪ��F%s\n",line);

    fscanf(fin,"%s",line);
    printf("�AŪ��F%s\n",line);
}

