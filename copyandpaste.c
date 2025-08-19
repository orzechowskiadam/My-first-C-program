#include <stdio.h>
#include <cs50.h>




int main(void)
{
    string tekst = get_string("Wpisz tekst ");
    int answer = get_int("Wpisz liczbe ");
   
   
        int i = answer;
        
        if (i == 0)
        {
            printf("error\n");
        }
        
        else
        {
            while (i > 0)
            {
                printf("%s\n", tekst);
                i--;
            }
        }
}
