#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// ʹ�ü�����
//int my_strlen(char* str) 
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0') // while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

// ʹ�õݹ�

// 

//int main() 
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//
//	//char arr[] = { 'a','b','c','d','e','f' };
//	//int len1 = strlen(arr);
//	//printf("%d\n", len1);
//	// 
//	// my_strlen()��ʵ��
//	// 1. �������ķ���
//	// 2. �ݹ�
//	// 3. ָ�� - ָ��
//
//	int len = strlen("abcdef");
//
//	// �������ʲô��strlen()�����޷�������
//	if (strlen("abc") - strlen("abcdef") > 0) 
//	{
//		printf("�к�\n");
//	}
//	else 
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}

////char* my_strcpy(char* dest, char* src) 
//char* my_strcpy(char* dest, const char* src) 
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	//while (*src != '\0') 
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;	// '\0'
//
//	// �Ż�1
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;
//	//}
//	//*dest = *src;	// '\0'
//
//	// �Ż�2
//	// ����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	char* rest = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	// ����Ŀ�Ŀռ����ʼ��ַ
//	return rest;
//}
//
//int main() 
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	// ��arr2�����ݿ�����arr1��
//	//strcpy(arr1, arr2);
//	// ��ô������
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
