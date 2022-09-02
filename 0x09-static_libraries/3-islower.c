#include "main.h"

/**

 * _islower - confirms if the letter is lowercase

 *

 * @c: indicates the letter to be checked

 *

 * Return: 1 if letter is lowercase. 0 otherwise

 */

int _islower(int c)
  
{
  
  if (c >= 'a' && c <= 'z')
    
    {
      
      return (1);
      
    }
  
  else
    
    {
      
      return (0);
      
    }
  
}
