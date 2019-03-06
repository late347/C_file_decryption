/*
 ============================================================================
 Name        : FileDecryption27.c
 Author      : late
 Version     :
 Copyright   : Your copyright notice
 Description : FileDecryption  in C, Ansi-style

 This is the  counterpart decryption program and will be in a separate project. This decryption program should have
 the following inputs available to it:

 1) total amount of files that were sourced from (five in this case by default)
 2) total amount of characters in each of the sourced text files + 5 EOF chars,
 so that basically the total amount of characters in encrypted file is known
 3) the keysettings that were used to encrypt the sourced text files
 4) the encrypted text file is available in the directory

 5) as outputs this decryption program should re-create the original 5 source text files,
 that were inside the encryptedTextFile
 6) if you want to test this program, then you can remove those decryptpii.txt type of files, but keep the
 variableencrypted.txt because thats the encryptedtext file

 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE*pointerhiili=fopen("decrypthiili.txt","w+");
	FILE*pointerhappi=fopen("decrypthappi.txt","w+");
	FILE*pointerplatina=fopen("decryptplatina.txt","w+");
	FILE*pointertitaani=fopen("decrypttitaani.txt","w+");
	FILE*pointerpii=fopen("decryptpii.txt","w+");
	FILE*pointerluku=fopen("C:\\Users\\Lauri\\eclipse-workspace\\FileDecryption27\\variableencrypted.txt","r");

	// must account for eof chars also
		//hiili 520 letters +eof
		//happi 547 letters +eof
		//platina 189 letters +eof
		//titaani 310 letters +eof
		//pii 192 letters +eof
		//
	int a=1,b=1,c=1,d=1,e=1; //boolean variables

	char letter='a'; //currently cursored character in a manner of speaking
	int first=2,second=5,third=3,fourth=3,fifth=4; //decryption keys = encryption keys
	int j=0,k=0,i=0;
	int truecount=520+547+189+310+192+5; //including eof chars

	int hiilicount=521, happicount=548,platinacount=190,titaanicount=311,piicount=193;

	do{
		if(hiilicount>0 && truecount>0){ //hiili  decrypt
			for(j=0; j<first; j++){
				letter=fgetc(pointerluku);
				fputc(letter,pointerhiili);
				hiilicount--;
				truecount--;
				if(hiilicount==0 || truecount==0){
					break;
				}
			}
		}
		if(happicount>0 &&truecount>0){//happi decrypt
			for(j=0; j<second; j++){
				letter=fgetc(pointerluku);
				fputc(letter,pointerhappi);
				happicount--;
				truecount--;
				if(happicount==0 || truecount==0){
					break;
				}
			}
		}
		if(platinacount>0&&truecount>0){
			for(j=0; j<third; j++){
				letter=fgetc(pointerluku);
				fputc(letter,pointerplatina);
				platinacount--;
				truecount--;
				if(platinacount==0 || truecount==0){
					break;
				}
			}
		}
		if(titaanicount>0 && truecount>0){
			for(j=0; j<fourth; j++){
				letter=fgetc(pointerluku);
				fputc(letter,pointertitaani);
				titaanicount--;
				truecount--;
				if(titaanicount==0 || truecount==0){
					break;
				}
			}
		}
		if(piicount>0 && truecount>0){
			for(j=0; j<fifth; j++){
				letter=fgetc(pointerluku);
				fputc(letter,pointerpii);
				piicount--;
				truecount--;
				if(piicount==0 || truecount==0){
					break;
				}
			}
		}

	}while(truecount>0);

fclose(pointerhiili);
fclose(pointerhappi);
fclose(pointerplatina);
fclose(pointertitaani);
fclose(pointerpii);
fclose(pointerluku);
printf("finished decrypting, ending program...");


	return 0;
}
