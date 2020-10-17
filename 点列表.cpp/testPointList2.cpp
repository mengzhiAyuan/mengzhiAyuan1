#include<iostream>
#include"PointList.h"
using namespace std;
void show() {
	cout << "+xy把点(x,y)添加到列表的末尾" << endl;
	cout << "@显示指针标记的点" << endl;
	cout << "N到下一个点" << endl;
	cout << "P到前一个点" << endl;
	cout << "<到列表的起始位置" << endl;
	cout << ">到列表的末尾位置" << endl;
	cout << "E报告列表是否为空" << endl;
	cout << "F报告列表是否为满" << endl;
	cout << "C清除列表" << endl;
	cout << "Q退出测试程序" << endl;
}
void test01() {
	PointList L;
	InitPointList(L);
	char ch;
	cin >> ch;
	while (ch != 'Q') {
		switch (ch) {
		case '+':
			Point word;
			cin >> word.x >> word.y;
			appendPoint(L, word);
			break;
		case '@':
			Point w=getCursor(L);
			cout << "(" << w.x << ", " << w.y << ")" << endl;
		case 'N':
			gotoNext(L);
		case 'P':
			gotoPrior(L);
		case '<':
			gotoBeginning(L);
		case '>':
			gotoEnd(L);
		case 'E':
			cout<<isEmpty(L)<<endl;
		case 'F':
			cout << isFull(L) << endl;
		case 'C':
			clear(L);
		}
	}
}