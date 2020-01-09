#include <iostream>
#include<cstring>
using namespace std;
#pragma warning(disable:4996)
class Name {
public:
	Name(const char* myp) {
		int len = strlen(myp);
		p = (char *)malloc(len + 1);
		strcpy(p, myp);
	}
	~Name() {   ///浅拷贝出现的问题
		if (p != NULL) {
			free(p);
			p = NULL;
			len = 0;
		}
	}
protected:
private:
	char *p;
	int len;
};
void objplaymain() {
	Name obj1("abcedfg");
	Name obj2 = obj1;
}
int main202001011()
{
	objplaymain();
	return 0;
}