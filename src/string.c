#include <stdio.h>

#include "string.h"

char* squeeze(char s1[], char s2[])
{
	long long unsigned int bucket[4] = { 0 }; // flag for each of the 256 characters in extended ASCII
	int currChar;
	char temp;

	// sets the corrresponding flag to true for each of the ASCII characters it meets in the second string
	for (int s2char = 0; (temp = s2[s2char]) != '\0'; s2char++)
		// there's no 256-bit interger in C, so I have to insert the flag into the right index of the array
		bucket[temp >> 6] |= 1l << (63l - (temp % 64)); 
	
	/* For each character in the first string, it checks to see if
	 * there is a corresponding character in the second string.
	 * If there is, it simply skips over the character.
	 * If there isn't, it copies the character to the index specified
	 * by 'currChar' - which is the index of the first non-verified char
	 * in the string.
	 */
	for (int search = currChar = 0; (temp = s1[search]) != '\0'; search++)
		if (!((bucket[temp >> 6] >> temp % 64) & 1))
			s1[currChar++] = s1[search];

	s1[currChar] = '\0';
	
	return s1;
}
