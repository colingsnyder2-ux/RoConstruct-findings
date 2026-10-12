// from server: 91% by king_originala
extern "C" void* __cdecl GetSingleton();
extern "C" int (__stdcall *PostMessageA)(void*, unsigned int, unsigned int, long);

struct LockPlayModeVerb
{
    int f(int);
};

int LockPlayModeVerb::f(int)
{
    void* a = GetSingleton();
    a = *(void**)((char*)a + 4);
    a = *(void**)((char*)a + 0x20);
    void* hwnd = *(void**)((char*)a + 0x20);
    return PostMessageA(hwnd, 0x111, 0x80ff, 0);
}
