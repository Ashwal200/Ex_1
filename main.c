#include <stdio.h>
#include <string.h>
#include "my_mat.h"
#define END_OF_PROGRAM 0


int main(){
char user_input;  
do{
    scanf("%c" , &user_input);
   
    switch (user_input)
    {
    case 'A':
        matBuild();
        break;

    case 'B':
        matTrue();
        break;
        
    case 'C':
        matPath();
        break;
    }
}
while (user_input != 'D');
{
   return END_OF_PROGRAM; 
}

}