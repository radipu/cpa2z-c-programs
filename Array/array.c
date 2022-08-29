#include<stdio.h>

int main()
{
   int i;
   int arr[5] = {10,20,30,40,50};

      // declaring and Initializing array in C
      //To initialize all array elements to 0, use int arr[5]={0};
      /* Above array can be initialized as below also
      arr[0] = 10;
      arr[1] = 20;
      arr[2] = 30;
      arr[3] = 40;
      arr[4] = 50; */

   for (i=0;i<5;i++)
   {
      // Accessing each variable
      printf("value of arr[%d] is %d \n", i, arr[i]);
   }

}
