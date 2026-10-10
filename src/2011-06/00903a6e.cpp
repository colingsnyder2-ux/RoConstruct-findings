// from server: 63% by atomic.potato
typedef unsigned long DWORD;
typedef void *HANDLE;
typedef int BOOL;

extern "C" HANDLE __stdcall GetProcessHeap(void);
extern "C" BOOL __stdcall HeapFree(HANDLE, DWORD, void *);
extern "C" BOOL (__stdcall *pHeapFree)(HANDLE, DWORD, void *);

volatile long g_value;
volatile HANDLE g_function;

BOOL f(void *p)
{
    long value = g_value;
    if (value == 1) {
        return HeapFree(GetProcessHeap(), 0, p);
    }
    return ((BOOL (__stdcall *)(void *, long))g_function)(p, value);
}
