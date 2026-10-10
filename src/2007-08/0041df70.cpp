// from server: 54% by colin
// roc 2007-08 0041df70  unit: CInstanceExplorer  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041df70

extern "C" void* __cdecl sub_654D90(unsigned int);
extern "C" void __cdecl sub_49D670(void*, void*);
extern "C" void __cdecl sub_41DA00(void*);
extern "C" void* __cdecl sub_41DD50(void*);

struct CInstanceExplorer {
    void sub_41DF70(int a, int b, int c, int d, int e);
};

void CInstanceExplorer::sub_41DF70(int a, int b, int c, int d, int e) {
    char* base = (char*)this;
    void* obj = sub_654D90(0x5c);
    void* result = 0;
    if (obj) {
        char buf[8];
        sub_49D670(buf, &a);
        result = sub_41DD50(obj);
    }
    char* self = base - 0x2cc;
    void* vtbl = *(void**)(self);
    void* (__thiscall *fn1)(void*) = *(void* (__thiscall **)(void*))((char*)vtbl + 0x18c);
    void* r = fn1(self);
    void* vtbl2 = *(void**)r;
    void (__thiscall *fn2)(void*, void*) = *(void (__thiscall **)(void*, void*))((char*)vtbl2 + 0x144);
    fn2(r, result);
    if (*(unsigned char*)(self + 0x30c) == 0) {
        void* vtbl3 = *(void**)self;
        void* (__thiscall *fn3)(void*) = *(void* (__thiscall **)(void*))((char*)vtbl3 + 0x18c);
        void* r2 = fn3(self);
        void* vtbl4 = *(void**)r2;
        void (__thiscall *fn4)(void*) = *(void (__thiscall **)(void*))((char*)vtbl4 + 0x150);
        fn4(r2);
    }
    sub_41DA00(&a);
}
