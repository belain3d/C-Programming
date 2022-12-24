#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NUM_WORDS 120000
#define MAX_WORD_LENGTH 64

int main() {

	srand(time(NULL));

	char guessWords[MAX_NUM_WORDS][MAX_WORD_LENGTH];
	int WordsReadIn = 0;

	FILE *f = fopen("words.txt", "r");

	if (f == NULL) {
		printf("Failed to open file!\n");
		return 0;
	}
	char input[64];

	while(fgets(input, 63, f)) {
		sscanf(input, "%s", guessWords[WordsReadIn]);
		printf("Scanned: input:%s guessWords[%d]:%s\n", input, WordsReadIn, guessWords[WordsReadIn]);
		WordsReadIn++;
	}

	printf("Total words read in: %d\n", WordsReadIn);
	fclose(f);

	int randomIndex = rand() % WordsReadIn;
	int numlives = 5;
	int numCorrect = 0;
	int oldCorrect = 0;

	int lengthOfWord = strlen(guessWords[randomIndex]);
	int letterGuessed[8] = {0, 0, 0, 0, 0, 0, 0, 0};

	int quit = 0;

}