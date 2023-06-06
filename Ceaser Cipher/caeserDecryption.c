#include<stdio.h>

int main(){
    int key;
    char text[100];

    printf("Enter the Cipher: ");
    scanf("%s",text);

    printf("Enter the key: ");
    scanf("%d", &key);

    for(int i = 0; text[i] != '\0'; i++){
        if((text[i] - key) >= 97 && (text[i] - key) <= 122)
            text[i] -= key ;
        else
            text[i] = (text[i] - key) + 26;
    }    

    printf("\n");
    
    printf("The Text is: %s", text);

    return 0;    

}