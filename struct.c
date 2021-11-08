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
	r1.item = "급여";
	r1.io = 1;
	r1.money = 900000;

	r2.date = "09-11-02";
	r2.item = "외식비";
	r2.io = 2;
	r2.money = 70000;

	printf("%s ", r1.date);
	if (r1.io == 1)
		printf("입금 : ");
	else
		printf("출금 : ");
	printf("%s %d원 \n", r1.item, r1.money);

	printf("%s ", r2.date);
	if (r2.io == 1)
		printf("입금 : ");
	else
		printf("출금 : ");
	printf("%s %d원 \n", r2.item, r2.money);
}
*/
/*
struct sample
{
	int no;
	char name[20]; //수정할 수 없는 상수
	int page;
	double price;
};

void main()
{
	struct sample book;

	book.name = "전자회로";
	//printf("책 제목 등록 :");
	//scanf("%s", book.name);
	printf("책 번호 등록 :");
	scanf("%d", &book.no);
	printf("책 페이지 등록 :");
	scanf("%d", &book.page);
	printf("책 가격 등록 :");
	scanf("%f", &book.price);

	printf("\n 신규 등록 도서 \n");
	printf("제목 = %s \n", book.name);
	printf("번호 = %d \n", book.no);
	printf("페이지 = %d \n", book.page);
	printf("가격 = $%.2f \n", book.price);
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
	MEMBER m1 = { "홍길동", 20, "학생", "남자" };

	printf("신규 등록 회원 \n");
	printf("성명: %s \n", m1.name);
	printf("나이: %d \n", m1.age);
	printf("직업: %s \n", m1.job);
	printf("성별: %s \n", m1.sex);
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

	printf("성명: %s \n", m1.name);
	printf("주소: %s \n", m1.address);
	printf("전화: %s \n", m1.tel);
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
	MEMBER m1 = { "히딩크", 50, "감독" },
		m2 = { "홍명보", 40, "코치" },
		m3 = { "박지성", 30, "선수" };

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
	printf("합계 = %f \n", sum);
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
	MEMBER m[3] = { {"히딩크",50,"감독"},{"홍명보",40,"코치"},{"박지성",30,"선수"} };

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
		printf("이름 : ");
		gets(m[i].name);
		if (m[i].name[0] == '0')
			break;
		printf("주소 : ");
		gets(m[i].juso);
		printf("전화번호 : ");
		gets(m[i].tel);
	}
	printf("\n 신규 등록 회원 안내 \n");
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

	printf("MEMBER의 크기 : %d \n", sizeof(kim));
	printf("RECORD 크기 : %d \n", sizeof(r1));
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
	MEMBER* p = &hong; //포인터변수 p는 변수 hong의 주소값을 저장

	strcpy(p->name, "Hong Gil Dong"); //car name[20]을 Hong Gil Dong으로 저장
	p->kor = 90;
	p->eng = 80;

	printf("학생 성적\n");
	printf("이름 : %s \n", (*p).name);
	printf("국어 : %d \n", (*p).kor);
	printf("영어 : %d \n", (*p).eng);
}
*/
/*
struct man {
	char* name;
	int age;
	char* job;
}*student; //구조체의 포인터변수 사용

void main()
{
	student = (struct man*)malloc(sizeof(struct man)); //구조체의 크기만큼 메모리를 할당해서 구조체 포인터변수에 삽입
	student->name = "홍길동"; //malloc 함수 문제? 잘 모르겠음
	student->age = 20;
	student->job = "학생";

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
	float avg; //데이터 손실을 막기위해서 float 사용
};

void main()
{
	struct man a, * pa;
	pa = &a;
	strcpy(a.name, "Hong Gil Dong"); //a.name에 Hong Gil Dong 을 저장
	a.kor = 86; // pa->kor = 86;
	a.eng = 90;
	a.math = 75;
	a.total = a.kor + a.eng + a.math;
	a.avg = a.total / 3.0;

	printf("이름 : %s \n", (*pa).name);
	printf("국어 : %d \n", (*pa).kor); // pa->kor
	printf("영어 : %d \n", (*pa).eng);
	printf("수학 : %d \n", (*pa).math);
	printf("총점 : %d \n", (*pa).total);
	printf("평균 : %.2f \n", (*pa).avg);
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

	lux.name = "럭스";
	lux.hp = 100;
	lux.mana = 100;
	lux.positionX = 100;
	lux.positionY = 100;

	info(lux);
	goHome(&lux);
	printf("위치 : %.2f, %.2f", lux.positionX, lux.positionY);
}

void info(SUMMONER s)
{
	printf("이름 : %s \n", s.name);
	printf("체력과 마나 : %d, %d\n", s.hp, s.mana);
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
	printf("s 주소 = %#x, s 크기 = %d \n", &s, sizeof(s));
	printf("s.c 주소 = %#x \n", s.c);
	printf("s.i 주소 = %#x \n", &s.i);
	printf("s.f 주소 = %#x \n", &s.f);

	printf("u 주소 = %#x, u 크기 = %d \n", &u, sizeof(u));
	printf("u.c 주소 = %#x \n", u.c);
	printf("u.i 주소 = %#x \n", &u.i);
	printf("u.f 주소 = %#x \n", &u.f);
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

	data.w = 0x3355; //WORD와 BYTE가 같은 주소에서 저장되기 시작함

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
	printf("%#x \n", CH1.ST.CONFIG); //순서는 왜 44 33 22 11 로 출력되는가?
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