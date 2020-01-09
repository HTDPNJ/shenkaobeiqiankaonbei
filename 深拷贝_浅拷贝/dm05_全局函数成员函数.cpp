#include<iostream>
using namespace std;

class Test5 {
private:
	int a;
	int b;
public:
	Test5(int a=0,int b=0) {
		this->a = a;
		this->b = b;
	}
	~Test5() {
	}
	Test5 TestAdd(Test5& t2) {
		Test5 tmp(this->a + t2.a, this->b + t2.b);
		return tmp;
	}
	Test5& TestAdd2(Test5& t2) {
		this->a=this->a + t2.a;
		this->b=this->b + t2.b;
		return *this;  //*(&t1)
	}
};
Test5 TestAdd(Test5&t1, Test5 t2) {
	Test5 tmp;
	return tmp;
}
int main() {
	Test5 t1(1, 2);
	Test5 t2(3, 4);
	Test5 t3=t1.TestAdd(t2);
	Test5 t4 = t1.TestAdd2(t2);  //返回元素本身

}