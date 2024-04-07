#include <stdio.h>

int main()
{
    char first='\0';
    char last='\0';
    char temp='\0';
    printf("first: ");
    scanf("\n%c",&first);
    printf("second: ");
    scanf("\n%c",&last);
    // if (first>=65 && first<=90)
    // {
    //     first += 32;
    // }

    // if (last>=65 && last<=90)
    // {
    //     last += 32;
    // }
    (first>=65 && first<=90) ? (first += 32) : (first +=0);
    (last>=65 && last<=90) ? (last += 32) : (last += 0);
    (first>last) ? (temp=first,first=last,last=temp):(first+=0);
    for (char i = first; i <= last; i++)
        {
            printf("%c",i);
        }
    

    return 0;
}