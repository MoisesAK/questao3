#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1 , n2 , n3 ;
};

int main(){
//commit1
   int n;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("exemplo3.bin","wb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
//commit2
   for(n = 1; n < 5; ++n)
   {
      //commit3
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      fwrite(&num, sizeof(struct threeNum), 1, fptr); 
   }
   fclose(fptr); 
  
   return 0;
}
