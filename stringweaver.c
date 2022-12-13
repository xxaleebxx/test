#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int max = 100;
    int ret = EOF +1;
    int count = 1;
    
    char *a = (char *) malloc(sizeof(char)*max);
    char *b = (char *) malloc(sizeof(char)*max);
    
    while (ret != EOF) {
        if (count == 1) ret = scanf("%s", a);
        else ret = scanf("%s", b);
        count += 1;
        char tempa[strlen(a)-1);
    
        for (int i = strlen(a)-1; i > 0; i--){
            char letter = *(a+1)
            strncat(tempa, &letter, 1);
        }
        printf("a = %s, tempa = %s", a, tempa);
   }

   free(a);
   free(b);
   return 0;
} 
