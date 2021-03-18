//Include definitions for C Runtime Library functions used in this program
#include <stdio.h>				//The standard I/O functions
#include <ctype.h>                             //Classification library 

int main(void) {
  //initalizing ints to track values
  int totalUpperCase = 0;
  int totalLowerCase = 0;
  int totalVowels = 0;
  int totalConsonants = 0;
  int totalDigits = 0;
  int total = 0;
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
    if(inputStream == 'A' || inputStream == 'a' || inputStream == 'E' || inputStream == 'e' || inputStream =='I' || inputStream == 'i' || inputStream == 'O' || inputStream == 'o' || inputStream == 'U' || inputStream == 'u' || inputStream == 'Y' || inputStream == 'y'){
      totalVowels++;
    }else if(isalpha(inputStream)){
      totalConsonants++;
    }
  } 
  // print statements for all tracked values
  printf("upper-case: %d\n", totalUpperCase);
  printf("lower-case: %d\n", totalLowerCase);
  printf("vowels: %d\n",totalVowels);
  printf("consonants: %d\n",totalConsonants);
  printf("digits: %d\n", totalDigits);
  printf("total: %d\n", total);

  return 0;
}
	
