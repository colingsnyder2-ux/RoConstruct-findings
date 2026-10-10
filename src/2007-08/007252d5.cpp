// from server: 49% by colin
extern "C" void* __stdcall GetProcAddress(void*, const char*);
extern "C" void* __stdcall GetProcessHeap();
extern "C" void* __stdcall HeapAlloc(void*, unsigned long, unsigned long);
extern "C" int __stdcall HeapFree(void*, unsigned long, void*);
extern "C" long __stdcall InterlockedCompareExchange(long volatile*, long, long);
extern "C" int __stdcall IsProcessorFeaturePresent(unsigned long);
extern "C" void* __stdcall LoadLibraryA(const char*);

struct CXTIconHandle {
    int Init();
};

int CXTIconHandle::Init()
{
    void* h;
    h = HeapAlloc(GetProcessHeap(), 0, 0xc);
    if (h == 0) {
        *(int*)0x8c98b4 = 1;
        return 1;
    }

    void* lib = LoadLibraryA((const char*)0x79bec0);
    if (lib != 0) {
        *(void**)0x8c98b8 = GetProcAddress(lib, (const char*)0x7e5118);
        *(void**)0x8c98bc = GetProcAddress(lib, (const char*)0x7e50fc);
    }

    if (*(void**)0x8c98b8 == 0 || *(void**)0x8c98bc == 0)
        return 0;

    void** p = (void**)(*(char**)(*(char**)((char*)0 + 0x18) + 0x30) + 0x34);
    if (*p == 0) {
        void* mem = HeapAlloc(GetProcessHeap(), 0, 8);
        void* node = (void*)InterlockedCompareExchange((long volatile*)0, 0, 0);
        (void)mem;
        (void)node;
    }
    return 0;
}
