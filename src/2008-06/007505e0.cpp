// from server: 49% by atomic.potato
typedef unsigned int DWORD;
typedef int HDC;

extern "C" int __stdcall ImportedCall(HDC, int);

struct S
{
	int f(int);
};

int S::f(int a)
{
	char pad[4];
	return (ImportedCall((HDC)((char*)this + 0x74), 0), (int)this);
}
