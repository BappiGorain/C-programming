#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of characters you want to enter: ");
    scanf("%d", &n);

    char *str = (char *)malloc(n * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

    int arr[26] = {0};

    printf("Enter %d characters: ", n);
    scanf("%s", str);

    for (int i = 0; i < n; i++) {
        
        if (str[i] >= 'a' && str[i] <= 'z') {
            int position = str[i] - 'a';
            arr[position]++;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            int position = str[i] - 'A';
            arr[position]++;
        }
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 26; i++) {
        if (arr[i] != 0) {
            printf("%c -> %d\n", (char)(i + 'a'), arr[i]); 
        }
    }

    free(str); 
    return 0;
}

