#include <stdio.h>

int main() {
    char space = ' ' ;
    char hold = 0 ;
    char input[100] ;
    int long_arr = 0 ;
    int same = 1 ;

    printf( "Input:\n" ) ;
    gets( input ) ;

    // ใช้ในการนับ ' ตัวอักษร ' ภายใน input
    for ( int i = 0 ; i < input[ i ] ; i++ ) {
        if ( input[ i ] != space ) {
            long_arr++ ;
        }//end if
    }//end for

    printf( "%d characters\n", long_arr ) ;

    // เรียงค่า A - Z โดยใช้การ swap
    for ( int i = 0 ; i < long_arr - 1 ; i++) {
        for ( int j = i + 1 ; j < long_arr ; j++ ) {
            if ( input[ i ] > input[ j ] ) {
                hold = input[ j ] ;
                input[ j ] = input[ i ] ;
                input[ i ] = hold ;
            } //end if
        } //end for
    } //end for

    //เริ่มนับจำวนที่ซ้ำกันและข้ามค่าที่อ่านไปแล้ว
    for (int i = 0; i <= long_arr; i++) {
        while (i < long_arr - 1 && input[i] == input[i + 1]) {
            same++;
            i++;
        }//end while
        if (input[i] == space) {
            printf( "white Space -> %d\n", same);
        } //end if
        else {
            printf("%c -> %d\n", input[i], same);
        }//end else
        same = 1 ; // reset ค่า  same
    } //end for


    return 0;
}