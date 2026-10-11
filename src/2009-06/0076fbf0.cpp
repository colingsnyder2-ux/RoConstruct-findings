// from server: 71% by atomic.potato
extern "C" __declspec(dllimport) void* __stdcall GetModuleHandleA(const char*);
extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void*, const char*);

static void* g_0xa26ca0 = (void*)-1;

void __cdecl sub_0076fbf0(void* arg)
{
    void* p = g_0xa26ca0;
    if (p == (void*)-1) {
        void* h = GetModuleHandleA("GDI32.DLL");
        if (h != 0) {
            p = GetProcAddress(h, "GetLayout");
            g_0xa26ca0 = p;
        } else {
            g_0xa26ca0 = 0;
        }
    }
    if (p == 0)
        return;
    ((void (__stdcall*)(void*))p)(arg);
}
