#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
   int n;
   scanf("%d", &n);
   int ar[n];
   for (int i=0; i<n; i++){
       scanf("%d", &ar[i]);
   }
   int count =0;
   for (int i=n-1; i>0; i--){
       if (ar[i]%2 == 1){
           ar[i]++;
           ar[i-1]++;
           count=count+2;
       }
   }
   bool cek = true;
   for (int i=0; i<n; i++){
       if (ar[i]%2==1){
           cek =  false;
       }
   }
   if (cek == true){
       printf ("%d", count);
   } else {
       printf ("NO");
   }
   
    return 0;
}

