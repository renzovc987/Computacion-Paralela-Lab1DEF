#include <bits/stdc++.h>
#define dimension 60
using namespace std;
void multiplicacion_bloques(int A[dimension][dimension],int B[dimension][dimension],int C[dimension][dimension],int NB)
{
   for (int k = 0; k < dimension; k += NB)
   {
        for (int j= 0; j < dimension; j += NB)
        {

            for (int i = 0; i < dimension; ++i)
            {
                for (int jj = j; jj < min(j + NB, dimension); ++jj)
                {
                    for (int kk = k; kk < min(k + NB, dimension); ++kk)
                    {
                        C[i][jj] += A[i][kk] * B[kk][jj];
                    }
                }
            }
        }
   }
}
int main()
{
   int A[dimension][dimension];
   int B[dimension][dimension];
   int C[dimension][dimension];
   for(int i=0;i<dimension;i++)
   {
       for(int j=0;j<dimension;j++)
       {
           A[i][j]=1;
       }
   }
   for(int i=0;i<dimension;i++)
   {
       for(int j=0;j<dimension;j++)
       {
           B[i][j]=1;
       }
   }
    for(int i=0;i<dimension;i++)
   {
       for(int j=0;j<dimension;j++)
       {
           C[i][j]=0;
       }
   }
   auto beginm = std::chrono::high_resolution_clock::now();
   multiplicacion_bloques(A,B,C,6);
   auto endm = std::chrono::high_resolution_clock::now();
   auto durm = endm - beginm;
   auto sm = std::chrono::duration_cast<std::chrono::duration<double> >(durm).count();
   cout<<"Multiplicacion por bloques de matrices "<<sm<<" s "<<endl;

}
