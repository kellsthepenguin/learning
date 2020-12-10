#include <stdio.h>

void something(int *some){
	*some += 1;
}

int main(){
	int a = 1;

    printf("%i\n", a);

    something(&a);

    printf("%i", a);
}