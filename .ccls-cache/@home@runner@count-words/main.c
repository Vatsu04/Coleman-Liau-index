/* 

Coleman-Liau index:
index = 0.588 * L - 0.296 * S - 15.8
	L is average number of letters per 100 words

L = 100.0 * num_letters




	S is average number of sentences per 100 words.

S = 100.0 * num_sentences

*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[100];
    int i;
    int words=0, characters=0, spaces=0,sentences=0;
    printf("Please enter the string: \n");
    fgets(str, 100, stdin);
    i=0;
    while(str[i] != '\0') {
        if(str[i] == ' ') {
            spaces++;
        } else {
            characters++;
            if(str[i+1] == ' ' || str[i+1] == '\n' || str[i+1] == '\t' || str[i+1] == '\0') {
                words++;
            }
			if(str[i] =='.' || str[i] == '!' || str[i] == '?'){
				sentences++;
			}
        }
        i++;
    }
	words--;
	characters--;
  float	L = 100.0 * characters;
  float	S = 100.0 * sentences;
	float index = 0.0588 * L - 0.296 * S - 15.8;
    printf("\nTotal words: %d", words);
    printf("\nTotal characters: %d", characters);
    printf("\nTotal spaces: %d", spaces);
	printf("\nTotal sentences: %d", sentences);
	printf("\nPhrase complexity: %.2f", index);
	/* 

Coleman-Liau index:
index = 0.588 * L - 0.296 * S - 15.8
	L is average number of letters per 100 words

L = 100.0 * num_letters




	S is average number of sentences per 100 words.

S = 100.0 * num_sentences

*/
    return 0;
}