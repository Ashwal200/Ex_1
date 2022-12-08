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

}