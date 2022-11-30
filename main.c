#include <stdio.h>
#include <string.h>
#include "my_mat.h"


int main(){
char answer[2];
char a[] = "A";
char b[] = "B"; 
char c[] = "C"; 
char d[] = "D";  
do{
    scanf("%s" , answer);

    if (strcmp(answer, a) == 0)
{
    matBuild();
}
else if (strcmp(answer, b)==0)
{
    matTrue();
}
else if (strcmp(answer, c)==0)
{
    matPath();
}
}
while (strcmp(answer, d) != 0);
{
   return 0; 
}

}