#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
void main() 
{
	setlocale (LC_CTYPE,"ua"); 

	int colCount;
	int result; 
	

	printf("¬ведiть розм≥р масиву: ");
	scanf("%d", &colCount);
	int a[colCount];

	for (int i=0; i<colCount; i++) {
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
    }
    MaxArrayElementIndex(a,colCount);
}

int MaxArrayElementIndex(int array[], int colCount) {
	int max = 0,maxIndex = 0;
	for(int i = 0; i < colCount; i++) {
		if(array[i] % 2 == 0) {
			if(array[i] > max) {
			max = array[i];
			maxIndex = i;
			}
		}
	}
	if(max == 0) {
		printf("ѕарних елементшв немаЇ! \n\n\n");
		return 0;
	}
	else {
		printf("Iндекс найбiльшого парного числа масиву: %d\n\n\n", maxIndex);
	}
 }
