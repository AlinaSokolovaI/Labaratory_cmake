#include <iostream>
using namespace std;
void sum_array(double* array_int_time, double* array_int_data, int array_size1, int array_size2);//����� ��������
void output_array(double* array_int_data, int array_size);//����� �������
void difference_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2);//�������� �������
void sum_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2, int start_sum);//����� �������� ������� � ���������
//������������ ������������ ���� ��������
void multiplication_array(double* array_sum1, double* array_sum2, int array_size1, int array_size2);
void sum_matrix(double** matrix_int_time, double** matrix_int_data, int matrix_size);//����� ������
void output_matrix(double** matrix_int_data, int matrix_size);//����� ������