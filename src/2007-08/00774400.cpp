// from server: 85% by colin
struct S {
    void m();
};

extern "C" void* __stdcall f_5b6d50(void*, void*, int);
extern "C" void* __stdcall f_577100(void*);
extern "C" void __fastcall f_5873e0(void*, int, void*);
extern "C" void __cdecl f_630d23(void*);

void S::m()
{
    void* p1 = f_5b6d50((void*)0x797cb8, (void*)0x79b698, 0);
    void* p2 = f_577100(p1);
    f_5873e0((void*)0x8c64a8, 0, p2);
    *(void**)0x8c64a8 = (void*)0x7b8624;
    f_630d23((void*)0x77b840);
}
