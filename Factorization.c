#include <stdio.h>

int main() {

    int k,i=2;
    scanf("%d",&k);
    while (k!=1) {
        while (k%i==0){
        	printf("%d\n",i);
        	k/=i;
		}
		i++;
    }
    printf("0");
}
