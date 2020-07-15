// Counting digits, whitespace characters and other characters.
#include<stdio.h>

int main()
{
    int c,i,ndigits[10], nwhite, nothers;
    nwhite = nothers = 0;
    for(i=0;i<10;i++)
        ndigits[i]=0;
    printf("Enter a string of characters.\n");
    while((c=getchar())!=EOF)
    {
        if(c>='0' && c<='9')
            ++ndigits[c-'0'];
        else if(c=='\n' || c=='\t' || c==' ')
            ++nwhite;
        else 
            ++nothers;
    }
    printf("The total no. of digits are: \n");
    for(i=0;i<10;i++)
        {
            printf("%d\t",i);
        }
    printf("\n");
    for(i=0;i<10;i++)
        {
            printf("%d\t",ndigits[i]);
        }
    printf("\n");
    printf("The total no. of whitespace are: %d\n",nwhite);
    printf("The total no. of other characters are: %d\n",nothers);
}