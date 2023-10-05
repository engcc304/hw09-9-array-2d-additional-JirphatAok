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

    int i, j, row1, cols1, row2, cols2;

    printf("Array1 element :\n") ;
    scanf( "%d %d", &row1, &cols1 ) ;

    int matrix[ row1 ][ cols1 ] ;

    printf( "Input :\n" ) ;
    for ( i = 0 ; i < row1 ; i++ ){
        for ( j = 0 ; j < cols1 ; j++ ) {
            scanf( "%d", &matrix[ i ][ j ] ) ;
        }
    }

    printf("Array2 element :\n") ;
    scanf( "%d %d", &row2, &cols2 ) ;

    int matrix2[ row2 ][ cols2 ] ;

    printf( "Input :\n" ) ;
    for ( i = 0 ; i < row2 ; i++ ){
        for ( j = 0 ; j < cols2 ; j++ ) {
            scanf( "%d", &matrix2[ i ][ j ] ) ;
        }
    }

    int matrix3[ row1 ][ cols1 ] ;

    // printf( "Input :" ) ;
    for ( i = 0 ; i < row1 ; i++ ){
        for ( j = 0 ; j < cols1 ; j++ ) {
            matrix3[ i ][ j ] = matrix[ i ][ j ] + matrix2[ i ][ j ];
        }
    }

    printf( "Array1 + Array2 = Array3\n" ) ;
    for ( i = 0 ; i < row1 ; i++ ) {
            for ( j = 0 ; j < cols1 ; j++ ) {
                printf( "%d", matrix3[ i ][ j ] ) ;
                if ( cols1 >  j + 1 ) {
                    printf(" ") ;
                }
            }
            printf("\n") ;
        }

    return 0 ;
}