#include "header_functions181.h"
//����������� � ��������� ������� �������, ��������� ������� �������
void sum_array(double *array_sum1, double *array_sum2, int array_size1, int array_size2) {
	//���� ������� 4 ������ ���������, �� � ��������� ������� �� ������� ����� 
	//��������� �������� ������� ��������, � ���� ������� 5 ��������, �� �� ����������
	//� ������ �������� �������� ���������� ��������
	if(array_size1>= array_size2)
		for (int i = 0; i < array_size2; i++)
			array_sum1[i] += array_sum2[i];
	else for (int i = 0; i < array_size1; i++)
			array_sum1[i] += array_sum2[i];
}
void sum_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2, int start_sum) {
	//���� ������� 4 ������ ���������, �� � ��������� ������� �� ������� ����� 
	//��������� �������� ������� ��������, � ���� ������� 5 ��������, �� �� ����������
	//� ������ �������� �������� ���������� �������� (������� � 0)
	if (array_size1 >= array_size2)
		for (int i = start_sum; i < array_size2; i++)
			array_sum1[i] += array_sum2[i];
	else for (int i = start_sum; i < array_size1; i++)
		array_sum1[i] += array_sum2[i-start_sum];
}

//����� ������� �� �����
void output_array(double* array_numb, int array_size) {
	for (int i = 0; i < array_size; i++) {
		if (i % 10 == 0) printf("\n");
		printf("%g  ", array_numb[i]);
	}
	printf("\n");
}
//�������� ���� ��������
void difference_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2) {
	if (array_size1 >= array_size2)
		for (int i = 0; i < array_size2; i++)
			array_sum1[i] -= array_sum2[i];
	else for (int i = 0; i < array_size1; i++)
		array_sum1[i] -= array_sum2[i];
}
//������������ ������������ ���� ��������
void multiplication_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2) {
	if (array_size1 >= array_size2)
		for (int i = 0; i < array_size2; i++)
			array_sum1[i] *= array_sum2[i];
	else for (int i = 0; i < array_size1; i++)
		array_sum1[i] *= array_sum2[i];
}
//

//

// 

// 

// 

//