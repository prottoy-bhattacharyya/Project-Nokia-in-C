/*Developed by Puskar Jasu*/
#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <math.h>
int main(void)
{
	union REGS regs_in, regs_out;
	int x = 100, y = 100, i = 0, j = 0, k = 0, l = 0, n = 0, click = 0;
	int c = 1, g = 0, r = 0, u = 0, v = 0, w = 0, b = 0, d = 0, p[10];
	double s = 0, s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;
	int a = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0;
	int a7 = 0, a8 = 0, a9 = 0, a10 = 0;
	unsigned long int t1 = 1, t = 0, tt = 0;
	int graphic_driver = DETECT, graphic_mode;
	initgraph(&graphic_driver, &graphic_mode, "//turboc3/bgi");
	regs_in.x.ax = 0;
	int86(0x33, &regs_in, &regs_out);
	regs_in.x.ax = 4;
	regs_in.x.cx = 390;
	regs_in.x.dx = 455;
	int86(0x33, &regs_in, &regs_out);
	regs_in.x.ax = 7;
	regs_in.x.cx = 100;
	regs_in.x.dx = 390;
	int86(0x33, &regs_in, &regs_out);
	regs_in.x.ax = 8;
	regs_in.x.cx = 100;
	regs_in.x.dx = 455;
	int86(0x33, &regs_in, &regs_out);
	regs_in.x.ax = 1;
	int86(0x33, &regs_in, &regs_out);
	setbkcolor(2);
	setcolor(4);
	setfillstyle(1, 4);
	bar(100, 100, 390, 455);
	setfillstyle(1, 14);
	bar(110, 105, 380, 140);
	setfillstyle(1, 1);
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			bar(110 + k, 155 + l, 160 + k, 205 + l);
			k += 55;
			if (j == 4)
				k = 0;
		}
		l += 55;
	}
	k = 0;
	l = 0;
	setfillstyle(1, 1);
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			bar(110 + k, 270 + l, 150 + k, 310 + l);
			k += 45;
			if (j == 5)
				k = 0;
		}
		l += 45;
	}
	setcolor(15);
	settextstyle(1, 0, 1);
	outtextxy(115, 152, "sin");
	setcolor(2);
	outtextxy(113, 180, "sin");
	outtextxy(140, 178, "-1");
	setcolor(15);
	outtextxy(170, 152, "cos");
	setcolor(2);
	outtextxy(168, 180, "cos");
	outtextxy(195, 178, "-1");
	setcolor(15);
	outtextxy(230, 152, "tan");
	setcolor(2);
	outtextxy(222, 180, "tan");
	outtextxy(250, 178, "-1");
	setcolor(15);
	outtextxy(285, 152, "log");
	setcolor(2);
	outtextxy(285, 180, "in");
	setcolor(15);
	outtextxy(340, 156, "x");
	outtextxy(353, 150, "2");
	setcolor(2);
	outtextxy(340, 180, "x");
	outtextxy(353, 175, "3");
	setcolor(15);
	settextstyle(1, 0, 3);
	//	outtextxy(115, 152 + 60, "");
	outtextxy(170, 152 + 60, "rad");
	settextstyle(1, 0, 2);
	outtextxy(223, 155 + 58, "shift");
	outtextxy(283, 155 + 58, "AC");
	outtextxy(333, 155 + 55, "stop");
	setcolor(15);
	settextstyle(1, 0, 4);
	outtextxy(120, 270, "7");
	outtextxy(165, 270, "8");
	outtextxy(210, 270, "9");
	outtextxy(255, 270, "*");
	outtextxy(300, 270, "/");
	outtextxy(345, 270, "%");
	outtextxy(120, 270 + 45, "4");
	outtextxy(165, 270 + 45, "5");
	outtextxy(210, 270 + 45, "6");
	outtextxy(255, 270 + 45, "+");
	outtextxy(300, 270 + 45, "-");
	outtextxy(345, 270 + 45, "=");
	outtextxy(120, 270 + 90, "1");
	outtextxy(165, 270 + 90, "2");
	outtextxy(210, 270 + 90, "3");
	outtextxy(255, 270 + 90, "x!");
	//	outtextxy(300, 270 + 90, "");
	settextstyle(1, 0, 3);
	outtextxy(345, 270 + 90, "û");
	settextstyle(1, 0, 4);
	outtextxy(120, 270 + 135, "0");
	outtextxy(165, 270 + 135, ".");
	outtextxy(210, 270 + 135, "^");
	outtextxy(255, 270 + 135, "ã");
	settextstyle(1, 0, 1);
	outtextxy(292, 270 + 140, "+/-");
	//	outtextxy(335, 270 + 140, "");
