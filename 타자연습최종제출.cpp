#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void gotoxy(int x, int y);
void loading1();
void loading2();
void screen1();
void screen2();
void screen3(int return_score);
void taja1();
void taja2();
void select();
void screen3end();
void gamescreen();
void work_harder();
void perfect();

int main()
{
	int key;

	system("mode con cols=90 lines=47");

	screen1();//����ȭ�� ���

	if (kbhit() == 0)
	{
		key = getch();
		system("cls");
	}//�ƹ�Ű�� �Է¹ް� ȭ�� ����
	select();//����ȭ��



	return 0;
}


void work_harder()
{
	printf("\n        _      _                _        _                        _                _ \n");
	printf("       | |    | |              | |      | |                      | |              | |\n");
	printf("       | |    | |  ___   _ __  | | __   | |__     __ _  _ __   __| |  ___   _ __  | |\n");
	printf("       | | /��| | / _ �� | '__|| |/ /   | '_ ��  / _` || '__| /  _` |/ _ �� | '__|| |\n");
	printf("       ��  /��  /| (_) | | |   |   <    | | | | | (_| || |    | (_| ||  __/ | |   |_|\n");
	printf("        ��/  ��/ ��___/  |_|   |_|��_�� |_| |_| ��__,_||_|    ��__,_|��___| |_|   (_)\n");
}

void perfect()
{
	printf("\n                  ______               __               _    _ \n");
	printf("                  | ___��             / _|             | |  | |\n");
	printf("                  | |_/ /  ___  _ __  | |_   ___   __  | |_ | |\n");
	printf("                  |  __/  / _ ��| '__||  _|/ _ �� / __|| __|| |\n");
	printf("                  | |     |  __/| |   | |  |  __/| (__ | |_ |_|\n");
	printf("                  ��_|    ��___||_|   |_|  ��___|��___|��__|(_)\n");
}

void good()
{
	printf("\n                              _____                     _  _ \n");
	printf("                              |  __ ��                 |  || |\n");
	printf("                              | |  ��/ ___    ___    __|  || |\n");
	printf("                              | | __  / _ �� /   �� /  _` || |\n");
	printf("                              | |_����| (_)| | (_)| | (_| ||_|\n");
	printf("                              ��____/ ��___/ ��___/ ��__,_|(_)\n");
}
void gotoxy(int x, int y)

{

	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}

char word1[100][100] = { "bed","again","age","and","angry","child","cow","cat",
		"circle","clean","case","climb","busy","ask","at","bad","baby","get","give",
		"go","grow","hurt","keep","come","eat","lay","hit","left","say","read",
		"ring","wake","write","wind","take","tell","will","win","steal","sink",
		"lie","stand","spell","sit","may","set","sweep","girl","boy","good","guy",
		"hard","half","key","kind","it","into","land","late","later" };//word1 ���̵� ����60��

char word2[100][100] = { "progress","medium","mercy","vacant","technical",
			"summon","orchard","antibiotic","resemble","compassion","preoccupation",
			"propaganda","consistent","soliatry","gymnastics","skyscraper",
			"yeast","inquire","migrate","spectacle","surplus","overlap",
			"intergration","hypothesis","affirm","fortress","armor",
			"abscure","correspond","prophecy","vomit","vaccine","mutation",
			"tyrant","inevitable","emigrate","censorship","shiver","ongoing",
			"mention","privilege","coordinate","savage","province","outlaw",
			"squeeze","breakthrough","orphan","negotiate","tremendous" };//word2 ���̵� �����50��

void loading1()//���� ���� �� �ε�ȭ��
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 23; j++)
		{
			printf("\n");
		}
		for (int j = 0; j < 35; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("��");
		}
		for (int j = i; j < 10; j++) {
			printf("��");
		}
		printf("\n                                ����� ������ ���۵˴ϴ�!");
		Sleep(200);
		system("cls");
	}

}

void loading2()//���� ���� �� �ε�ȭ��
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 23; j++)
		{
			printf("\n");
		}
		for (int j = 0; j < 35; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++) {
			printf("��");
		}
		for (int j = i; j < 10; j++) {
			printf("��");
		}
		printf("\n                                ������ ���Ǵ� ���Դϴ�!");
		Sleep(200);
		system("cls");

	}

}

