#include <stdio.h>
#include <math.h>
#include <limits.h>
int matrix [10][10];
int max = INT_MIN;
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
            scanf("%3d", & matrix[i][j]);
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
            
        }
    }
    max++;    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][j] = max;
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
    for (int k = 0; k < 10; k++)
        {
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    // if (matrix[i][j] != -1)
                    // {
                        matrix[i][j] = min(matrix[i][j] , matrix[i][k] + matrix[k][j]);
                    // }
                }
            }
        }      
    if ( matrix[numI][numJ] == max)
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
    for (int k = 0; k < 10; k++)
        {
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    // if (matrix[i][j] != -1)
                    // {
                        matrix[i][j] = min(matrix[i][j] , matrix[i][k] + matrix[k][j]);
                    // }
                }
            }
        }
        printf("%d\n" , matrix[numI][numJ]);
    }
}
