#include<stdio.h>
#include<conio.h>

int main(){
    char input[100];
    int key;
    char cypher_text[100];

    printf("Rules:\nan space at the end of input string\nkey should not be 0\n");

    printf("Enter the input string: ");
    gets(input);

    printf("Enter the key: ");
    scanf("%d", &key);

    for (int i = 0;(i < 100 && input[i] != '\0'); i++)
    {
        if (key != 0)
        {
            cypher_text[i] = input[i] + key;
        }
        // printf("%S", &cypher_text);
        
    }
    printf("\n%s", &cypher_text);
    getch();
    return 0;
}