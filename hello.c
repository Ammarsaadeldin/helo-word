#include <stdio.h>
#include <cs50.h>
#include <unistd.h>

int main(void)
{
    string name = get_string("what's your name?\n");
    
    printf("hello, %s nice to meet you\n", name);
    
    sleep(1);
    
    int age = get_int("what's your age.?\n");
    
    printf("your are at least %i days old\n", age*365);
}
