 #include<stdio.h>

int main()
{
	int trm1=0, trm2=1, next_term,n;
	
	printf("the term upto which fibonacci is required:");
	scanf("%d",&n);
	printf("%d \n",trm1);
	if(n>1){
		printf("%d \n",trm2);
	}
	next_term=trm1+trm2;
	
	while(next_term<=n){

		trm1=trm2;
	    trm2=next_term;
	    
	    printf("%d \n",next_term);
	    
	    next_term=trm1+trm2;
	    
	}
	
	return 0;
	
	
}
