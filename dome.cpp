#include <iostream>
#include <Windows.h>
#include <string>
#include <cstring>

const int Size = 32;
using namespace std;

struct student{
	char name[Size];
	int age;
	char sex[Size];

};

int main(void) {
	//����һ���ַ��������Ե��ʵ���ʽ��ת���
	//��������ո���ж��ǵ���
	char str[245];
	cout << "������һ���ַ���:";
	cin.get(str, 245).get();
	
	//��������ַ�������
	int i = 0;
	while(str[i]) {
		//�ո������
		while(str[i] == ' ') i++;

		int j = i;
		while(str[j] && str[j] != ' ') j++;

		for(int k1 = i, k2 = j - 1; k1 < k2; k1++, k2--) {
			char ch = str[k1];
			str[k1] = str[k2];
			str[k2] = ch;
		}

		i = j;
	}
	
	for(int k1 = 0, k2 = i - 1; k1 < k2; k1++, k2--) {
			char ch = str[k1];
			str[k1] = str[k2];
			str[k2] = ch;
	}

	cout << str << endl;

	system("pause");
	return 0;
}