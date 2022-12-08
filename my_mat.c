#include <stdio.h>
#include <math.h>
#include <limits.h>
#define NO_EDGE 0
int matrix [10][10];


void print_the_global_matrix(){

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
                printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
}


int min(int a , int b){
    return (a > b) ? b : a ;
}

//Build the matrix from the user numbers.
//Option A
void matBuild(){
    
for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //global_matrix_builder();
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
void matTrue(){

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

    //print_the_global_matrix();
}

//Find the shortest path between two index's , and return the value.
//Option C
void matPath(){
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

