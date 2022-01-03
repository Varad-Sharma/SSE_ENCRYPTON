#include<stdio.h>
#include<conio.h>

int main(){
    char output[100];
    int key;
    char cypher_text[100];

    printf("Do not concider the last three words\n");

    printf("Enter the cypher text: ");
    gets(cypher_text);

    printf("\nEnter the key: ");
    scanf("%d", &key);

    for (int i = 0;(i < 100 && cypher_text[i] != '\0'); i++){
        if (key != 0)
        {
            output[i] = cypher_text[i] - key;
        }
        
    }
    printf("\n%s", output);
    getch();
    return 0;
}