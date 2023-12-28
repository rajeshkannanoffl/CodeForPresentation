#include <stdio.h>
int main(){
	char huge* h=(char huge*)0x0000ffff;
	printf("%Fp",h+0x1);
	return 0;
}

# Output:

0001:0000   // Segment : Offset