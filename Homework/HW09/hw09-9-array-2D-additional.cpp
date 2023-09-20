/*
    ผู้ใช้กรอกจำนวนอาเรย์ 2 มิติขึ้นมา 2 ชุด และกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณสร้างอาเรย์ที่ 3 ขึ้นมาเก็บผลรวมของอาเรย์ทั้ง 2 ชุดนี้ โดยกำหนดให้ Element ของ Array1 , Array2 และ Array3 เท่ากัน
    
    Test case:
        Array1 element : 
            3 3
        Input :
            1 2 3
            4 5 6
            7 8 9
        Array2 element : 
            3 3
        Input :
            1 1 1
            1 1 1
            1 1 1
    Output:
        Array1 + Array2 = Array3
            2 3 4
            5 6 7
            8 9 10

*/
#include <stdio.h>

int main() {
    int high , high_2 ;
    int Long , Long_2 ;

    printf("Array1 element:\n");
    scanf("%d %d", &high, &Long);

    int matrix[high][Long];

    printf("Input :\n");
    for ( int i = 0 ; i < high ; i++ ) {
        for ( int j = 0 ; j < Long ; j++ ) {
            scanf("%d", &matrix[i][j]) ;
        }
    }

    printf( "Array2 element:\n" ) ;
    scanf( "%d %d", &high_2, &Long_2 ) ;

    int matrix_2[high_2][Long_2];

    printf("Input :\n");

    for ( int i = 0 ; i < high_2 ; i++ ) {
        for (int j = 0 ; j < Long_2 ; j++) {
            scanf( "%d", &matrix_2[ i ][ j ] ) ;
        }
    }
    
    int matrix_3[ high ][ Long ];

    for (int i = 0; i < high; i++) {
        for (int j = 0; j < Long; j++) {
            matrix_3[i][j] = matrix[i][j] + matrix_2[i][j];
        }
    }
    printf("Array1 + Array2 = Array3\n");
        for (int i = 0; i < high; i++) {
            for (int j = 0; j < Long; j++) {
                printf("%d ", matrix_3[i][j]);
            }
            printf("\n");
        }

    return 0;
}