// from server: 39% by atomic.potato
typedef unsigned long DWORD;
typedef int BOOL;
typedef void *LPVOID;

extern "C" BOOL __stdcall HeapFree(LPVOID, DWORD, LPVOID);

struct CXTIconHandle
{
    LPVOID heap;
    void Free(LPVOID);
};

void CXTIconHandle::Free(LPVOID p)
{
    if (p)
        HeapFree(heap, 0, p);
}
