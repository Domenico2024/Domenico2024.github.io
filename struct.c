#define _CRT_SECURE_NO_WARNINGS
//#define total(x, y) x+y
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
/*
struct record
{
	char* date;
	char* item;
	short io;
	int money;
};

void main()
{
	struct record r1, r2;

	r1.date = "09-11-01";
	r1.item = "�޿�";
	r1.io = 1;
	r1.money = 900000;

	r2.date = "09-11-02";
	r2.item = "�ܽĺ�";
	r2.io = 2;
	r2.money = 70000;

	printf("%s ", r1.date);
	if (r1.io == 1)
		printf("�Ա� : ");
	else
		printf("��� : ");
	printf("%s %d�� \n", r1.item, r1.money);

	printf("%s ", r2.date);
	if (r2.io == 1)
		printf("�Ա� : ");
	else
		printf("��� : ");
	printf("%s %d�� \n", r2.item, r2.money);
}
*/
/*
struct sample
{
	int no;
	char name[20]; //������ �� ���� ���
	int page;
	double price;
};

void main()
{
	struct sample book;

	book.name = "����ȸ��";
	//printf("å ���� ��� :");
	//scanf("%s", book.name);
	printf("å ��ȣ ��� :");
	scanf("%d", &book.no);
	printf("å ������ ��� :");
	scanf("%d", &book.page);
	printf("å ���� ��� :");
	scanf("%f", &book.price);

	printf("\n �ű� ��� ���� \n");
	printf("���� = %s \n", book.name);
	printf("��ȣ = %d \n", book.no);
	printf("������ = %d \n", book.page);
	printf("���� = $%.2f \n", book.price);
}
*/
/*
typedef struct
{
	char* name[20];
	int age;
	char* job;
	char* sex;
}MEMBER;

void main()
{
	MEMBER m1 = { "ȫ�浿", 20, "�л�", "����" };

	printf("�ű� ��� ȸ�� \n");
	printf("����: %s \n", m1.name);
	printf("����: %d \n", m1.age);
	printf("����: %s \n", m1.job);
	printf("����: %s \n", m1.sex);
}
*/
/*
typedef struct {
	char* name;
	char* address;
	char* tel;
}member;

void main()
{
	member m1 = {
		"Hong Gil Dong",
		"Seoul",
		"754-9463"
	};

	printf("����: %s \n", m1.name);
	printf("�ּ�: %s \n", m1.address);
	printf("��ȭ: %s \n", m1.tel);
}
*/
/*
typedef struct {
	char* name;
	int age;
	char* job;
}MEMBER;

void main()
{
	MEMBER m1 = { "����ũ", 50, "����" },
		m2 = { "ȫ��", 40, "��ġ" },
		m3 = { "������", 30, "����" };

	printf("%10s, %3d, %5s \n", m1.name, m1.age, m1.job);
	printf("%10s, %3d, %5s \n", m2.name, m2.age, m2.job);
	printf("%10s, %3d, %5s \n", m3.name, m3.age, m3.job);
}
*/
/*
struct set {
	double x;
	double y;
};

double total(double, double);
void main()
{
	struct set v1 = { 1.5,3.5 };
	double sum = 0;

	sum = total(v1.x, v1.y);
	printf("�հ� = %f \n", sum);
}


double total(double i, double j)
{
	return sqrt(i*i + j*j);
}
*/
/*
typedef struct {
	char* name;
	int age;
	char* job;
}MEMBER;

void main()
{
	MEMBER m[3] = { {"����ũ",50,"����"},{"ȫ��",40,"��ġ"},{"������",30,"����"} };

	printf("%10s, %3d, %5s \n", m[0].name, m[0].age, m[0].job);
	printf("%10s, %3d, %5s \n", m[1].name, m[1].age, m[1].job);
	printf("%10s, %3d, %5s \n", m[2].name, m[2].age, m[2].job);
}
*/
/*
typedef struct {
	char name[20];
	char juso[40];
	char tel[10];
 }MEMBER;

void main()
{
	int i, j;
	MEMBER m[5];

	for (i = 0; i < 5; i++)
	{
		printf("�̸� : ");
		gets(m[i].name);
		if (m[i].name[0] == '0')
			break;
		printf("�ּ� : ");
		gets(m[i].juso);
		printf("��ȭ��ȣ : ");
		gets(m[i].tel);
	}
	printf("\n �ű� ��� ȸ�� �ȳ� \n");
	for (j = 0; j < i; j++)
		printf("%s %s %s \n", m[j].name, m[j].juso, m[j].tel);
}
*/
/*
typedef struct
{
	char* date;
	char* item;
	short io;
	int money;
} RECORD;

typedef struct
{
	char name[9];
	int kor;
	int eng;
}MEMBER;

void main()
{
	MEMBER kim;
	RECORD r1;

	printf("MEMBER�� ũ�� : %d \n", sizeof(kim));
	printf("RECORD ũ�� : %d \n", sizeof(r1));
}
*/
/*
typedef struct {
	char name[20];
	int kor;
	int eng;
}MEMBER;

void main()
{
	MEMBER hong;
	MEMBER* p = &hong; //�����ͺ��� p�� ���� hong�� �ּҰ��� ����

	strcpy(p->name, "Hong Gil Dong"); //car name[20]�� Hong Gil Dong���� ����
	p->kor = 90;
	p->eng = 80;

	printf("�л� ����\n");
	printf("�̸� : %s \n", (*p).name);
	printf("���� : %d \n", (*p).kor);
	printf("���� : %d \n", (*p).eng);
}
*/
/*
struct man {
	char* name;
	int age;
	char* job;
}*student; //����ü�� �����ͺ��� ���

void main()
{
	student = (struct man*)malloc(sizeof(struct man)); //����ü�� ũ�⸸ŭ �޸𸮸� �Ҵ��ؼ� ����ü �����ͺ����� ����
	student->name = "ȫ�浿"; //malloc �Լ� ����? �� �𸣰���
	student->age = 20;
	student->job = "�л�";

	printf("%s %d %s \n", student->name, student->age, student->job);

	free(student);
}
*/
/*
struct man {
	char name[20];
	int kor;
	int eng;
	int math;
	int total;
	float avg; //������ �ս��� �������ؼ� float ���
};

void main()
{
	struct man a, * pa;
	pa = &a;
	strcpy(a.name, "Hong Gil Dong"); //a.name�� Hong Gil Dong �� ����
	a.kor = 86; // pa->kor = 86;
	a.eng = 90;
	a.math = 75;
	a.total = a.kor + a.eng + a.math;
	a.avg = a.total / 3.0;

	printf("�̸� : %s \n", (*pa).name);
	printf("���� : %d \n", (*pa).kor); // pa->kor
	printf("���� : %d \n", (*pa).eng);
	printf("���� : %d \n", (*pa).math);
	printf("���� : %d \n", (*pa).total);
	printf("��� : %.2f \n", (*pa).avg);
}
*/
/*
typedef struct
{
	char* name;
	int hp;
	int mana;
	float positionX;
	float positionY;
}SUMMONER;

void info(SUMMONER);
void goHome(SUMMONER*);

void main()
{
	SUMMONER lux;

	lux.name = "����";
	lux.hp = 100;
	lux.mana = 100;
	lux.positionX = 100;
	lux.positionY = 100;

	info(lux);
	goHome(&lux);
	printf("��ġ : %.2f, %.2f", lux.positionX, lux.positionY);
}

void info(SUMMONER s)
{
	printf("�̸� : %s \n", s.name);
	printf("ü�°� ���� : %d, %d\n", s.hp, s.mana);
}

void goHome(SUMMONER*s)
{
	(*s).positionX = 0;
	(*s).positionY = 0;
}
*/
/*
struct s_type {
	char c[4];
	int i;
	float f;
}s;

union u_type {
	char c[4];
	int i;
	float f;
}u;
void main()
{
	printf("s �ּ� = %#x, s ũ�� = %d \n", &s, sizeof(s));
	printf("s.c �ּ� = %#x \n", s.c);
	printf("s.i �ּ� = %#x \n", &s.i);
	printf("s.f �ּ� = %#x \n", &s.f);

	printf("u �ּ� = %#x, u ũ�� = %d \n", &u, sizeof(u));
	printf("u.c �ּ� = %#x \n", u.c);
	printf("u.i �ּ� = %#x \n", &u.i);
	printf("u.f �ּ� = %#x \n", &u.f);
}
*/
/*
typedef unsigned char BYTE;
typedef unsigned short WORD;

typedef union {
	BYTE b[2]; //2byte
	WORD w; //2byte
}wtype;

void main()
{
	wtype data;

	data.w = 0x3355; //WORD�� BYTE�� ���� �ּҿ��� ����Ǳ� ������

	printf("Low Byte = %#x \n", data.b[0]); 
	printf("High Byte = %#x \n", data.b[1]);
}
*/
/*
typedef unsigned char BYTE;
typedef unsigned int UINT;

union message {
	UINT data;
	struct {
		BYTE CON[2];
		BYTE ARBIT;
		BYTE CONFIG;
	}ST;
}CH1;

void main()
{
	CH1.data = 0x11223344;

	printf("%#x \n", CH1.ST.CON[0]);
	printf("%#x \n", CH1.ST.CON[0]);
	printf("%#x \n", CH1.ST.ARBIT);
	printf("%#x \n", CH1.ST.CONFIG); //������ �� 44 33 22 11 �� ��µǴ°�?
}
*/
/*
typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int LONG;

typedef struct
{
	union _ID
	{
		BYTE Byte[4];
		WORD Word[2];
		LONG Long;
	}ID;

	BYTE Len;
	BYTE Error;
	BYTE Data[2];
}TX_CB_Type;

void main()
{
	int i;
	TX_CB_Type TCB;

	TCB.ID.Long = 0x11223344;
	TCB.Len = 0x55;
	TCB.Error = 0x66;
	TCB.Data[0] = 0x77;
	TCB.Data[1] = 0x88;

	for (i = 0; i < 4; i++)
		printf("%#x \n", TCB.ID.Byte[i]);

	for (i = 0; i < 2; i++)
		printf("%#x \n", TCB.ID.Word[i]);

	printf("%#x %#x %#x %#x \n", TCB.Len, TCB.Error, TCB.Data[0], TCB.Data[1]);
}
*/