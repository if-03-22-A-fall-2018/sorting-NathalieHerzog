/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "sorting_algorithms.h"

void 	init_random (int *array, unsigned long length)
{
  int random = 0;

  for(int i = 0; i < length; i++)
  {
    array[i] = random;
  }
}

void 	bubble_sort (int *array, unsigned long length)
{
  int temp;

   for (int i = 1; i < length ; i++)
   {
      for (int u = 0; u < length - i ; u++)
      {
          if (array[u] > array[u + 1])
          {
              temp = array[u];
              array[u] = array[u + 1];
              array[u + 1] = temp;
          }
      }
   }
}

void 	insertion_sort (int *array, unsigned long length)
{
  int element;
  int j;

  for(int i = 0; i < length; i++)
  {
    element = array[i];
    j = i;
    while (j > 0 && array[j] > element)
    {
       array[j+1] = array[j];
       j--;
    }
    array[j] = element;
  }
}
