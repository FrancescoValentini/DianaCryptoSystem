#include <stdio.h>
#include <stdlib.h>
#include "DianaCryptoSystemLib.cpp"
#include <string.h>

#ifdef _WIN32
	#include <windows.h>
#endif

int main(int argc, char** argv){
	char encmsg[15000];
	char decmsg[15000];
	diana d;
	if(argc < 4){
		#ifdef _WIN32
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		#endif
		printf("Utilizza %s <text> <key> <encrypt/decrypt>\n",argv[0]);
		#ifdef _WIN32
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
		#endif
		return -9;
	}
	if(strcmp(argv[3],"encrypt") == 0){
		//printf("Unencrypted Text: %s\n",argv[1]);
		//printf("Key %s\n",argv[2]);
		if(strlen(argv[2]) < strlen(argv[1])){
			#ifdef _WIN32
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			#endif
			printf("Attenzione! La password risulta essere pi%c corta del messaggio!\n",151);
			#ifdef _WIN32
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			#endif
		}
		d.encrypt(argv[1],strlen(argv[1]),argv[2],encmsg);
		printf("Encrypted Message: %s\n",encmsg);
		

	}
	else if(strcmp(argv[3],"decrypt") == 0){
		//printf("Encrypted Text %s\n",argv[1]);
		//printf("Key %s\n",argv[2]);
		d.decrypt(argv[1],strlen(argv[1]),argv[2],decmsg);
		printf("Decrypted Message: %s\n",decmsg);
	}
	return 0;
}
