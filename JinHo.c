Enter file contents here
#include <stdio.h> 
#include <stdlib.h>  
 
 void print_array(int *array, int size) 
 { 
     for (int i = 0; i < size; i++) 
     {
         printf("%d ", array[i]); 
     }
     printf("\n"); 
 }  
 
 void swap(int *array, int i, int j) 
 { 
     int temp
     
     if (!array) 
     {
         return; 
     }
     
     temp = array[i]; 
     array[i] = array[j]; 
     array[j] = temp; 
 }  
 
 void insertion_sort(int *array, int size) 
 { 
     // Starts from 1. 
     for (int pass = 1; pass < size; pass++) 
     { 
         // If the last one is smaller than the previous one, then swap. 
         for (int cur = pass; cur > 0 && array[cur - 1] > array[cur]; cur--) 
         { 
             swap(array, cur - 1, cur); 
         } 
         print_array(array, size); 
     } 
 } 
 
 int main(void) 
 { 
     int size; 
     scanf("%d", &size); 
     int array[size]; 
 
 
     for (int i = 0; i < size; i++) 
     {
         scanf("%d", &array[i]); 
     }
  insertion_sort(array, size); 
    
    return EXIT_SUCCESS; 
 }
