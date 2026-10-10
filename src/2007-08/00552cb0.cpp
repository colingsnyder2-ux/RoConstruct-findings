// from server: 35% by colin
extern "C" void __cdecl sub_552b10();
extern "C" void __stdcall sub_77e4c8();

extern void* g_77e4dc;
extern void* g_77e4e0;

struct S {
    void* f(void*);
};

void* S::f(void* a) {
    if (a != 0) {
        *(void**)((char*)this + 8) = (void*)0x7a7cfc;
        *(void**)((char*)this + 0x18) = g_77e4e0;
        *(void**)((char*)this + 0x18) = g_77e4dc;
    }
    *(void**)((char*)this + 4) = 0;
    *(void**)this = (void*)0x7a78bc;
    sub_77e4c8();
    *(void**)this = (void*)0x7a7cf4;
    void* p = *(void**)((char*)this + 8);
    *(void**)((char*)p + 4) = (void*)0x7a7cec;
    sub_552b10();
    *(void**)((char*)this + 4) = (char*)this + 0x10;
    void* q = *(void**)((char*)this + 0x10);
    *(void**)((char*)q + 0xc) = this;
    return this;
}
