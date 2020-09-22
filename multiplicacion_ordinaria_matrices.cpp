#include <bits/stdc++.h>
using namespace std;
#define dimension 55
void producto_matrices (int A[dimension][dimension],int B[dimension][dimension],int C[dimension][dimension])
{

 for (int i=0;i<dimension;i++)
 {
     for(int j=0;j<dimension;j++)
      {   C[i][j] = 0;
          for(int k=0;k<dimension;k++)
          {
               C[i][j] = C[i][j] + A[i][j] * B[i][j];
          }

      }
 }
}
int main()
{
   int A1[dimension][dimension];
   int B[dimension][dimension];
   for(int i=0;i<dimension;i++)
   {
       for(int j=0;j<dimension;j++)
       {
           A1[i][j]=1;
       }
   }
   for(int i=0;i<dimension;i++)
   {
       for(int j=0;j<dimension;j++)
       {
           B[i][j]=1;
       }
   }
   int C[dimension][dimension];
   auto beginm = std::chrono::high_resolution_clock::now();
   producto_matrices(A1,B,C);
   auto endm = std::chrono::high_resolution_clock::now();
   auto durm = endm - beginm;
   auto sm = std::chrono::duration_cast<std::chrono::duration<double> >(durm).count();
   cout<<"Multiplicacion normal de matrices "<<sm<<" s"<<endl;
}
