#include <stdio.h>
#include <cs50.h>

int main(void)  
{
    int n;
    do
    {   
       n = get_int("height of Pyramid 1-8: ");
        
    } while ( n < 0  || n >8 );
    
    for (int i = 0; i < n; i++)
  {
      for (int j = 0; j < n - 1 - i; j++)
      {
          printf(" ");
      }
      for (int j = 0; j < i + 1; j++)
      {
          printf("#");
      }
      printf("\n");
  }
}
