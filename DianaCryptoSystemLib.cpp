class diana{
	#define MOD(a,b) ((((a)%(b))+(b))%(b))
	private:
		int i;
	public:
		void encrypt(char *msg, int msgLen,char *key,char *EncryptedMSG){
			for(i = 0; i < msgLen; i++){
				if(msg[i] == ' ')
					EncryptedMSG[i] = ' ';
				else{
					EncryptedMSG[i] = MOD(25 - (25-(90-msg[i])) - (25-(90-key[i])),26) + 65;
				}
					
			}
			EncryptedMSG[i] = '\0';
			return;
		}
		void decrypt(char *enc, int msgLen,char *key,char *DecryptedMSG){
			for(i = 0; i < msgLen; i++){
				if(enc[i] == ' ')
					DecryptedMSG[i] = ' ';
				else
					DecryptedMSG[i] = MOD(25 - (25-(90-enc[i])) - (25-(90-key[i])),26) + 65;
			}
			DecryptedMSG[i] = '\0';
			return;
		}
};