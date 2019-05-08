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
	//输入一行字符串，并以单词的形式倒转输出
	//如果遇到空格就判断是单词
	char str[245];
	cout << "请输入一行字符串:";
	cin.get(str, 245).get();
	
	//遍历这个字符串数组
	int i = 0;
	while(str[i]) {
		//空格就跳过
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