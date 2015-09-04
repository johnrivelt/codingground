#include <stdio.h>

char *my_gets(char *dest)
{
    int c = getchar();
    char *p = dest;
    while(c!=EOF && c!='\n'){
        *p++=c;
        c=getchar();
    }
    *p = '\0';
    return dest;
}


int main()
{
    char response[8];
    puts("Continue?[y]n:");
    my_gets(response);
    
    if (response[0] =='n') return 0;
    
    puts("Type something here:");
    my_gets(response);
    printf("%s",response);
    
    
    return 0;    
    
    
    
    
}