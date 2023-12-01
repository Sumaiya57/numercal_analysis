#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

#define   SIZE   10

using namespace std;

int main()
{
	 float A[SIZE][SIZE], x[SIZE], ratio ,V;
	 int i,j,k,n;


     cout<< setprecision(3)<< fixed;
	 cout<<"Enter number of unknowns: ";
	 cin>>n;
	 cout<<"Enter Coefficients of Augmented Matrix: "<< endl;
	 for(i=1;i<=n;i++)
	 {
		  for(j=1;j<=n+1;j++)
		  {
			   cout<<"a["<< i<<"]"<< j<<"]= ";
			   cin>>A[i][j];
		  }
	 }
	/* Applying Gauss Elimination */
	 for(i=1;i<=n-1;i++)
	 {
		  if(A[i][i] == 0.0)
		  {
			   cout<<"Mathematical Error!";
			   exit(0);
		  }
		  for(j=i+1;j<=n;j++)
		  {
			   ratio = A[j][i]/A[i][i];

			   for(k=1;k<=n+1;k++)
			   {
			  		A[j][k] = A[j][k] - ratio*A[i][k];
			   }
		  }
	 }
	 /* Obtaining Solution by Back Substitution Method */
	 x[n] = A[n][n+1]/A[n][n];

	 for(i=n-1;i>=1;i--)
	 {
		  x[i] = A[i][n+1];
		  for(j=i+1;j<=n;j++)
		  {
		  		x[i] = x[i] - A[i][j]*x[j];
		  }
		  x[i] = x[i]/A[i][i];
	 }

	 /* Displaying Solution */
	 cout<< endl<<"Solution: "<< endl;
	 for(i=1;i<=n;i++)
	 {
	  	cout<<"x["<< i<<"] = "<< x[i]<< endl;

	 }
	 if(i=1){
        int V;
        V=36*x[i]+6*x[i+1]+x[i+2];
	 }
	 cout<<V<<endl;

	 return(0);
}
