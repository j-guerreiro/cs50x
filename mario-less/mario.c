#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define DEST_SIZE 40

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

int printSpace(int value)
{
    // Ex: spaces [2] = [" ", " "]; 


    for (int i = 0; i < value; i++) 
    {
        //spaces[i] = "*";
        //printf("%s", spaces[i]);
        
    }

    return 0;  
}

int printSpace(int value);
int main (void)
{
    // Mario's pyramid's height.
    int pyramidSize = get_int("What is the size of Mario's pyramid? ");
    string spaces[pyramidSize];
    
    for (int i = 0; i <= pyramidSize; i++) 
    {
        for (int j = 0; j < i; j++)
        {
            //int space = printSpace(i);
            printf("#");
        }
        printf("\n");
    }


}