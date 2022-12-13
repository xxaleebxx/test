#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    int max = 100;
    int ret = EOF +1;
    int count = 1;
    
    char *a = (char *) malloc(sizeof(char)*max);
    char *b = (char *) malloc(sizeof(char)*max);
    char *result = (char *) malloc(sizeof(char)*max*2);
    
    while (ret != EOF) {
        if (count == 1) ret = scanf("%s", a);
        else {
            ret = scanf("%s", b);
        }
        
        
        
        if (count > 1){
            char tempb[strlen(b)-1];
            
            //set tempb to be a reversed b
            for (int i = strlen(b)-1; i > 0; i--){
                char letterb = *(b+i);
                strncat(tempb, &letterb, 1);
            }
            printf("b = %s, tempb = %s\n", b, tempb);

            count = 1;
        }
        else {
            char tempa[strlen(a)-1];
     
            //set tempa to be a reversed a
            for (int i = strlen(a)-1; i > 0; i--){
                char letter = *(a+i);
                strncat(tempa, &letter, 1);
            }
            printf("a = %s, tempa = %s\n", a, tempa);
            count += 1;
        }
        
     
   }

   free(a);
   free(b);
   free(result);
   return 0;
} 
