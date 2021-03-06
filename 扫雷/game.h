#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

#define row 12
#define col 12
#define COUNT 10//棋盘中雷的总数

void menu();//菜单函数
void init_mine();//初始化两个雷阵
void set_mine();//布雷函数
int count_mine(int x, int y);//统计周围雷的个数
void print_player();//打印玩家棋盘
void print_mine();//打印设计者棋盘 
int  sweep_mine();//扫雷函数
void safe_mine();//避免第一次被雷炸死的函数
void open_mine(int x, int y);//展开函数
int count_show_mine(); ///判断玩家棋盘剩余未知区域的个数