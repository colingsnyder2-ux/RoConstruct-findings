// from server: 50% by atomic.potato
typedef unsigned long DWORD;
typedef int BOOL;
typedef void *HDC;

extern "C" BOOL __stdcall GdiFunction(HDC, int, int, const void *);

struct S
{
	int f(int, int);
};

int S::f(int a, int b)
{
	GdiFunction((HDC)(a + 0x54), 0, 0, 0);
	return a;
}
