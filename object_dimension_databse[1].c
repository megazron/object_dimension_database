// OBJECT DIMENSION DATABSE //
// MINI-PROJECTT FOR DATA-STRUCTURES PRACTICAL //
// https://github.com/megazron //
/* 
Authors
Gaus Mohiuddin Sayyad SY-01 ECE 202101104015 
Karankumar Nevage SY-01 ECE 202101104018 
*/

/* 
Coordinated with unending support and direction 
Dr. Vandana B. Malode
 Department of ECT 
MGM's JNEC,
Aurangabad,
Maharashtra
BE, M.Tech,Ph.D. 
*/


#include <stdio.h> // Standard input and output function Header file
#include <stdlib.h> // Standard library Header File


//Creating a structure
struct dimn {
  
  int length;
  int width;
  int height;
  char objectname[30];
};

int main()
{
    
    printf("requesting data....\n");
    //Defining Pointer
    struct dimn *ptr;
    int numberofobjects = 3;
    printf("Number of Data Entries : \n");
    scanf("%d", &numberofobjects);
    
    // Memory Allocation for numnber of objects
    ptr = (struct dimn *)malloc(numberofobjects * sizeof(struct dimn));
    
    //Entering information in Database
     for (int i = 0; i < numberofobjects; ++i) 
     {
    printf("Enter Object name including its Length, width and Height:\n");
    
    //Accessing dimensions of a given object from the user
    scanf("%s %d %d %d", (ptr + i)->objectname, &(ptr + i)->length, &(ptr + i)->width, &(ptr + i)->height);
  }
  
  
  //Diplaying Database
  
   printf("Stored Information the your database : \n");
   
  for (int i = 0; i < numberofobjects; ++i) {
   printf("%s\t%d \t%d \t%d \n", (ptr + i)->objectname, (ptr + i)->length, (ptr + i)->width, (ptr + i)->height);
  }
  // Deallocating the pointer
  free(ptr);
  
  return 0;
}