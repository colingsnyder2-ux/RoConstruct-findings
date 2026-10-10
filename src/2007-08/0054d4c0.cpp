// from server: 40% by colin
extern "C" int __stdcall pubsync(void*);

extern "C" void __cdecl sub_54C650();

extern void* g_7A7AD8;
extern void* g_7A7AD0;
extern int (__stdcall *g_77E604)(void*);

struct S {
    void* f();
};

void* S::f() {
    void* p8 = *(void**)((char*)this + 8);
    *(void**)this = &g_7A7AD8;
    void* ecx = *(void**)((char*)p8 + 4);
    *(void**)((char*)ecx + (int)this + 8) = &g_7A7AD0;
    void* eax = *(void**)((char*)this + 4);
    eax = *(void**)eax;
    if (*(unsigned char*)((char*)eax + 0x1c) & 1) {
        void* edx = *(void**)((char*)this + 8);
        void* eax2 = *(void**)((char*)edx + 4);
        void* ecx2 = *(void**)((char*)eax2 + (int)this + 0x30);
        g_77E604(ecx2);
    }
    sub_54C650();
    return this;
}
