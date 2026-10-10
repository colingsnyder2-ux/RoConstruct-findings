// from server: 34% by atomic.potato
typedef unsigned long DWORD;
typedef int BOOL;

extern "C" BOOL __stdcall HeapFree(void*, DWORD, void*);

struct CXTIconHandle
{
    void* handle;
    void* heap;
    void f(void*);
};

void CXTIconHandle::f(void* p)
{
    if (p != 0)
        HeapFree(heap, 0, p);
}
