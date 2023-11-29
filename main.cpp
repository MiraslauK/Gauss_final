#include "gauss.h"



int main()
{
 float** arr;
 float* ans;

float a[12] = { 2.31, 31.49, 1.52, 40.95,
      4.21, 22.42, 3.85, 30.24,
      3.49, 4.85, 28.72, 42.81 };

 int  n = 3, m = 4;

 arr = Create(n, m, a);

 Out(arr, n, m);

 ans = Gauss(arr, n, m);

 OutAns(ans, 3);

 float  *ansNev = VectNevyaz(ans, a, m, n);

 cout << "ansNev : ";
 for (int i = 0; i < n; i++)
  cout << ansNev[i] << " ";

 float norma = searchNorm(ansNev, n);
 cout<< endl << "norma : " << norma << endl;

 arr = Create(n, m, a);

 float *res1 = calcMatrix(arr,ans,n);

 int j = 3;
 for (int i = 0; i < n; i++) 
  arr[i][j] = res1[i];
 

 float *ans1 = Gauss(arr, n, m);

 float err = searchError(ans,ans1,n);
 cout << "error : " << err << endl;


 return 0;
}