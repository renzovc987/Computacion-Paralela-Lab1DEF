#include <bits/stdc++.h>

using namespace std;

int main()
{

   int MAXIMO;
   cout<<"Dimension?"<<endl;
   cin>>MAXIMO;
   int A[MAXIMO][MAXIMO];
   int x[MAXIMO];
   int y[MAXIMO];
   for(int i =0;i<MAXIMO;i++)
   {
       for(int j=0;j<MAXIMO;j++)
       {
          A[i][j]=1+rand()%(10-1);
       }
   }
   for(int i=0;i<MAXIMO;i++)
   {
       x[i]=1+rand()%(2-1);
   }
   auto begin1 = std::chrono::high_resolution_clock::now();
   //Primer bucle
   for(int i=0;i<MAXIMO;i++)
   {
       for(int j=0;j<MAXIMO;j++)
       {
           y[i]+=A[i][j]*x[j];
       }
   }
   auto end1 = std::chrono::high_resolution_clock::now();
   auto dur = end1 - begin1;
   auto s = std::chrono::duration_cast<std::chrono::duration<double> >(dur).count();
   cout<<"1er bucle"<<endl;
   cout << s <<" s"<< endl;
   //Segundo bucle
   auto begin2 = std::chrono::high_resolution_clock::now();
   for(int j=0;j<MAXIMO;j++)
   {
       for(int i=0;i<MAXIMO;i++)
       {
           y[i]+=A[i][j]*x[j];
       }
   }
   auto end2 = std::chrono::high_resolution_clock::now();
   auto dur2 = end2 - begin2;
   auto s2 = std::chrono::duration_cast<std::chrono::duration<double> >(dur2).count();
   cout<<"2do bucle"<<endl;
   cout << s2 <<" s"<< endl;
}
