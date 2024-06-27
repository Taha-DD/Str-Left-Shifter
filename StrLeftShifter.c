#include<stdio.h>
#include<string.h>
void LeftShift ( char t[] )
{
    char s = t[0];
    for ( int i = 0; i < strlen(t) - 1; i++ )
        t[i] = t[i + 1];
    t[strlen(t) - 1] = s;
}
int main()
{
    
    char t[] = {'D', 'E', 'C', 'A', 'L', 'A', 'G', 'E', '\0'};
    puts(t);
    LeftShift (t);
    puts(t);
    return 0;
}
