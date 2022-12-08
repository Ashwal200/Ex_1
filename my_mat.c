#include <stdio.h>
#include "my_mat.h"

int matrix [SIZE_OF_MATRIX][SIZE_OF_MATRIX];


int min(int a , int b){
    return (a > b) ? b : a ;
}

//Build the matrix from the user numbers.
//Option A
void mat_build(){
    
for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    global_matrix_builder();
}

void global_matrix_builder(){

    for (int k = 0; k < 10; k++)
        {
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    if ( (matrix[i][k] != NO_EDGE) && (matrix[j][k] != NO_EDGE) )
                    {
                        if(matrix[i][j] != NO_EDGE)
                        {
                        matrix[i][j] = min(matrix[i][j] , matrix[i][k] + matrix[k][j]);
                        }
                        else if( i != j )
                        {
                        matrix[i][j] = matrix[i][k] + matrix[k][j];
                        }
                    }
                
                }
            }
        }
}



//If there isn't a path between the index's return False , Otherwise return True.
//Option B
void mat_true(){

    int numI , numJ;
    scanf("%d%d" , &numI , &numJ);
   
    if ( matrix[numI][numJ] == NO_EDGE)
        {
        printf("False\n");
        }
    else if (numI == numJ)
    {
        printf("False\n");
    }
        
    else
        {
        printf("True\n");
        }
}

//Find the shortest path between two index's , and return the value.
//Option C
void mat_path(){
    int numI , numJ ;
    scanf("%d%d" , &numI , &numJ); 

    if (matrix[numI][numJ] == NO_EDGE)
    {
        printf("%d\n" , -1);
    }
    else if (numI == numJ)
    {
         printf("%d\n" , -1);
    }
    
    else {
        printf("%d\n" , matrix[numI][numJ]);
    }
}




