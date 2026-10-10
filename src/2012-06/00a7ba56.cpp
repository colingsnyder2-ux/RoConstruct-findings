// from server: 67% by atomic.potato
typedef unsigned long DWORD;
typedef int BOOL;

extern "C" void* __stdcall GetProcessHeap();
extern "C" BOOL __stdcall HeapFree(void*, DWORD, void*);
extern "C" void __stdcall ExternalFree(void*);

extern DWORD g_value;
extern void* g_heap;

void func_00a7ba56(void* p)
{
    DWORD v = g_value;
    if (v == 1)
    {
        void* heap = GetProcessHeap();
        HeapFree(heap, 0, p);
    }
    else
    {
        ExternalFree(p);
    }
}