void screen1()
{
	printf("  _______________________________________________________________________________________\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("   _____                _                ______                     _    _             \n");
	printf("  |_   _|              (_)               | ___ ��                  | |  (_)            \n");
	printf("    | |   _   _  _ __   _  _ __    __ _  | |_/ / _ __   __ _   ___ | |_  _   ___   ___ \n");
	printf("    | |  | | | || '_ ��| || '_ �� / _` | |  __/ | '__| / _` | / __|| __|| | / __| / _ �� \n");
	printf("    | |  | |_| || |_) || || | | || (_| | | |    | |   | (_| || (__ | |_ | || (__ |  __/ \n");
	printf("    ��_/ ��__, || .__/ |_||_| |_|��__, |��_|    |_|   ��__,_|��___|��__||_|��___| ��___| \n");
	printf("           __/ || |                __/ |                                               \n");
	printf("          |___/ |_|               |___/               \n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                             - �����Ϸ��� �ƹ� Ű�� �����ּ���\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("  _______________________________________________________________________________________\n");

}

void screen2()
{
	printf("  _______________________________________________________________________________________\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                                   ���̵��� �������ּ���.\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                                          1. ����\n");
	printf("\n");
	printf("                                          2. �����\n");
	printf("\n");
	printf("                                          3. ����\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("  _______________________________________________________________________________________\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("  _______________________________________________________________________________________\n");
}
void screen3(int return_score)
{
	printf("  _______________________________________________________________________________________\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                    	          ����� ������ %d�� �Դϴ�!\n", return_score);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                                      1. �޴�ȭ�� ������\n");
	printf("\n");
	printf("                                      2. ����\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("  _______________________________________________________________________________________\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("  _______________________________________________________________________________________\n");
	if (return_score > 29) {
		gotoxy(48, 12); perfect();
	}
	else if (30 > return_score && return_score >= 15) {
		gotoxy(54, 12); good();
	}
	else {
		gotoxy(30, 12); work_harder();
	}


}

void gamescreen() {

	gotoxy(38, 21); printf("     +_\n");
	gotoxy(38, 22); printf("��  +/+|�� \n");
	gotoxy(38, 23); printf("����+|��|.�� \n");
	gotoxy(38, 24); printf("��+��|��|.  ^_^ \n");
	gotoxy(38, 25); printf("��,��������(@030@) \n");
	gotoxy(38, 26); printf("��|_ _)��+|����/ \n");
	gotoxy(38, 27); printf("��|_ _)��+|+)_) \n");
	gotoxy(38, 28); printf("��|_ _)��+| \n");
	gotoxy(38, 29); printf(" +��_)_/ \n");
	Sleep(150);
	system("cls");
}


void taja1()
{

	srand(time(NULL));
	int i = 0;
	int j = 0; //�迭�� �ֱ� ���ؼ� ���� ���� 
	int a = rand() % 59;
	int score = 0;
	int TIME = 50; //50�� ���� 
	int tmp; // �ð������� ���� �ӽú��� ���� 
	int tmp_clock = 0; // �ð�ǥ�ø� ���� �ӽú��� 
	char ch; //_getch
	char scana[100];
	tmp = clock();
	for (int j = 0; j < 23; j++)
	{
		printf("\n");
	}
	for (int j = 0; j < 42; j++)
	{
		printf(" ");
	}
	printf("%s\n", word1[a]);
	for (int j = 0; j < 42; j++)
	{
		printf(" ");
	}
	while (clock() - tmp < TIME * 1000)
	{
		if (kbhit())
		{
			ch = getch();
			printf("%c", ch);
			if (ch == 8 && j > 0) // if backspace
			{
				j--;
				printf(" \b"); //�齺���̽� ����°� ����
			}
			else if (ch != 13) // if NOT ENTER
			{
				scana[j++] = ch;
			}
			else // ENTER
			{
				scana[j] = '\0';
				if (!strcmp(word1[a], scana))
				{
					gamescreen();
					score++;
				}
				else
				{
					system("cls");
				}
				j = 0; // �迭���� �ʱ�ȭ 
				a = rand() % 59;
				for (int j = 0; j < 23; j++)
				{
					printf("\n");
				}
				for (int j = 0; j < 42; j++)
				{
					printf(" ");
				}
				printf("%s\n", word1[a]);
				for (int j = 0; j < 42; j++)
				{
					printf(" ");
				}
			}
		}
		//�ð�ǥ�� (�׽�Ʈ��)
	   /*if(clock() - tmp_clock > 1000)
	   {
		   printf("TIME REMAINS : %d\n", TIME - (clock() - tmp) / 1000);
		   tmp_clock = clock();
	   }
	   */
		Sleep(1); //CPU ����ȭ 
	}
	loading2();
	system("cls");
	screen3(score);
	screen3end();
}

void taja2()
{

	srand(time(NULL));
	int i = 0;
	int j = 0; //�迭�� �ֱ� ���ؼ� ���� ���� 
	int a = rand() % 49;
	int score = 0;
	int TIME = 100; //100�� ���� 
	int tmp; // �ð������� ���� �ӽú��� ���� 
	int tmp_clock = 0; // �ð�ǥ�ø� ���� �ӽú��� 
	char ch; //_getch
	char scana[100];
	tmp = clock();
	for (int j = 0; j < 23; j++)
	{
		printf("\n");
	}
	for (int j = 0; j < 42; j++)
	{
		printf(" ");
	}
	printf("%s\n", word2[a]);
	for (int j = 0; j < 42; j++)
	{
		printf(" ");
	}
	while (clock() - tmp < TIME * 1000)
	{
		if (kbhit())
		{
			ch = getch();
			printf("%c", ch);
			if (ch == 8 && j > 0) // if backspace
			{
				j--;
				printf(" \b"); //�齺���̽� ����°� ����
			}
			else if (ch != 13) // if NOT ENTER
			{
				scana[j++] = ch;
			}
			else // ENTER
			{
				scana[j] = '\0';
				if (!strcmp(word2[a], scana))
				{
					gamescreen();
					score++;
				}
				else
				{
					system("cls");
				}
				j = 0; // �迭���� �ʱ�ȭ 
				a = rand() % 49;
				for (int j = 0; j < 23; j++)
				{
					printf("\n");
				}
				for (int j = 0; j < 42; j++)
				{
					printf(" ");
				}
				printf("%s\n", word2[a]);
				for (int j = 0; j < 42; j++)
				{
					printf(" ");
				}
			}
		}
		//�ð�ǥ�� (�׽�Ʈ��)
	   /*if(clock() - tmp_clock > 1000)
	   {
		   printf("TIME REMAINS : %d\n", TIME - (clock() - tmp) / 1000);
		   tmp_clock = clock();
	   }
	   */
		Sleep(1); //CPU ����ȭ 
	}
	loading2();
	screen3(score);
	screen3end();
}
void select() {
	int difficulty;
	while (1)
	{
		int choose;
		screen2();//���̵� ���� ȭ��
		gotoxy(30, 40);
		printf("���̵�(����)�� �Է����ּ���\n");
		gotoxy(45, 42);
		scanf("%d", &difficulty);//���̵� �Է¹ޱ�
		if (difficulty == 1)
		{
			system("cls");
			loading1();
			taja1();

		}
		else if (difficulty == 2)
		{
			system("cls");
			loading1();
			taja2();

		}
		else if (difficulty == 3) {
			exit(1);//������
		}
		else
		{

			printf("                          �߸��� �Է��Դϴ�. �ٽ� �õ��� �ּ���.\n");
			Sleep(1000);//������
			system("cls");
			continue;
		}
	}
}

void screen3end()
{
	int choose;
	gotoxy(30, 40);
	printf("������(����)�� �Է����ּ���\n");
	gotoxy(45, 42);
	scanf("%d", &choose);
	while (1)
	{
		if (choose == 1) {
			select();
		}
		else if (choose == 2) {
			exit(1);//������
		}
	}
}

