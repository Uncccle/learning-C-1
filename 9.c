#include <stdio.h>


void main()
{
	int a=5;
	int b=6;
	int t;
	
	t=a;
	a=b;
	b=t;
	
	printf("a=%d b=%d",a, b);
	return 0;
	
	/*  复合赋值 */
	//total += 5;
	// == total = total + 5
	
	// total += (sum + 100) /2
	// total = total + (sum + 100) /2
	
	// total *= sum + 12
	// total = total * (total +12)
	
	//total /= 12+4
	// total = total / (12+4)
	
	/* 递增递减运算符  */
	// count++
	// count += 1
	// count = count + 1
	
	//反之-- 
	 
	 // a=10
	 // a++
	 // a=a+1
	 // a=11
	 
	 // ++a
	 // += 1+a
	 // 12
	
	
 } 
