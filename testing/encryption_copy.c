#include<stdio.h>
#include<conio.h>

int main(){
    int max_size_array;
    printf("Enter the string length: ");
    scanf("%d\n", &max_size_array);


    char input[max_size_array];
    int key;
    char cypher_text[max_size_array];

    printf("Rules:\nan space at the end of input string\nkey should not be 0\n");

    printf("Enter the input string: ");
    gets(input);

    printf("KEY: ");
    scanf("%d",&key);


    for (int i = 0;(i < max_size_array && input[i] != '\0'); i++)
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