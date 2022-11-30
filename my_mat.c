#include <stdio.h>
#include <math.h>
#include <limits.h>
int matrix [3][3];

int min(int a , int b){
    return (a > b) ? b : a ;
}
//Build the matrix from the user numbers.
//Option A
void matBuild(){
for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            scanf("%3d", & matrix[i][j]);
        }
    }    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][j] = -1;
            }
        }
    }

    // for(int i = 0; i < 3; i++)
    // {
    //     for(int j = 0; j < 3; j++)
    //     {
    //             printf("%3d", matrix[i][j]);
    //     }
    //     printf("\n");
    // }
}

//If there isn't a path between the index's return False , Otherwise return True.
//Option B
void matTrue(){
    int numI , numJ;
    scanf("%d%d" , & numI , &numJ);      
    if ( matrix[numI][numJ] == 0)
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
void matPath(){
    int numI , numJ ;
    scanf("%d%d" , & numI , &numJ); 

    if (numI == numJ)
    {
        printf("%d\n" , -1);
    }
    else {
    for (int k = 0; k < 3; k++)
        {
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (matrix[i][j] != -1)
                    {
                        matrix[i][j] = min(matrix[i][j] , matrix[i][k] + matrix[k][j]);
                    }
                }
            }
        }
        printf("%d\n" , matrix[numI][numJ]);
    }
}
