#include <stdio.h>

int main(){
	
	int N,VC,VJ,D,TC,TJ;
	scanf("%d", &N);
	for (;N>0;N--){
		scanf("%d %d %d", &VC, &VJ, &D);
		TC = (20 - D)/VC;
		TJ = (20)/VJ;
		if (TJ > TC) printf ("Solado\n");
		else if (TJ <= TC) printf ("Gankado\n");
	}
	
	return 0;
}
