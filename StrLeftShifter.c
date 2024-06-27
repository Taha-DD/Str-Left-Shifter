#include<stdio.h>
void LeftShift ( char t[], int n )
{
    char s = t[0];
    for ( int i = 0; i < n - 1; i++ )
        t[i] = t[i + 1];
    t[n - 1] = s;
}
int main()
{
    int n = 8;
    char t[9] = {'D', 'E', 'C', 'A', 'L', 'A', 'G', 'E', '\0'};
    puts(t);
    LeftShift ( t, n );
    puts(t);
    return 0;
}
