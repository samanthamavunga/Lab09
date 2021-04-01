/*
*@author Samantha Mavunga
*Write a main program that declares an array A[101][101] and initialises it according to your
*chosen.
*/
#include <iostream>
#include <random>
using namespace std;
int main{
   int row, column;
         
   int**table=new int*[row];
   
   for(int i=0;i<row;i++){
   table[i]=new int[column];
   }
      for(int j=0;j<column;j++){
        table[i][j]=0;
   
   }
    
 /*
 
 Write a function
populateArray(..., int N);
that takes a parameter N, indicating 
how random pairs of indices hi, j,i times it should generate,
to update the entries the array A[][].
*/

int** populateArray(int table[][],int N, int UndefinedValue)
int i;
int j;
random_device rd;
for(int i=0;i<N;i++){
   i=rd()%100;
   j=rd()%100;
   if(table[][]==UndefinedValue)
      table[i][j]=0;
   else table[i][j]+=1;
}
return table;
}


  
 /*
  Write a function
searchValidEntries(int XL, int YL, int XH, int YH, ...);
that takes the values of the coordinates of the corners of the bounding box and reports the
indices and counts of the entries in A[][] with positive count values as illustrated in the example.
*/
 
 int searchValidEntries(int XL, int YL, int XH, int YH, int** table){
 
 int **array=ArrayOfIntergers(XH,YH);
 int x=0;
 int y=0;
 for (int i=XL;i<=XH;i++){
   for(int k=YL;i<=YH;k++){
     array[x][y]=table[i][j];
     y++;
     }
     x++;
     y=0;
     }
     return array;
   
   }
   }