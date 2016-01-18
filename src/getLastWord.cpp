/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str == NULL)	//check if the string is null 
		return NULL;	//if it is null then return null
	int size = 0, index = 0, length = 0;
	while (str[index++] != '\0')	//calculate the length of the given string
		length++;
	index = index - 2;	//place the index at last letter in the string
	while (str[index] == ' ' && index > 0)	//skip all the spaces at the end
		index--;	//continue until we hit an alphabet or we reach the end of the string
	if (index <= 0 && length == 0)	//if we reached the end of the string and 
		return "";	//there arent any alphabets then return ""
	int index1 = 0;
	char *temp = (char*)malloc(size*sizeof(char));	//create a temp array
	for (int i = index; str[i] != ' ' && i >= 0; i--) //copy the last word into temp array from back
	{
		size++;
		temp = (char *)realloc(temp, size);
		temp[index1] = str[i];
		index1++;
	}
	temp[index1] = '\0';
	char *s = (char *)malloc(size*sizeof(char)); // create the resultant array 
	length = size;	//re assign the value of length with size of the temp array
	int index2 = 0;
	for (index2 = 0; index2 < size; index2++) //reverse the temp 
	{
		s[index2] = temp[length - 1]; //the reversed string is stored in s array
		length--;
	}
	s[index2] = '\0';
	return s; //return s array which is the resultant
}
