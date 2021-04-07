//#pragma once
//#include<stdio.h>
//#include<stdlib.h>
//#pragma warning (disable : 4996)
//
////char * strtok(char* str, char* spr) {
////	char* temp_spr = spr;  // 구분자 저장
////	static char* fix= str; // 문자열 저장
////	char* temp = fix;      // 토큰 시작 위치 저장
////	char* temp_fix = temp; // 토큰 끝 위치 저장
////	
////	for (; *fix;fix++) {
////		for(temp_spr = spr; *temp_spr; temp_spr++)
////		 {
////			if (*fix == *temp_spr) {  // 구분자와 매칭 검사
////				*fix = NULL;
////				temp_fix = fix;
////				break;
////			}
////		}
////		if (*temp == NULL && temp_fix != fix){	//처음부터 널문자 나왔을때
////				temp = fix;
////				temp_fix = temp;
////			}
////		if (temp_fix != temp && temp_fix != fix) {	//널문자가 중복으로 있을떄
////				return temp;
////		}
////		if (*(fix + 1) == NULL) {  // 문자열 마지막 검사	
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
////	char* t_spr = spr;  // 구분자 저장
////	static char* fix = str; // 문자열 저장
////	char* temp = fix;      // 토큰 시작 위치 저장
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
//	char* t_spr = spr;  // 구분자 저장
//	static char* fix = str; // 문자열 저장
//	char* temp = fix;      // 토큰 시작 위치 저장
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
//	printf("문자열을 입력하세요");
//	scanf("%s", str);
//	printf("나눌 문자열");
//	scanf("%s", sprit);
//	p=strtok(str, sprit);
//	while (*p != NULL) {
//		printf("\n%s", p);
//		p = strtok(NULL, sprit);
//	}
//}