//PROGRAMM NAME : STAIRS
//MADE BY : ONE MILIAN

#include <stdio.h>

int count = 0;
int length = 1;
int height;

char step(){
  count++;
  return '#';
}

int main(){
  printf( "Welcome!\n" );
  printf( "Please enter how high the stairs should go." );
  scanf( "%d" , &height );
  for( int i=0; i < height ; i++ ){
    for( int j=0; j < length; j++ ){
      printf( "%c" , step() );
    }
    length++;
    printf( "\n" );
  }
  return 0;
}