in:
	i = 0;
	while (1)
	{
		while (1)
		{
			regs_in.x.ax = 3;
			int86(0x33, &regs_in, &regs_out);
			click = regs_out.x.bx;
			x = regs_out.x.cx;
			y = regs_out.x.dx;
			/*sin*/
			if ((x >= 110 && x <= 160) && (y >= 155 && y <= 205) && click == 1)
			{
				g = 1;
				i = 6;
				r = 1;
				v = 10;
				a4 = 1;
				a7 = 1;
				break;
			}
			/*cos*/
			if ((x >= 165 && x <= 215) && (y >= 155 && y <= 205) && click == 1)
			{
				g = 1;
				i = 6;
				r = 1;
				v = 11;
				a4 = 1;
				a7 = 1;
				break;
			}
			/*tan*/
			if ((x >= 220 && x <= 270) && (y >= 155 && y <= 205) && click == 1)
			{
				g = 1;
				i = 6;
				r = 1;
				v = 12;
				a4 = 1;
				a7 = 1;
				break;
			}
			/*log*/
			if ((x >= 275 && x <= 325) && (y >= 155 && y <= 205) && click == 1)
			{
				g = 1;
				i = 6;
				r = 1;
				v = 9;
				a4 = 1;
				a7 = 1;
				break;
			}
			/* pow*/
			if ((x >= 330 && x <= 380) && (y >= 155 && y <= 205) && click == 1)
			{
				r = 1;
				v = 8;
				u = 13;
				a6 = 0;
				break;
			}
			/**/
			if ((x >= 110 && x <= 160) && (y >= 210 && y <= 260) && click == 1)
			{
				break;
			}
			/*rad*/
			if ((x >= 165 && x <= 215) && (y >= 210 && y <= 260) && click == 1)
			{
				g = 1;
				r = 1;
				a1 = 1;
				break;
			}
			/*shift*/
			if ((x >= 220 && x <= 270) && (y >= 210 && y <= 260) && click == 1)
			{
				r = 1;
				a = 1;
				a6 = 1;
				a8 = 1;
				break;
			}
			/*ac*/
			if ((x >= 275 && x <= 325) && (y >= 210 && y <= 260) && click == 1)
			{
				r = 1;
				u = 10;
				break;
			}
			/*stop*/
			if ((x >= 330 && x <= 380) && (y >= 210 && y <= 260) && click == 1)
			{
				goto out;
			}
			/*7*/
			if ((x >= 110 && x <= 150) && (y >= 270 && y <= 310) && a3 == 0 && click == 1)
			{
				n = 7;
				r = 1;
				a2 = 1;
				break;
			}
			/*8*/
			if ((x >= 155 && x <= 195) && (y >= 270 && y <= 310) && a3 == 0 && click == 1)
			{
				n = 8;
				r = 1;
				a2 = 1;
				break;
			}
			/*9*/
			if ((x >= 200 && x <= 240) && (y >= 270 && y <= 310) && a3 == 0 && click == 1)
			{
				n = 9;
				r = 1;
				a2 = 1;
				break;
			}
			/* * */
			if ((x >= 245 && x <= 285) && (y >= 270 && y <= 310) && click == 1)
			{
				u = 3;
				r = 5;
				break;
			}
			/* / */
			if ((x >= 290 && x <= 330) && (y >= 270 && y <= 310) && click == 1)
			{
				u = 4;
				r = 6;
				break;
			}
			/* % */
			if ((x >= 335 && x <= 375) && (y >= 270 && y <= 310) && click == 1)
			{
				u = 5;
				v = 1;
				r = 7;
				a4 = 1;
				break;
			}
			/*4*/
			if ((x >= 110 && x <= 150) && (y >= 315 && y <= 355) && a3 == 0 && click == 1)
			{
				n = 4;
				r = 1;
				a2 = 1;
				break;
			}
			/*5*/
			if ((x >= 155 && x <= 195) && (y >= 315 && y <= 355) && a3 == 0 && click == 1)
			{
				n = 5;
				r = 1;
				a2 = 1;
				break;
			}
			/*6*/
			if ((x >= 200 && x <= 240) && (y >= 315 && y <= 355) && a3 == 0 && click == 1)
			{
				n = 6;
				r = 1;
				a2 = 1;
				break;
			}
			/* + */
			if ((x >= 245 && x <= 285) && (y >= 315 && y <= 355) && click == 1)
			{
				u = 1;
				r = 3;
				break;
			}
			/* - */
			if ((x >= 290 && x <= 330) && (y >= 315 && y <= 355) && click == 1)
			{
				u = 2;
				r = 4;
				break;
			}
			/* = */
			if ((x >= 335 && x <= 375) && (y >= 315 && y <= 355) && click == 1)
			{
				r = 2;
				a3 = 1;
				a5 = 1;
				break;
			}
			/*1*/
			if ((x >= 110 && x <= 150) && (y >= 360 && y <= 400) && a3 == 0 && click == 1)
			{
				n = 1;
				r = 1;
				a2 = 1;
				break;
			}
			/*2*/
			if ((x >= 155 && x <= 195) && (y >= 360 && y <= 400) && a3 == 0 && click == 1)
			{
				n = 2;
				r = 1;
				a2 = 1;
				break;
			}
			/*3*/
			if ((x >= 200 && x <= 240) && (y >= 360 && y <= 400) && a3 == 0 && click == 1)
			{
				n = 3;
				r = 1;
				a2 = 1;
				break;
			}
			/* x! */
			if ((x >= 245 && x <= 285) && (y >= 360 && y <= 400) && click == 1)
			{
				r = 1;
				u = 9;
				v = 5;
				a4 = 1;
				break;
			}
			/* */
			if ((x >= 290 && x <= 330) && (y >= 360 && y <= 400) && click == 1)
			{
				break;
			}
			/* sqrt */
			if ((x >= 335 && x <= 375) && (y >= 360 && y <= 400) && click == 1)
			{
				r = 13;
				u = 12;
				a4 = 1;
				break;
			}
			/*0*/
			if ((x >= 110 && x <= 150) && (y >= 405 && y <= 445) && a3 == 0 && click == 1)
			{
				n = 0;
				r = 1;
				a2 = 1;
				break;
			}
			/* . */
			if ((x >= 155 && x <= 195) && (y >= 405 && y <= 445) && a3 == 0 && click == 1)
			{
				n = 0;
				r = 1;
				g = 1;
				i = 0;
				a2 = 1;
				a4 = 1;
				break;
			}
			/* ^ */
			if ((x >= 200 && x <= 240) && (y >= 405 && y <= 445) && click == 1)
			{
				r = 10;
				u = 8;
				v = 4;
				break;
			}
			/* pai */
			if ((x >= 245 && x <= 285) && (y >= 405 && y <= 445) && click == 1)
			{
				r = 1;
				v = 2;
				a2 = 1;
				a4 = 1;
				break;
			}
			/* +/- */
			if ((x >= 290 && x <= 330) && (y >= 405 && y <= 445) && click == 1)
			{
				r = 1;
				v = 3;
				a9 = 1;
				break;
			}
			/* */
			if ((x >= 335 && x <= 375) && (y >= 405 && y <= 445) && click == 1)
			{
				break;
			}
		}
		if (u == 10)
		{
			setfillstyle(1, 14);
			bar(110, 105, 380, 140);
			k = 0;
			l = 0;
			v = 0;
			n = 0;
			a = 0;
			a1 = 0;
			a2 = 0;
			a3 = 0;
			a4 = 0;
			a5 = 0;
			a6 = 0;
			a8 = 0;
			a9 = 0;
			a10 = 0;
			g = 0;
			r = 0;
			t = 0;
			u = 0;
			w = 0;
			s3 = 0;
			s4 = 0;
			s5 = 0;
			s6 = 0;
			b = 0;
			c = 0;
			s = 0;
			s1 = 0;
			s2 = 0;
			goto in;
		}
		if (r > 0)
		{
			p[i] = n;
			i++;
			b++;
			delay(200);
			n = 0;
			if (r == 2)
			{
				v = 0;
				if (u == 1)
				{
					c = 0;
					g = 0;
					w = 1;
					s3 = s2 + s1;
				}
				if (u == 2)
				{
					c = 0;
					g = 0;
					w = 1;
					s3 = s2 - s1;
				}
				if (u == 3)
				{
					c = 0;
					g = 0;
					w = 1;
					s3 = s2 * s1;
				}
				if (u == 4)
				{
					c = 0;
					g = 0;
					w = 1;
					s3 = s2 / s1;
				}
				if (u == 5)
				{
					c = 0;
					g = 0;
					w = 1;
					s3 = s2 / 100;
				}
				if (u == 8 && a2 == 1)
				{
					c = 0;
					g = 0;
					w = 1;
					s3 = pow(s2, s1);
				}
				if (u == 12)
				{
					c = 0;
					g = 0;
					w = 1;
					s3 = sqrt(s2);
				}
				s5 = s3;
				t = (int)s3;
				if (t == s3)
				{
					setfillstyle(1, 14);
					bar(110, 105, 380, 140);
					gotoxy(25, 8);
					printf("%0.0f", s3);
					s5 = s3;
				}
				else
				{
					s5 = s3;
					s4 = s3;
					setfillstyle(1, 14);
					bar(110, 105, 380, 140);
					c = 0;
					while (1)
					{
						s4 = s4 * 10;
						d = (int)s4;
						if (d % 10 == 0)
							break;
						c++;
					}
					if (c == 1)
					{
						gotoxy(25, 8);
						printf("%0.1f", s3);
					}
					else if (c == 2)
					{
						gotoxy(25, 8);
						printf("%0.2f", s3);
					}
					else if (c == 3)
					{
						gotoxy(25, 8);
						printf("%0.3f", s3);
					}
					else if (c == 4)
					{
						gotoxy(25, 8);
						printf("%0.4f", s3);
					}
					else if (c == 5)
					{
						gotoxy(25, 8);
						printf("%0.5f", s3);
					}
					else if (c == 6)
					{
						gotoxy(25, 8);
						printf("%0.6f", s3);
					}
					else
					{
						gotoxy(25, 8);
						printf("%f", s3);
					}
				}
			}
			if (r == 1)
			{
				if (v == 2)
				{
					g = 1;
					i = 7;
					s1 = 22.0 / 7;
				}
				if (g > 0)
				{
					for (j = 0; j <= i - 1; j++)
					{
						s = s1 + (float)p[j] / pow(10, i - 1);
					}
					if (a == 1 && a1 == 0)
					{
						i = i - 1;
						b = b - 1;
					}
					if (a1 == 1 && a == 0)
					{
						i = i - 1;
						b = b - 1;
					}
					if (a1 == 1 && a == 1)
					{
						i = i - 1;
						b = b - 1;
					}
					if (a3 == 1)
					{
						s = s3;
						setfillstyle(1, 14);
						bar(110, 105, 380, 140);
					}
					if (v == 8 && a == 1 && a2 == 1)
					{
						s = pow(s, 3);
						i = i + 5;
					}
					if (v == 8 && a == 0 && a2 == 1)
					{
						s = pow(s, 2);
						i = i + 6;
					}
					if (v == 9 && a == 0 && a2 == 1)
					{
						s = log10(s);
					}
					if (v == 9 && a == 1 && a2 == 1)
					{
						s = log(s);
					}
					if (v == 10 && a == 0 && a1 == 0)
					{
						s = sin(s * 3.142857 / 180);
					}
					if (v == 10 && a == 0 && a1 == 1)
					{
						s = sin(s);
					}
					if (v == 11 && a == 0 && a1 == 0)
					{
						s = cos(s * 3.142857 / 180);
					}
					if (v == 11 && a == 0 && a1 == 1)
					{
						s = cos(s);
					}
					if (v == 12 && a == 0 && a1 == 0)
					{
						s = tan(s * 3.142857 / 180);
					}
					if (v == 12 && a == 0 && a1 == 1)
					{
						s = tan(s);
					}
					if (v == 10 && a == 1 && a1 == 0)
					{
						s = asin(s);
						s = s * 180 / 3.142857;
					}
					if (v == 10 && a == 1 && a1 == 1)
					{
						s = asin(s);
					}
					if (v == 11 && a == 1 && a1 == 0)
					{
						s = acos(s);
						s = s * 180 / 3.142857;
					}
					if (v == 11 && a == 1 && a1 == 1)
					{
						s = acos(s);
					}
					if (v == 12 && a == 1 && a1 == 0)
					{
						s = atan(s);
						s = s * 180 / 3.142857;
					}
					if (v == 12 && a == 1 && a1 == 1)
					{
						s = atan(s);
					}
					a3 = 0;
					s3 = s;
					if (v == 3)
					{
						s = s * (-1);
						i = i - 1;
					}
					if (a2 == 1 && a3 == 0)
					{
						if (i == 1)
						{
							gotoxy(40 - b, 8);
							printf("%0.0f.", s);
						}
						else if (i == 2)
						{
							gotoxy(40 - b, 8);
							printf("%0.1f", s);
						}
						else if (i == 3)
						{
							gotoxy(40 - b, 8);
							printf("%0.2f", s);
						}
						else if (i == 4)
						{
							gotoxy(40 - b, 8);
							printf("%0.3f", s);
						}
						else if (i == 5)
						{
							gotoxy(40 - b, 8);
							printf("%0.4f", s);
						}
						else if (i == 6)
						{
							gotoxy(40 - b, 8);
							printf("%0.5f", s);
						}
						else
						{
							gotoxy(40 - b, 8);
							printf("%f", s);
						}
					}
				}
				else
				{
					for (j = 0; j <= i - 1; j++)
					{
						s = s * 10 + (float)p[j];
					}
					if (a == 1)
					{
						s = s / 10;
						b = b - 1;
					}
					if (v == 8 && a == 1)
					{
						if (a5 == 1)
						{
							s = s5 * 10;
							a5 = 0;
							setfillstyle(1, 14);
							bar(110, 105, 380, 140);
						}
						s = pow(s, 3) / 1000;
						s6 = s;
						s3 = s;
					}
					if (v == 8 && a == 0)
					{
						if (a5 == 1)
						{
							s = s5 * 10;
							a5 = 0;
							setfillstyle(1, 14);
							bar(110, 105, 380, 140);
						}
						s = pow(s, 2) / 100;
						s6 = s;
						s3 = s;
						b = b - 1;
					}
					if (v == 3)
					{
						s = s * (-1) / 10;
					}
					if (v == 5)
					{
						if (a3 == 1)
						{
							a10 = 1;
							s = s5 * 10;
							setfillstyle(1, 14);
							bar(110, 105, 380, 140);
						}
						t = (int)s;
						if (t == s)
						{
							t = t / 10;
							while (t > 1)
							{
								t1 = t1 * t;
								t--;
							}
							s = (float)t1;
							t1 = 1;
							b = b - 1;
							s3 = s;
						}
					}
					if (a7 == 1 && a8 == 1)
					{
						a2 = 1;
						a6 = 0;
						a7 = 0;
						a8 = 0;
					}
					if (a2 == 1 && a6 == 0)
					{
						tt = (int)s;
						if (a3 == 1 && tt != s)
						{
							if (a10 == 1)
							{
								s = s3;
								a10 = 0;
								gotoxy(40 - b, 8);
								printf("%0.0lf", s);
							}
							else
							{
								s = s6 * 1.0;
								gotoxy(40 - b, 8);
								printf("%lf", s);
							}
							a3 = 0;
							s3 = s;
						}
						else
						{
							gotoxy(40 - b, 8);
							printf("%0.0lf", s);
						}
					}
				}
			}
			if (r > 2)
			{
				setfillstyle(1, 14);
				bar(110, 105, 380, 140);
				for (i = 0; i <= 9; i++)
					p[i] = 0;
				v = 0;
				a = 0;
				a1 = 0;
				if (w == 1)
					s2 = s3;
				else
					s2 = s1;
				s4 = s2;
				i = 0;
				b = 0;
				s = 0;
				if (a9 == 1)
				{
					a2 = 1;
					a3 = 0;
				}
				t = (int)s2;
				if (t == s2 && a2 == 1)
				{
					gotoxy(15, 8);
					printf("%0.0f", s2);
				}
				else
				{
					c = 0;
					while (1)
					{
						s4 = s4 * 10;
						d = (int)s4;
						if (d % 10 == 0)
							break;
						c++;
					}
					if (a4 == 1)
						a3 = 0;
					if (a2 == 1 && a3 == 0)
					{
						if (c == 1)
						{
							gotoxy(15, 8);
							printf("%0.1f", s2);
						}
						else if (c == 2)
						{
							gotoxy(15, 8);
							printf("%0.2f", s2);
						}
						else if (c == 3)
						{
							gotoxy(15, 8);
							printf("%0.3f", s2);
						}
						else if (c == 4)
						{
							gotoxy(15, 8);
							printf("%0.4f", s2);
						}
						else if (c == 5)
						{
							gotoxy(15, 8);
							printf("%0.5f", s2);
						}
						else if (c == 6)
						{
							gotoxy(15, 8);
							printf("%0.6f", s2);
						}
						else
						{
							gotoxy(15, 8);
							printf("%f", s2);
						}
					}
				}
				if (a2 == 1)
				{
					if (r == 3)
					{
						c = 0;
						g = 0;
						a3 = 0;
						gotoxy(27, 8);
						printf("+");
					}
					if (r == 4)
					{
						c = 0;
						g = 0;
						a3 = 0;
						gotoxy(27, 8);
						printf("-");
					}
					if (r == 5)
					{
						c = 0;
						g = 0;
						a3 = 0;
						gotoxy(27, 8);
						printf("*");
					}
					if (r == 6)
					{
						c = 0;
						g = 0;
						a3 = 0;
						gotoxy(27, 8);
						printf("/");
					}
					if (r == 7)
					{
						c = 0;
						g = 0;
						a3 = 0;
						gotoxy(27, 8);
						printf("%");
					}
					if (r == 10)
					{
						c = 0;
						g = 0;
						a3 = 0;
						gotoxy(27, 8);
						printf("^");
					}
					if (r == 13)
					{
						c = 0;
						g = 0;
						a3 = 0;
						gotoxy(27, 8);
						printf("û");
					}
				}
			}
			r = 0;
		}
		s1 = s;
		n = 0;
		s = 0;
	}
out:
	closegraph();
	return 0;
}ce