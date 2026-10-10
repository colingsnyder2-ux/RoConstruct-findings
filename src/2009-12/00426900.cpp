// from server: 78% by atomic.potato
typedef unsigned long DWORD;
typedef void *HANDLE;
typedef int BOOL;

extern "C" HANDLE __stdcall GetProcessHeap();
extern "C" BOOL __stdcall HeapFree(HANDLE, DWORD, void *);

struct S
{
    void f(void *);
};

void S::f(void *p)
{
    void **q = *(void ***)p;
    typedef void (__thiscall *T)(void *, int);
    ((T)(*(void ***)q))(q, 0);
    HeapFree(GetProcessHeap(), 0, p);
}
