#include"pch.h"
/*
�������˻��ı�׼�㷨��һ��p��q���� �� q��r���� ���Ϊp��r���󡣹���Ҫ����p*q*r�γˡ�
*/
/*
	p
*/
void MatrixChain(int* p, int n, int **m, int**s) {
	
}
void test��������() {
	int p[] = {30,35,15,5,10,20,25};
	//n������
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