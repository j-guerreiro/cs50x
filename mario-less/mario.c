#include <stdio.h>
#include <cs50.h>
#include <string.h>

/*
Mario-less pyramid left example, height 8:

       # 1.
      ## 2.
     ### 3.
    #### 4.
   ##### 5.
  ###### 6.
 ####### 7.
######## 8.

Mario-less pyramid right example, height 8:

1. #
2. ##
3. ###
4. ####
5. #####
6. ######
7. #######
8. ########

*/
int main (void)
{
    // Mario's pyramid's height.
    int pyramidSize = 0;
    pyramidSize = get_int("What is the size of Mario's pyramid? ");
    
    for (int i = 0; i <= pyramidSize; i++) 
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}