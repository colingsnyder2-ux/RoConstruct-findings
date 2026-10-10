// from server: 75% by atomic.potato
typedef unsigned long DWORD;
typedef void *HANDLE;
typedef int BOOL;

extern "C" HANDLE __stdcall OpenEventA(DWORD, BOOL, const char *);

struct S
{
    HANDLE value;
    int f(DWORD, DWORD, const char *);
};

int S::f(DWORD a, DWORD c, const char *b)
{
    value = OpenEventA(a, 0, b);
    return value != 0;
}
