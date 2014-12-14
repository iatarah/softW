/**
* Program takes string from user and calculates length, number of words and * reverse printing
*/

#include<stdio.h>
#include<stdlib.h>
// function xstrlen computes the length of the string
// takes char pointer as input and ouputs integer value
// blank spaces are counted as characters
 
int xstrlen ( const char *s ){

	int length = 0 ; 			// holds the length of the string
	while ( *s != '\0' ) 	// s is a pointer to the string
	{
		length++ ;
		s++ ;
	}
	
	return ( length ) ;
}


// function xstrwords computes the number of words in the string
// blank spaces between words no matter their number are not counted 
int xstrwords(const char *sentence)
{
	int i, count=0;
	int limit = xstrlen(sentence);
	for (i=0; i<=limit; i++)   
        {
        if(sentence[i]== ' ' || sentence[i]== '\0')   
               
                count++;
                
	
        }
   

    return count;
}


// revprint prints the string in reverse order
void revprint( char str[]){
	int i =0, j = xstrlen(str) -1 ;
	char temp;
   
    while (i < j) {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      i++;
      j--;
   }
 printf("%s", str);

}

int main()
{
    
    
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin); 
    printf("Length: %d, Words: %d, Reverse: ",xstrlen(str), xstrwords(str));
    revprint(str);
    printf("\n");
   
}

