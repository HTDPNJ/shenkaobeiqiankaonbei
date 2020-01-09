#include <iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)
class Name2 {
public:
	Name2(const char* myp) {
		m_len = strlen(myp);
		m_p = (char *)malloc(m_len + 1);
		strcpy(m_p, myp);
	}
	Name2(const Name2&obj1) {//�Լ�д���캯��ʵ�����
		m_len = obj1.m_len;
		m_p = (char *)malloc(m_len + 1);
		strcpy(m_p, obj1.m_p);
	}
	~Name2() {
		if (m_p != NULL) {
			free(m_p);
			m_p = NULL;
			m_len = 0;
		}
	}
protected:
private:
	char *m_p;
	int m_len;
};
void objplaymain2() {
	Name2 obj1("abcedfg");
	Name2 obj2 = obj1;

	Name2 obj3("obj3");
	obj3 = obj1;  //�ȺŲ��� Ҳ��ǳ���� �������
}
int main20200108()
{
	objplaymain2();
	return 0;
}