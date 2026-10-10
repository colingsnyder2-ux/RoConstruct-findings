// from server: 77% by colin
struct CXTPRibbonBar {
    void sub_6A81E0(unsigned int);
};

extern "C" void* __stdcall sub_639F60(unsigned int);
extern "C" void* __stdcall sub_630202(void*);
extern "C" void* __stdcall sub_7161F0(unsigned int);
extern "C" void __stdcall sub_6A7AD0(void*, void*);
extern "C" int __stdcall sub_6A7E30(void*);
extern "C" void* __stdcall sub_643980(void*, void*);
extern "C" void __stdcall sub_634CA0(void*);

void CXTPRibbonBar::sub_6A81E0(unsigned int arg) {
    void* p = sub_630202(sub_639F60(*(unsigned int*)(arg + 0x5c)));
    if (p != 0) {
        void** vtbl = *(void***)p;
        void (__thiscall *fn)(void*) = (void (__thiscall*)(void*))vtbl[0xb0 / 4];
        fn(p);
        return;
    }
    void* q = sub_630202(sub_7161F0(*(unsigned int*)(arg + 0x5c)));
    if (q != 0) {
        sub_6A7AD0(this, *(void**)((char*)q + 0x2c));
        void** vtbl = *(void***)this;
        void (__thiscall *fn1)(void*, int, int, int) = (void (__thiscall*)(void*, int, int, int))vtbl[0x140 / 4];
        fn1(this, 1, 0, 1);
        unsigned int* r = *(unsigned int**)((char*)this + 0x264);
        void* v = *(void**)((char*)r + 0x80);
        void** vtbl2 = *(void***)this;
        void (__thiscall *fn2)(void*, void*, int) = (void (__thiscall*)(void*, void*, int))vtbl2[0x148 / 4];
        fn2(this, v, 1);
        unsigned int* s = *(unsigned int**)((char*)this + 0x264);
        void** vtbl3 = *(void***)s;
        void (__thiscall *fn3)(void*, int) = (void (__thiscall*)(void*, int))vtbl3[0x70 / 4];
        fn3(s, 1);
        if (sub_6A7E30(this) == 0) {
            void* t = sub_643980(this, this);
            sub_634CA0(t);
        }
    }
}
