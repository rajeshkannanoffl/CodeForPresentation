#include <stdio.h>
int main(){
	char far* f=(char far*)0x0000ffff;
	printf("%Fp",f+0x1);
	return 0;
}

# Output:

0000:0000   // Segment : Offset