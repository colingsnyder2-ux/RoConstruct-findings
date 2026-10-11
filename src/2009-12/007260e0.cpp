// from server: 36% by atomic.potato
extern "C" {
    typedef void (__stdcall *fn0)(void*);
    typedef void (__stdcall *fn1)(void*);
}

struct S {
    char pad0[0x28];
    int field28;
    int field2c;
    S(void*);
};

extern char g_str[];
extern void* g_vtbl1;
extern void* g_vtbl2;
extern void* g_vtbl3;

extern "C" void __stdcall sub_98b6f4(void*);
extern "C" void __stdcall sub_98b6e4(void*);
extern "C" void __stdcall sub_409390(void*, void*);

S::S(void* arg)
{
    char buf[0x20];
    void* p = g_str;
    sub_98b6f4(buf);
    sub_409390(this, buf);
    *(void**)this = &g_vtbl1;
    sub_98b6e4(buf);
    *(void**)this = &g_vtbl2;
    field28 = 1;
    field2c = *(int*)((char*)arg + 0x28);
}
