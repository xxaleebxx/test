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
        if (count == 1) {
        
            ret = scanf("%s", a);
            
            char tempa[strlen(a)-1];
     
            //set tempa to be reversed a
            for (int i = strlen(a)-1; i > 0; i--){
                //char letter = *(a+1);
                strncat(tempa, substr(a, i, 1), 1);
            }
            printf("a = %s, tempa = %s\n", a, tempa);
            
            count += 1;
        }
        else {
            
            ret = scanf("%s", b);
            char tempb[strlen(b)-1];
            
            //set tempb to be reversed b
            for (int i = strlen(b)-1; i > 0; i--){
                //char letterb = substr(b, i, 1);
                strncat(tempb, substr(b, i, 1), 1);
            }
            printf("b = %s, tempb = %s\n", b, tempb);

            count = 1;
        }
 
   }

   free(a);
   free(b);
   free(result);
   return 0;
} 
