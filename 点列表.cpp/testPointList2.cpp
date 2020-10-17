#include<iostream>
#include"PointList.h"
using namespace std;
void show() {
	cout << "+xy�ѵ�(x,y)��ӵ��б��ĩβ" << endl;
	cout << "@��ʾָ���ǵĵ�" << endl;
	cout << "N����һ����" << endl;
	cout << "P��ǰһ����" << endl;
	cout << "<���б����ʼλ��" << endl;
	cout << ">���б��ĩβλ��" << endl;
	cout << "E�����б��Ƿ�Ϊ��" << endl;
	cout << "F�����б��Ƿ�Ϊ��" << endl;
	cout << "C����б�" << endl;
	cout << "Q�˳����Գ���" << endl;
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