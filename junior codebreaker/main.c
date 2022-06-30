/*
 * File:   main.c
 * Author: <your name here>
 */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

/*
 * Junior Codebreaker Programming Assignment
 */
int main(int argc, char** argv)
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the
	// automated grader on Coursera
	char input[MAX_LENGTH];
	fgets(input, MAX_LENGTH, stdin);
	while (input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed

		int n=strlen(input)-1;
		int cnt[26]={0};
		for(int i=0;i<n;i++)
        {
            if(input[i]-'a'>=0&&input[i]-'a'<26)
            {
                cnt[input[i]-'a']++;
            }
            else if(input[i]-'A'>=0&&input[i]-'A'<26)
            {
                cnt[input[i]-'A']++;
            }
        }

        for(int i=0;i<26;i++)
        {
            if(cnt[i]>0)
            {
                printf("%c%d ",'A'+i,cnt[i]);
            }
        }
        printf("\n");

		// Don't add or modify any code below
		// this comment
		fgets(input, MAX_LENGTH, stdin);
	}

	return 0;
}
