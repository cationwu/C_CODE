#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#define DEFAULT_SZ 3
#define INC_SZ 2

//��ʾ����Ϣ
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	int age;
	char addr[MAX_ADDR];
};

//ͨѶ¼
struct Contact
{
	struct PeoInfo* data;//ָ���˴�����ݵĿռ�
	int sz;//�Ѿ��Ž�ȥ����Ϣ
	int capacity;//����
};

//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc);

//�����˵���Ϣ��ͨѶ¼
void AddContact(struct Contact* pc);

//��ʾͨѶ¼�е���Ϣ
void ShowContact(struct Contact* pc);

//ɾ��ָ����ϵ��
void DelContact(struct Contact* pc);

//����ָ����ϵ��
void SearchContact(struct Contact* pc);

//�޸�ָ����ϵ����Ϣ
void ModifyContact(struct Contact* pc);

//����ͨѶ¼�е���Ϣ-������
void SortContact(struct Contact* pc);

//����ͨѶ¼
void DestroyContact(struct Contact* pc);

//����ͨѶ¼
void SaveContact(struct Contact* pc);

//�����ļ�����Ϣ��ͨѶ¼
void LoadContact(struct Contact* pc);