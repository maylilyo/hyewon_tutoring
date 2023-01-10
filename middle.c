#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1. 1과 자기 자신만을 약수로 가지는 양의 정수를 소수(Prime Number)라고 한다. A이상 B이하의 양의 정수 중에서 소수의 개수와 소수들의 합을 구하는 프로그램을 작성하라. (5점)


void p1_isprime()
{
    // 1과 자기 자신만을 약수로 가지는 양의 정수를 소수(Prime Number)라고 한다. 
    // A이상 B이하의 양의 정수 중에서 소수의 개수와 소수들의 합을 구하는 프로그램을 작성하라. (5점)
    int A = 0, B = 0;
    int divide_cnt = 0;
    int prime_sum = 0, prime_count = 0;

    printf("A, B : ");
    scanf("%d %d", &A, &B);

	for (int i = A; i <= B; i++)
	{
		divide_cnt = 0;
		for (int j = 2; j <= B; j++)
		{
			if (i % j == 0)
				divide_cnt++;
		}
		if (divide_cnt == 1) // 나눠지는 수가 1개 뿐인 경우
        {
            prime_sum += i;
            prime_count += 1;
        }
	}
    printf("%d %d \n", prime_count, prime_sum);
}

int p2_countOfTiles(int n)
{
    // 색깔이 다른 파란색 타일과 붉은색 타일을 벽면에 붙이려고 한다. 
    //만일 벽면에 모두 25개의 타일이 들 어간다면 파란색 타일은 1 + 5 + 9 = 15개가 필요하고, 
    //붉은색 타일은 3 + 7 = 10개가 필요하다. 
    //파란색 타일과 붉은색 타일의 차이가 얼마인지 계산하는 함수 int countOfTiles(int n)를 작성하고 테스트하라.
    //단, 타일은 정사각형으로 붙여나가며 정사각형으로 타일을 붙일 수 없는 경우 남은 타일은 사 용하지 않는다. (5점)
    
    int sub = 1; //파란타일 - 붉은타일
    int total_tile = 1;
    int current_line = 0;
    int plag = 1;

    if (n == 0 || n == 1)
        return n;

    for (int i = 1; i < n; i++)
    {
        plag *= -1;
        current_line = 2*i + 1;
        if ( total_tile + current_line > n ) break;
        else
        {
            total_tile += current_line;
            sub += (plag * current_line);
        }
    }
    return sub;
}

int p3_sumWithReverse(int n)
{
    //특정 숫자 N(1≤N≤999,999)을 입력받아 거꾸로 뒤집어서 
    //원래 숫자와 덧셈을 하는 함수 int sumWithReverse(int n)를 만들고 테스트하라. (5점)
    int new_value = 0;
    int value = n;
    int remainder;
    
    while(value != 0)
    {
        remainder = value % 10;
        value = value/10;
        new_value = new_value*10 + remainder;
    }
    return n + new_value;
}

int p4_totalSalary(int n)
{
    //욕심쟁이 쌀가게 주인이 당신을 직원으로 고용하려고 한다. 
    //당신을 매우 순진하게 본 주인은 당신에게 급여(품삯)로 매일 다음과 같이 쌀을 주기로 약속한다. 
    //오늘과 내일은 쌀을 한 톨씩 주고 3일째 되는 날부터 그 전 이틀 치를 합한 만큼의 쌀을 주겠다고. 
    //그러니까 3일째는 쌀 두 톨, 4일째는 세 톨, 5일 째는 다섯 톨, 6일째는 여덟 톨을 주겠다는 얘기다. 
    //하지만 이 어리석은 주인은 이 계약이 얼마나 무서 운지 전혀 알지 못했고, 매우 영리한 당신은 당연히 조건을 수락하였다. 
    //당신이 n일 동안 일을 했을 때 받게 되는 쌀이 총 몇 톨인지를 계산하여 리턴하는 함수를 만들고 테스트하라.
    int days = n - 2;
    int rice = 0;
    int r1 = 1, r2 = 1;
    int total = r1 + r2;
    if (n <= 2)
        return n;
    for(int i = 3; i <= n; i++)
    {
        rice = r1 + r2;
        r1 = r2;
        r2 = rice;
        total += rice;
    }
    return total;
}

void p5_Product(int a, int b, int result)
{
    if (b == 0)
        printf("%d\n", result);
    else
    {
        result = result + a;
        b--;
        p5_Product(a,b,result);
    }
}

void p5_Quotient(int a, int b, int result)
{
    if (a < b)
        printf("%d\n", result);
    else
    {
        result++;
        a = a - b;
        p5_Quotient(a, b, result);
    }
}


void p5_Remain(int a, int b, int result)
{
    if (a < b)
        printf("%d\n", a);
    else
    {
        result++;
        a = a - b;
        p5_Remain(a, b, result);
    }
}

void p5_PQR(int a, int b)
{
    // 양의 정수 a와 b의 곱(Product), a를 b로 나눈 몫(Quotient), 
    // a를 b로 나눈 나머지(Remain)를 구하는 함수를 각각 만들고 테스트하라. 
    // 단, 덧셈과 뺄셈을 제외한 산술 연산자(*, /, %)는 사용할 수 없고, 
    // 순환(재귀) 호출 기법을 사용한다. (7점)
    int result = 0;
    
    p5_Product(a,b,result);
    p5_Quotient(a,b,result);
    p5_Remain(a,b,result);

}

void main(void)
{
    int n;
    int a, b;
    int s2 = 0, s3 = 0, s4 = 0;

    // printf("Problem 1\n");
    // p1_isprime();
    // printf("------------\n");
    
    // printf("Problem 2\nn : ");
    // scanf("%d", &n);
    // s2 = p2_countOfTiles(n);
    // printf("%d\n", s2);
    // printf("------------\n");

    // printf("Problem 3\nn : ");
    // scanf("%d", &n);
    // s3 = p3_sumWithReverse(n);
    // printf("%d\n", s3);
    // printf("------------\n");

    // printf("Problem 4\nn : ");
    // scanf("%d", &n);
    // s4 = p4_totalSalary(n);
    // printf("%d\n", s4);
    // printf("------------\n");

    printf("Problem 5\na b : ");
    scanf("%d %d", &a, &b);
    p5_PQR(a, b);
}
