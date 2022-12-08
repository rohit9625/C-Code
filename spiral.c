// Program to print elements of a matrix in spiral fashion
#include<stdio.h>
#include<conio.h>
// Function Declaration
void printSpiral(int matrix[4][4], int size);

int main(){
    
    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8,},
                        {9,10,11,12},
                        {13,14,15,16}};

    int size = sizeof(matrix)/sizeof(matrix[0]); // Size of matrix

    printf(">>Elements of above matrix in spiral form :- \n");
    printSpiral(matrix,size);

    return 0;
}

// Function Definition
void printSpiral(int matrix[4][4], int size){
    int startRow = 0;
    int startCol = 0;
    int endRow = size-1;
    int endCol = size-1;

    while(startRow <= endRow && startCol <= endCol){
        // Top
        for(int j=startCol; j<=endCol; j++){
            printf("%d ",matrix[startRow][j]);
        }
        //
        // Right
        for(int i=startRow+1; i<=endRow; i++){
            printf("%d ",matrix[i][endCol]);
        }
        // Bottom
        for(int j=endCol-1; j>=startCol; j--){
            printf("%d ",matrix[endRow][j]);
        }
        // Left
        for(int i=endRow-1; i>=startRow+1; i--){
            printf("%d ",matrix[i][startCol]);
        }

        // Condition
        startRow++;
        startCol++;
        endRow--;
        endCol--;
    }
    printf("\n");
}