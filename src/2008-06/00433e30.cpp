// from server: 58% by colin
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CMemberTreeView
{
    char pad[0x20];
    void* hwnd;
    char pad2[0x3c];
    void* vtable60;
    char pad3[0x3c];
    void* field_a0;
    int func(unsigned int);
};

extern "C" int __cdecl sub_6A10E2(void*, unsigned int);
extern "C" void* __cdecl sub_433AB0(void*, unsigned int);
extern "C" int __cdecl sub_6A0EBA(void*, int, int, int, int);

int CMemberTreeView::func(unsigned int arg)
{
    int idx = sub_6A10E2(this, arg);
    if (idx != -1)
        return -1;

    void** vt = *(void***)((char*)this + 0x60);
    void (*fn)(void*) = (void (*)(void*))vt[0x48 / 4];
    fn((char*)this + 0x60);

    void* p = sub_433AB0((char*)this + 0xa0, 0xc4);
    if (p == 0)
        return -1;

    void* esi = (char*)this + 0xa0;
    if (esi != 0)
        esi = *(void**)((char*)esi + 4);

    void* hwnd = *(void**)((char*)this + 0x20);
    long r = SendMessageA(hwnd, 0x1109, 0, (long)esi);
    sub_6A0EBA((void*)r, 0, 0, 0, 0);
    return 0;
}
