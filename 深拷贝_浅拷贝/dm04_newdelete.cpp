#include<iostream>
using namespace std;

class Test {
private:
	int a;
public:
	Test(int _a) {
		a = _a;
		cout << "构造函数执行" << endl;
	}
	~Test() {
		cout << "析构函数执行" << endl;
	}
};
int main2020010904() {
	int *p = (int *)malloc(sizeof(int));
	*p = 10;
	free(p);
	int *p2 = new int;  //分配基础类型
	*p2 = 20;
	delete p2;
	//
	int *p3 = new int(30);
	cout << *p3 << endl;
	delete p3;

	//分配数组
	int *parr = (int *)malloc(sizeof(int) * 10);
	parr[0] = 1;
	free(parr);

	int *pArray = new int[10];
	delete[]pArray;


	//分配对象
	Test *pT1 = (Test *)malloc(sizeof(Test));
	free(pT1);

	//c++
	Test *pT2 = new Test(10);
	delete pT2;
	return 0;
}