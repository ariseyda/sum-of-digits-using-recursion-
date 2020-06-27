#include<stdio.h>

//Write C code for a program that calculates the sum of digits of a number using recursion. 

int digit(int n,int sum){
	
    
    sum+=n%10;
    n=n/10;
    
    if(n>0){
    	digit(n,sum);
	}
    else{
     	return sum;
	 }

	
}
int main(){
	
	int a;
	int begin_sum=0;
	printf("Enter a number:");
	scanf("%d",&a);
	
	printf("The sum of digits of entered number:%d",digit(a,begin_sum));
	
	return 0;
}

