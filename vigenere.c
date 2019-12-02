#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf(stderr, "try again\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            if (isalpha(argv[i][j]) == false)
            {                
                fprintf(stderr, "%s: non alpha char '%c' (%d) in key\n",
                        argv[0], argv[i][j], argv[i][j]);
                return 1;
            }
        }
    }

    string pt = get_string("plaintext:  ");

    printf("ciphertext: ");
    int k = 0;
    int keylen = strlen(argv[1]);
    for (int r = 0; pt[r] != '\0'; r++)
    {                           
        if (isupper(pt[r]))
        {
            int j = k++ % keylen;
            int key = tolower(argv[1][j]) - 'a';
            printf("%c", (pt[r] - 'A' + key) % 26 + 'A');
        }
        else if (islower(pt[r]))
        {
            int j = k++ % keylen;
            int key = tolower(argv[1][j]) - 'a';
            printf("%c", (pt[r] - 'a' + key) % 26 + 'a');
        }
        else
        {
            printf("%c", pt[r]);
        }

     }            
     printf("\n");       
     return 0;
}
