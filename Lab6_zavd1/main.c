#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
	setlocale (LC_CTYPE,"ua"); 
	int a,b;

	printf("Введіть значення числа а: ");
	scanf("%d", &a);
	printf("Введiть значення числа b: ");
	scanf("%d", &b);
	int result = SumRange(a,b);

	printf("%d\n\n\n", result);
}

int SumRange(int a,int b)
{
	int s = 0;
	
	if(a < b) {
		for(int i=0; a <= b; i++) {
			s += a;
			a++;
		}
	}
	else 
	{
		return 0;
	}

	return s;
}
