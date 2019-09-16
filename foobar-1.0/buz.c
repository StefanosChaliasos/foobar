#include <stdio.h>

void foo_fun();
void bar_fun();

int main()
{
#ifdef FOO
	foo_fun();
#endif
#ifdef BAR
	bar_fun();
#endif
	return 0;
}

void foo_fun() {
	printf("foo\n");
}

void bar_fun() {
	printf("bar\n");
}
