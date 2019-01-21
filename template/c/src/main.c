

#include <stdio.h>
#include "checkMaxGeneric.h"

/*
template <typename T>
T checkMax (T a, T b) {
  return (a>b?a:b);
}

// Use Cases
//checkMax<int>(3, 7); // it will return 7
//checkMax<double>(3.0, 7.0); // it will return 7
//checkMax<char>('g', 'e'); // it will return g

*/

#define checkMax(a,b) ((a) > (b) ? (a) : (b))

//gcc recommended if you know the data types gcc specific
#define checkMaxINT(a,b)  ({int _a = (a), _b = (b); _a > _b ? _a : _b; })


DECLARE_CHECK_MAX(int)
IMPLEMENT_CHECK_MAX(int)

int main()
{
   // printf() displays the string inside quotation
   printf("C++ Equivalent code writing test...!\n");
   int i=3, j=7;
   float l=3.5, m=7.6;
   long o=300000, p=700000;
   int b = 4;
   
   printf("Check Max for int: %d\n",checkMax(i,j));
   printf("Check Max for float: %f\n",checkMax(l,m));
   printf("Check Max for long: %ld\n",checkMax(o,p));
   
   printf("Check with MaxINT: %d\n",checkMaxINT(i,j));
   
    int arr[100];
    for(int i=0;i<100;i++){
        arr[i] = i+1;
    }
    int *ptr = arr;
	
	
	printf("-------------------checkMax using #define--------------------------\n");
    b=100;
    printf("Return value: %d\n",callCheckMax(int,ptr,b));
    //cout<<"checkMax#Define b="<< b <<": "<<callCheckMax(int,p,b)<<endl;
    b=0;
    printf("Return value: %d\n",callCheckMax(int,ptr,b));
    //cout<<"checkMax#Define b="<< b <<": "<<callCheckMax(int,p,b)<<endl;

   
   
   
   return 0;
}


