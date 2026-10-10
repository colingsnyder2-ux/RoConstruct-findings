// from server: 63% by colin
extern "C" __declspec(dllimport) void* __stdcall GetProcAddress(void* hModule, const char* lpProcName);

extern void* G_8b5188;
extern void* G_77d288;
extern char G_7d279c[];

struct CXTPPropertyGridItemEnum
{
    void* f_0069e740();
    void f_0069efb0(void* a, void* b);
};

void CXTPPropertyGridItemEnum::f_0069efb0(void* a, void* b)
{
    void* p = f_0069e740();
    char* base = (char*)p;
    void* v = *(void**)(base + 0xd0);
    if (v != 0 && *(void**)(base + 0xc8) == 0)
    {
        *(void**)(base + 0xc8) = GetProcAddress(v, G_7d279c);
    }
    void* fn = *(void**)(base + 0xc8);
    if (fn != 0)
    {
        ((void (__stdcall*)(void*, void*))fn)(a, b);
    }
}
