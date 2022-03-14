#include <unistd.h>
/**
 *main-Entry point
 *
 *Description:place our quote to stderr
 *instead of stdout
 *
 *Return:1 always (Success)
 */
int main(void);
{

        char *quote = "and that piece of art is useful\" - Dora Korpar,2015-1019\n";

        write(2,quote,59);
        return (1)
 }