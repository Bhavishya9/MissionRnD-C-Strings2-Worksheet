/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){
	if (str == NULL	||	i > j	)	//return NULL when either str is NULL or the value of i is 
		return NULL;				//greater than j because they are invalid inputs.
	int index = 0,length=0;
	while (str[index++] != '\0')	//calculate the length of the string
		length++;
	if (i > length-1 || j > length-1)//if either i or j are greater than the value of the index
		return NULL;//of the last char in the string then return NULL as they i,j values are out of bounds for the string
	int size = j - i + 1;//if all the values are valid then create a result with size j-1-i
	char *result = (char *)malloc(size*sizeof(char));//allocate the memory dynamically
	int index1 = 0;
	for (index = i; index <= j; index++)//start from ith index in input string and continue to 
	{									//copy the values till jth index in input string
		result[index1++] = str[index];	
	}
	result[index1] = '\0';//assign null value at the end of the string
	return result; //return resultant string 
}
