// from server: 33% by colin
// roc 2008-06 005a4cb0  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a4cb0

extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __stdcall sub_45c300(void* a, void* b);
extern "C" void __stdcall sub_5a4190(void* a);

struct S {
    void f(void* a, void* b);
};

void S::f(void* a, void* b)
{
    void* p = malloc(0x178);
    if (p == 0) {
        void* local = 0;
        if (a != 0) {
            local = a;
            void* vt = *(void**)a;
            void* tmp = &local;
            ((void (__stdcall*)(void*, void*, int))vt)(tmp, &local, 0);
        }
        sub_5a4190(p);
    } else {
        p = 0;
    }
    sub_45c300(p, a);
    if (b != 0) {
        void* vt = *(void**)b;
        if (vt != 0) {
            void* tmp = &b;
            ((void (__stdcall*)(void*, void*, int))vt)(tmp, &b, 1);
        }
    }
}
