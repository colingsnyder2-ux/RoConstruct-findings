// from server: 39% by atomic.potato
typedef unsigned long DWORD;
typedef int BOOL;
typedef void* HANDLE;

extern "C" BOOL __stdcall HeapFree(HANDLE, DWORD, void*);

struct CXTIconHandle {
    HANDLE heap;
    void Free(void*);
};

void CXTIconHandle::Free(void* p)
{
    if (p)
        HeapFree(heap, 0, p);
}
