#include "header181.h"
#include "MatPart181_2\header_functions181.h"

#include <boost/program_options.hpp>

using namespace boost::program_options;

void on_array_size(int number)
{
	std::cout << "On array_size: " << number << '\n';
}
void on_matrix_size(int number)
{
	std::cout << "On matrix_size: " << number << '\n';
}

void main(int argc, const char* argv[]){
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int default_size = 17;//����������� �������� �������� 
	int array_size = default_size;
	int matrix_size = 7;
	
	try//������ ����� ��������� ������
	{
		options_description desc{ "Options" };
		desc.add_options()
			("help,h", "Help screen")
			("array_size", value<int>()->notifier(on_array_size), "Array_size")//������ ��������
			("matrix_size", value<int>()->notifier(on_matrix_size), "Matrix_size");//������ ������

		variables_map vm;

		store(parse_command_line(argc, argv, desc), vm);
		notify(vm);
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("array_size")) {
			std::cout << "Array_size: " << vm["array_size"].as<int>() << '\n';
			array_size = vm["array_size"].as<int>();//���������� � ��� ������ �������� �� ��������� ������
		}
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("matrix_size")) {
			std::cout << "Matrix_size: " << vm["matrix_size"].as<int>() << '\n';
			matrix_size = vm["matrix_size"].as<int>();//���������� � ��� ������ �������� �� ��������� ������
		}
		
	}
	catch (const error& ex)
	{
		std::cerr << ex.what() << '\n';
	}

	//���� ������ � ��������� � ���������
	double *array_int_time = new double[array_size];
	double *array_int_data = new double[array_size];
	double **matrix_int_time = new double*[matrix_size];
	double **matrix_int_data = new double*[matrix_size];
	for(int i = 0; i < matrix_size; i++) {
		matrix_int_time[i]=new double[matrix_size]; 
		matrix_int_data[i]=new double[matrix_size]; 
	}

	initialization(array_int_time, array_int_data, array_size,matrix_int_time, matrix_int_data, matrix_size);
	printf("������ data: \n");
	output_array(array_int_data, array_size);
	printf("������ time: \n");
	output_array(array_int_time, array_size);
	printf("����������� � ��������� ������� �������, ��������� ������� �������: \n");
	sum_array(array_int_data, array_int_time, array_size, array_size);
	output_array(array_int_data, array_size);
	printf("��������� �������: \n");
	difference_array(array_int_data, array_int_time, array_size, array_size);
	output_array(array_int_data, array_size);
	printf("����������� � ��������� ������� �������, ��������� ������� ������� ������� � �������� 5: \n");
	sum_array(array_int_data, array_int_time, array_size, array_size,5);
	output_array(array_int_data, array_size);

	printf("������� data: \n");
	output_matrix(matrix_int_data, matrix_size);
	printf("������� time: \n");
	output_matrix(matrix_int_time, matrix_size);
	printf("����������� � ��������� ������ �������, ��������� ������ �������: \n");
	sum_matrix(matrix_int_data, matrix_int_time, matrix_size);
	output_matrix(matrix_int_data, matrix_size);
	
	system("pause");
}


