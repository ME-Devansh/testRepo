#include <stdio.h>
int main()
{
	int n, no, s=0;
	
	//input for the operation
	printf("Enter the number you want to reverse: ");
	scanf("%d",&n);
	
	//for loop
	for(;n>0;) {
		no=n%10;
		n=n/10;
		s=s*10+no;
	}

	//printing the output number
	printf("%d\n", s);
	
	return 0;
}
//program fininshes
