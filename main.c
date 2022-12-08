#include <stdio.h>
#include <string.h>
#include "my_mat.h"



int main(){
char user_input;  
do{
    scanf("%c" , &user_input);
   
    switch (user_input)
    {
    case 'A':
        mat_build();
        break;

    case 'B':
        mat_true();
        break;
        
    case 'C':
        mat_path();
        break;
    }
}
while (user_input != 'D');
{
   return END_OF_PROGRAM; 
}



//   0  0  1  0  0  0  0  0  6  0
//   0  0  2  0  0  0  0  0  0  2
//   1  2  0  4  0  0  1  2  0  0
//   0  0  4  0  0  4  0  0  0  3
//   0  0  0  0  0  1  0  0  7  0
//   0  0  0  4  1  0  3  0  0  0
//   0  0  1  0  0  3  0  3  0  0  
//   0  0  2  0  0  0  3  0  0  0  
//   6  0  0  0  7  0  0  0  0  0  
//   0  2  3  0  0  0  0  0  0  0 
}