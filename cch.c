//Include definitions for C Runtime Library functions used in this program
#include <stdio.h>				//The standard I/O functions
#include <ctype.h>                             //Classification library 

int isvowel(char c);

int main(void) {
  //initalizing ints to track values
  int totalUpperCase,totalLowerCase,totalVowels,totalConsonants,totalDigits,total = 0;
  int inputStream;
  //initialize the unput stream to get char and start the while loop
  while((inputStream = getchar()) != EOF){
    //adds to total anytime a character is processed ignores if it is a space
    total++;
    //adds to total upper characters if input is upper
    if(isupper(inputStream)){
      totalUpperCase++;
    }
    //adds to the total lower Characters if input is lowercase
    if(islower(inputStream)){
      totalLowerCase++;
    }
    //adds to the total digits if character is digit
    if(isdigit(inputStream)){
      totalDigits++;
    }
    //adds to the total Vowels in characteris a vowel
    if(isvowel(inputStream)){
      totalVowels++;
    }
	if(isalpha(inputStream)){
      totalConsonants++;
    }
  } 
  // print statements for all tracked values
  printf("\nupper-case: %d\n", totalUpperCase);
  printf("lower-case: %d\n", totalLowerCase);
  printf("vowels: %d\n",totalVowels);
  printf("consonants: %d\n",totalConsonants);
  printf("digits: %d\n", totalDigits);
  printf("total: %d\n", total);

  return 0;
}

//returns 1 if the char is vowel otherwise 0
int isvowel(char c){
	 if(c == 'A' ||c == 'a' || c == 'E' || c == 'e' || c =='I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u' || c == 'Y' || c == 'y'){
   		return 1;
	 }
	 return 0;
}
