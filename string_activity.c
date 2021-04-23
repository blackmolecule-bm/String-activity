#include <stdio.h>
#include <string.h>

int main() {
    char line[150];
    int vowels, consonant, length;
    int i;

    vowels = consonant = 0;

    printf("Enter a Sentence: ");
    fgets(line, sizeof(line), stdin);

length = strlen(line);

    for (int i = 0; line[i] != '\0'; ++i) {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U') {
            ++vowels;
        } else if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z')) {
            ++consonant;
        }
    }

    i=0;

    while(line[i]!='\0')
    {
        if(line[i]=='a' ||line[i]=='e' ||line[i]=='i' ||line[i]=='o' ||line[i]=='u')
            line[i]=line[i]-32;
        i++;
    }
    printf("Converted string: ");
    puts(line);
     printf("\nLength of string: %d\n", length);
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d\n", consonant);


    return 0;
}
