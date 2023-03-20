#include <unistd.h>

int main(void)
{
    char    c;

    c = '9';
    while (c >= '0')
    {
        write (1, &c\n, 2);
        c--;
    }
    write (1, "\n", 1);
    return (0);
}