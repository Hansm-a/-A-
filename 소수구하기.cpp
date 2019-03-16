//C언어 소수구하기 프로그램
#include <stdio.h>

int main()
{
	int input;	             //사용자가 입력한 숫자를 저장할 변수
	int count = 0;		     //약수의 개수를 카운팅할 변수
	int primecount = 0;          //input까지의 소수개수를 카운팅할 변수
	int i =0;                    //for문과 출력에 쓰일 변수 

	printf("몇번째 소수를 출력할까요? : ");
	scanf("%d",&input); 		           //입력받은 값 input에 저장
	    
	for (i=1;i<=9999999999;i++) 		   //main for문 시작 
	{
		for(int j=1;j<=i;j++) 	           //약수개수 counting for문 시작 
		{
			if(count>2)  		   //약수개수가 2개를 넘으면 counting for문 탈출 
			{
				break;
			}
			if(i%j==0) 		   //j로 나누어 떨어지는 i값이 있으면 i의 count 1증가 
			{
				count+=1;
			}
		}
		if(count==2) 			   //counting for문에서 count가 2로 나왔을 경우 소수로 판단하여 
		{
			primecount+=1; 		   //primecount를 1 증가시킨다
		}
		if(input == primecount) 	   //input 값과 primecount값이 같아지면 main for문 탈출 
		{
			break;
		}
		count=0; 			   //count를 초기화 한 후 과정을 반복한다 
	}
	printf("%d번째 소수 : %d",input,i); 	   // 결과값 출력 
}
