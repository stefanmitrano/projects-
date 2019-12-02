#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

 int main(int argc, string argv[])
{
   //Prints error if more than one key
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    //Checks if string has numbers
    for (int i = 0, n = strlen(argv[1]); i < n; ++i)
    {
        if (argv[1][i] < 48 || argv[1][i] > 57)
        {    
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            //Converts string input to an int
            int k = atoi(argv[1]);
            //Asks user for plaintext input
            string p = get_string("plaintext: ");
            printf("cyphertext: ");
            for (int j = 0, pl = strlen(p); j < pl; j++)
            {
                if (isupper(p[j])) //If the character is uppercase it switches to the new uppercase
                {  
                    printf("%c", ((p[j] + k % 26)));
                }
                else if (islower(p[j])) //If the character is lowercase it switches it to the new lowercase
                {
                    printf("%c", ((p[j] + k % 26)));
                }
                else //If the character is not a letter, it just prints it
                {
                    printf("%c", p[j]);
                }
            }
            printf("\n");
        }
    }
 }
