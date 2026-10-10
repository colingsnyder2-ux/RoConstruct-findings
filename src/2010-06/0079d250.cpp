// from server: 80% by atomic.potato
typedef unsigned long DWORD;
typedef int BOOL;

extern "C" __declspec(dllimport) DWORD __stdcall GetProcessHeap();
extern "C" __declspec(dllimport) BOOL __stdcall HeapFree(DWORD, DWORD, void *);

struct S {
    char pad[12];
    void *p;
    void f();
};

void S::f()
{
    void *q = p;
    ((void (__thiscall *)(void *, int))(*(void ***)q))(q, 0);
    HeapFree(GetProcessHeap(), 0, q);
}
