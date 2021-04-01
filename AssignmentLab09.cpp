/*
*@author Samantha Mavunga

*/
#include <iostream>
#include <random>
using namespace std;
/*
 B
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
   i=rd()%101;
   j=rd()%101;
   if(table[][]==UndefinedValue)
      table[i][j]=0;
   else table[i][j]+=1;
}
return table;
}


  
  
 /*
 C
  Write a function
searchValidEntries(int XL, int YL, int XH, int YH, ...);
that takes the values of the coordinates of the corners of the bounding box and reports the
indices and counts of the entries in A[][] with positive count values as illustrated in the example.
*/
 
 int searchValidEntries(int xL, int yL, int xH, int yH, int** table){
 
 int **array=ArrayOfIntergers(xH,yH);
 int x=0;
 int y=0;
 for (int i=xL;i<=xH;i++){
   for(int k=yL;i<=yH;k++){
     array[x][y]=table[i][j];//taking coordinates of the corners
     y++;
     }
     x++;
     y=0;
     }
     return array;
   
   }
   
/*
*Write a main program that declares an array A[101][101] and initialises it according to your
*chosen.
*/

int main{
   int row, column;
         
   int**table=new int*[row];
   
   for(int i=0;i<row;i++){
   table[i]=new int[column];
   }
      for(int j=0;j<column;j++){
        table[i][j]=0;
   
   }
   
   cout<<"\nThe first results are:"<<endl;
  searchValidEntries(101,80,1,100,table);

  cout<<"\n The second results are: "<<endl;
  searchValidEntries(101,10,20,40,table);

  cout<<"\n The third results are: "<<endl;
  searchValidEntries(101,1,90,100,table);

  cout<<"\n The fourth results are: "<<endl;
  searchValidEntries(101,40,30,70,table);

  cout<<"\n The fifth aresults are"<<endl;
  searchValidEntries(101,50,50,70,table);
  
    }
 