/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels){
	if (str == NULL)//check if the string is null
	{
		*consonants = 0;//if it is then make the pointer variables point to zero 
		*vowels = 0;
	}
	else
	{
		int no_of_consonants = 0, no_of_vowels = 0;
		for (int index = 0; str[index] != '\0'; index++)//scan from the start of the string to end
		{
			if (str[index] >= 'A' && str[index] <= 'Z')//convert all the uppercase letters to lower case letters
				str[index] = str[index] + 32;
			if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')//check for vowels
				no_of_vowels++; //if it is found increment the no of vowels 
			else if (str[index] >= 'a' && str[index] <= 'z')//if it is in the range of lowercase alphabets
				no_of_consonants++;//then increment the no of consonants
		}
		*consonants = no_of_consonants;//consonants point to the no of consonants
		*vowels = no_of_vowels;//vowels point to the no of vowels
	}
}
