/*   Warisa Khan G01257446
     CS 262, Lab Section 208
     Lab 3
*/

#include <stdio.h>
#include<stdlib.h>
char menu();
char sChar();
int numVal();
void X(int N,char C);
void Plus(int N,char C);

/*main function 
 */


int main(){
	char empty;
	char C;
	int N;
	empty = ' ';
	empty = menu();
	C = ' ';
	N = 0;
/* using a switch statment to guide user input to correct function
 */
	while(C != 'Q' || C != 'q'){
	switch(empty){
		case 'C':
			C = sChar();
			break;
		case 'c':
			C = sChar();
			break;
		case 'N':
			N = numVal();
			break;
		case 'n':
			N  = numVal();
			break;
		case '1':
			if(N == 0 ||C == ' '){
				printf("The choice is not valid\n");
			}
			else{
				Plus(N,C);
				break;
			}
		case '2':
			if(N == 0 || C == ' '){
				printf("The choice is not valid\n");
			}
			else {
				 X(N,C);
				 break;
			}
		case 'Q':
			break;
		case 'q':
			break;

	}
	if(C == 'Q' || C == 'q'){
		exit(0);
	}
	empty = menu();
	}
	return 0;
	
}

/* menu that asks the user for input
 */

char menu(){
	char input[20];
	char C;
	C = ' ';

	
	do{

	printf("Please enter a character\n");

	printf("Menu Choice\t\t Input Choices\n");
	printf("Enter/Change Character \t 'C' or 'c'\n");
	printf("Enter/Change Number \t 'N' or 'n'\n");
	printf("Print Plus(+)Figure \t '1'\n");
	printf("Print(x) Figure \t '2'\n");
	printf("Quit Program \t\t 'Q' or 'q'\n");

	fgets(input, 20, stdin);
	sscanf(input, "%c", &C);

	if(C == 'C' || C == 'c'){
                break;
        }
        else  if(C == 'N' || C == 'n'){
                break;
        }
	else if(C == '1' || C == '2'){
                break;
        }
	else if(C == 'q' || C == 'Q'){
		exit(0);
	}
	else{
		printf("The choice is not valid\n");
	}
	}
	while(C != 'Q' && C != 'q');
		if(C == 'Q' || C == 'q'){
			exit(0);
		}
	
	

	return C;

	

}
/* intakes character from user and checks if it is valid
 */
char sChar(){
	char input[20];
	char C;
        C = ' ';

	printf("Enter a character input\n");
	fgets(input, 20, stdin);
	sscanf(input, "%c", &C);

	return C;

	
}
/*intakes int from user and checks if it is valid
 */
int numVal(){
	char input[20];
	int N;
        N = 0;


	while(N < 3 || N > 15){
		printf("Enter a number between 3-15:\n");
		fgets(input,20, stdin);
                sscanf(input, "%d", &N);
		
		if(N < 3 || N > 15){
			printf("The choice is not valid\n");
		}

	}

	return N;

}
/*makes the X shape formation using the character and int
 */
void X(int N, char C){
	int i;
	int j;
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			if((i == j) || (i + j) == (N - 1)){
				printf("%c", C);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
/*makes the plus sign formation using the character and int
 */
void Plus(int N, char C){
	int i;
	int j;
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			if(i == N/2){
				printf("%c", C);
			}
			else if(j == N/2){
				printf("%c",C);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

