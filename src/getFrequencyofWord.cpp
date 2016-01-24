/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)
		return NULL;
	int length1 = 0, length2 = 0, index = 0, index1 = 0, index2 = 0, w = 0, flag = 0,count=0;
	char *s = (char *)malloc(length1*sizeof(char));
	char *su = (char *)malloc(length2*sizeof(char));
	while (str[index1] != '\0')
	{
		if (str[index1] == ' ')
		{
			index1++;
			continue;
		}
		length1++;
		s = (char *)realloc(s, length1);
		s[index++] = str[index1++];
	}
	s[index] = '\0';
	index = 0;
	while (word[index2] != '\0')
	{
		if (word[index2] == ' ')
		{
			index2++;
			continue;
		}
		length2++;
		su = (char *)realloc(su, length2);
		su[index++] = word[index2++];
	}
	su[index] = '\0';
	if (s[0] == NULL && su[0] == NULL)
	{
		flag = 1;
		w = index1 / index2;
	}
	if (flag == 0){
		for (index1 = 0; index1 < length1; index1++)
		{
			count = 0;
			int k = index1;
			for (index2 = 0; su[index2] != '\0'; index2++)
			{
				if (s[k] != su[index2])
				{
					k++;
					break;
				}
				else
				{
					count = count + 1;
					k++;
				}
			}
			if (count == length2)
				w = w + 1;
		}
	}
	return w;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

