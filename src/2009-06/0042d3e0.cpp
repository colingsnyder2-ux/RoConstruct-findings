// from server: 51% by atomic.potato
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CMemberTreeView {
    char pad0[0x20];
    void* hwnd;
    char pad1[0x3c];
    void* vtable60;
    char pad2[0x3c];
    void* field_a0;
    int method1(void*);
};

extern "C" int __stdcall sub_71954e(void*);
extern "C" void* __stdcall sub_42cb00(int);
extern "C" int __stdcall sub_719344(void*);

int CMemberTreeView::method1(void* arg)
{
    int result = sub_71954e(arg);
    if (result == -1)
        return -1;

    void** vt = *(void***)((char*)this + 0x60);
    void (*fn)(void*) = (void (*)(void*))vt[0x48/4];
    fn((char*)this + 0x60);

    void* p = sub_42cb00(0xc4);
    if (p == 0)
        return -1;

    void* esi = (char*)this + 0xa0;
    if (esi != 0)
        esi = *(void**)((char*)esi + 4);

    void* hwnd = *(void**)((char*)this + 0x20);
    void* r = (void*)SendMessageA(hwnd, 0x1109, 0, (long)esi);
    sub_719344(r);
    return 0;
}
