#include <iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)
class A {
public:
	A(int _a) {
		a = _a;
		cout << "a:" << a << endl;
	}
	~A() {
		cout <<a<< "��������" << endl;
	}
protected:
private:
	int a;
};
class B {
public:
	B(int _b1,int _b2):a1(1),a2(2),c(0) {

	}
	B(int _b1, int _b2,int m,int n) :a1(m), a2(n), c(0) {
		b1 = _b1;
		b2 = _b2;

	}
	~B() {
		cout << "��������" << endl;
	}
protected:
private:
	int b1;
	int b2;
	A a1;
	A a2;
	const int c;  //��const���Ա����ʼ����
};
//��ִ�б���ϵĶ���Ĺ��캯��
//�����϶����ж�������ն���˳�򣬶����ǰ��ճ�ʼ���б��˳��
//�����������͹��캯���ĵ���˳���෴
void obj3play()
{
	B objB2(1, 2,3,4);
}
int main2020010803() {
	obj3play();
	return 0;
}