// from server: 84% by atomic.potato
typedef unsigned int UINT;
typedef unsigned long WPARAM;
typedef long LPARAM;
typedef int BOOL;

extern "C" void* __cdecl sub_6a0926();
extern "C" BOOL __stdcall PostMessageA(void*, UINT, WPARAM, LPARAM);

struct ReportAbuseVerb
{
    void f();
};

void ReportAbuseVerb::f()
{
    void* a = sub_6a0926();
    a = *(void**)((char*)a + 4);
    a = *(void**)((char*)a + 0x20);
    void* h = *(void**)((char*)a + 0x20);
    PostMessageA(h, 0x111, 0x8100, 0);
}
