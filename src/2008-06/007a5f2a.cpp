// from server: 64% by atomic.potato
typedef unsigned long DWORD;
typedef void* HANDLE;

extern "C" HANDLE __stdcall GetProcessHeap();
extern "C" int __stdcall HeapFree(HANDLE, DWORD, void*);

DWORD g_97f308;
void (__stdcall *g_97f30c)(void*);
void* (__stdcall *g_8022b8)(HANDLE, DWORD);
void* (__stdcall *g_8021f0)(void*);

void f(void* p)
{
    DWORD v = g_97f308;
    if (v == 1) {
        g_8021f0(g_8022b8(GetProcessHeap(), 0));
    } else {
        g_97f30c((void*)v);
    }
}
