#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    ch = tolower(ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("%c is a Vowel\n", ch);
    else
        printf("%c is a Consonant\n", ch);

    return 0;
}
