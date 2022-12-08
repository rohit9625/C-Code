// Program to calculate sum of diagonal elements of a matrix
#include<stdio.h>
#include<conio.h>
// Function Declaration
int diagonalSum(int matrix[4][4], int size);
void printArr(int matrix[4][4], int size);
int main(){

    int matrix[4][4] = {{1,2,3,4},
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}};
    int size = sizeof(matrix)/sizeof(matrix[0]); // Size of matrix

    // printf("Matrix :- \n");
    // printArr(matrix,size);
    printf("\n>>Diagonal sum of above matrix = %d \n",diagonalSum(matrix,size));

    getch();
    return 0;
}
// Function Definition
int diagonalSum(int matrix[4][4], int size){
    int sum = 0;
    // Brute Force Approach
    // for(int i=0; i<size; i++){
    //     for(int j=0; j<size; j++){
    //         if(i == j){
    //             sum += matrix[i][j];
    //         }
    //         if(i+j == size-1){
    //             sum += matrix[i][j];
    //         }
    //     }
    // }
    
    // Optimized Approach
    for(int i=0; i<size; i++){
        // PD
        sum += matrix[i][i];

        // SD
        if(i != size-i-1){
            sum += matrix[i][size-i-1];
        }
    }
    return sum;
}
// Print matrix
void printArr(int matrix[4][4], int size){

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
