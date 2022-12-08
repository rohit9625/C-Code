// Program to find entered key by Stair Case Approach
#include<stdio.h>
#include<conio.h>
// Function Declaration
void findKey(int matrix[4][4],int size, int key);
void printArr(int matrix[4][4], int size);

int main(){

    int matrix[4][4] = {{1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12},
                        {13,14,15,16}};
    int size = sizeof(matrix)/sizeof(matrix[0]);
    int key;
    printf("Matrix :-\n");
    printArr(matrix, size);
    printf(">>Enter key : ");
    scanf("%d",&key);

    findKey(matrix,size,key);

    return 0;
}

// Function Definition
void findKey(int matrix[4][4], int size, int key){
    int row = 0, col = size-1;

    while(row < size && col >= 0){
        if(matrix[row][col] == key){
            printf("Found at (%d,%d)\n",row,col);
            return;
        }
        else if(key < matrix[row][col]){
            col--;
        }
        else{
            row++;
        }
    }
    printf("Not found :(\n");
}

void printArr(int matrix[4][4], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}