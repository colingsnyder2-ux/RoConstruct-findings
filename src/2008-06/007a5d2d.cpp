// from server: 53% by atomic.potato
typedef unsigned long DWORD;
typedef void *LPVOID;
typedef int BOOL;

extern "C" LPVOID __stdcall HeapAlloc(LPVOID, DWORD, DWORD);

struct CXTIconHandle
{
    LPVOID heap;
    LPVOID f(DWORD);
};

LPVOID CXTIconHandle::f(DWORD size)
{
    return HeapAlloc(heap, 0, size);
}
