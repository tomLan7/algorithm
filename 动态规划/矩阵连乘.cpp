#include"pch.h"
/*
计算矩阵乘积的标准算法，一个p×q矩阵 乘 q×r矩阵 结果为p×r矩阵。共需要计算p*q*r次乘。
*/
/*
	p
*/
void MatrixChain(int* p, int n, int **m, int**s) {
	
}
void test矩阵连乘() {
	int p[] = {30,35,15,5,10,20,25};
	//n个矩阵
	int n = sizeof(p) / sizeof(int);
	int** s=new int*[n+1];
	int** m = new int*[n+1];
	for (int i = 0; i <= n;i++) {
		s[i] = new int[n+1];
		memset(s[i],0,(n+1)*sizeof(int));
		m[i] = new int[n + 1];
		memset(m[i], 0, (n + 1) * sizeof(int));
	}
	MatrixChain(p,n,m,s);
}