//#pragma once
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning (disable : 4996)
//
////char * strtok(char* str, char* spr) {
////	char* temp_spr = spr;  // ������ ����
////	static char* fix= str; // ���ڿ� ����
////	char* temp = fix;      // ��ū ���� ��ġ ����
////	char* temp_fix = temp; // ��ū �� ��ġ ����
////	
////	for (; *fix;fix++) {
////		for(temp_spr = spr; *temp_spr; temp_spr++)
////		 {
////			if (*fix == *temp_spr) {  // �����ڿ� ��Ī �˻�
////				*fix = NULL;
////				temp_fix = fix;
////				break;
////			}
////		}
////		if (*temp == NULL && temp_fix != fix){	//ó������ �ι��� ��������
////				temp = fix;
////				temp_fix = temp;
////			}
////		if (temp_fix != temp && temp_fix != fix) {	//�ι��ڰ� �ߺ����� ������
////				return temp;
////		}
////		if (*(fix + 1) == NULL) {  // ���ڿ� ������ �˻�	
////			fix++;
////			return temp;
////		}
////		//
////	}
////	//printf("3");
////	return fix;
////}
////----------------------------------------------------------------------
////char* strtok(char* str, char* spr) {
////	char* t_spr = spr;  // ������ ����
////	static char* fix = str; // ���ڿ� ����
////	char* temp = fix;      // ��ū ���� ��ġ ����
////	for (; *fix; fix++) {
////		for (t_spr = spr; *t_spr; t_spr++) {
////			if (*fix == *t_spr) {
////				*fix = NULL;
////			}
////		}
////		if (*temp == NULL) {	
////			temp = fix+1;
////		}
////		else if (*fix==NULL||*(fix+1)==NULL) {	
////			fix++;
////			return temp;
////		}
////	}
////	return fix;
////}
//char* strtok(char* str, char* spr) {
//	char* t_spr = spr;  // ������ ����
//	static char* fix = str; // ���ڿ� ����
//	char* temp = fix;      // ��ū ���� ��ġ ����
//	for (; *fix; fix++) {
//		int flag = 0;
//		for (t_spr = spr; *t_spr; t_spr++) {
//			if (*fix == *t_spr) {
//				flag = 1;
//				break;
//			}
//		}
//		if (flag) {
//			break;
//		}
//	}
//	for (temp = fix; *fix; fix++) {
//		for (t_spr = spr; *t_spr; t_spr++) {
//			if (*fix == *t_spr) {
//				*fix = NULL;
//				fix++;
//				return temp;
//			}
//		}
//		if (*fix == NULL || *(fix + 1) == NULL) {
//			fix++;
//			return temp;
//		}
//
//	}
//	return fix;
//}
//int main() {
//	char str[50];
//	char sprit[10];
//	char* p;
//	printf("���ڿ��� �Է��ϼ���");
//	scanf("%s", str);
//	printf("���� ���ڿ�");
//	scanf("%s", sprit);
//	p=strtok(str, sprit);
//	while (*p != NULL) {
//		printf("\n%s", p);
//		p = strtok(NULL, sprit);
//	}
//}