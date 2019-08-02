ask user for input using get_int()
check program was run properly with proper input
  if() not return main
prompt user for plaintext to ciper using get_string
  if() not return main
iterate over string
check for case
cycle charecters down alphabet array? rotating desired amount preserving case
printf ciphered output in terminal
return


#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        printf("1\n");
        return 1;
    }
    else if (argc == 2)
    {
        int key = 0;
        
        if(argv[1])
        {
            key = atoi(argv[1]);
        }
        else
        {
            return 1;
        }
        
        printf("success\n");
        printf("%d\n", key);
    }
}
