//-----Add.h-----
class CMath {
	int a, b;
public:
	CMath(int _a, int _b);
	int Add();
};
//-----Add.cpp-----
//#include "Add.h"
CMath::CMath(int _a, int _b) {
	a = _a;
	b = _b;
}
int CMath::Add() {
	return a + b;
}
//-----main.cpp-----
#include <stdio.h>
//#include "Add.h"
int main() {
	CMath me(2, 3);
	printf("%d\n", me.Add());
	return 0;
}