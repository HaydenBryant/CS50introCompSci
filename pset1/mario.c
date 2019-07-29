#include <cs50.h>
#include <stdio.h>

void print(int input, int x)
{
    string hash = "#";
    
    if(input > 1)
    {
        print(input - 1, x + 1);
    };
    for(int i = x; i > 0; i--)
    {
        printf(" ");
    };
    for(int j = 1; j <= input; j++)
    {
        printf("%s", hash);
    };
    printf("  ");
    for(int j = 1; j <= input; j++)
    {
        printf("%s", hash);
    };
    printf("\n");
};

int main(void)
{
    int input = get_int("Height: ");
    if(input < 1 || input > 8)
    {
        return main();
    };
    int x = 0;
    print(input, x);
};