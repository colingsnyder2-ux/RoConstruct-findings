// from server: 84% by atomic.potato
typedef unsigned long DWORD;
typedef void* HWND;
typedef int BOOL;

extern "C" void* __cdecl sub_6A0926();
extern "C" BOOL __stdcall PostMessageA(HWND, unsigned int, unsigned int, long);

struct ToggleFullscreenVerb
{
    void f();
};

void ToggleFullscreenVerb::f()
{
    void* a = sub_6A0926();
    a = *(void**)((char*)a + 4);
    a = *(void**)((char*)a + 0x20);
    HWND h = *(HWND*)((char*)a + 0x20);
    PostMessageA(h, 0x111, 0x80f4, 0);
}
