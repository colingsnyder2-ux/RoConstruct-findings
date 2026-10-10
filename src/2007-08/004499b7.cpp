// from server: 39% by colin
extern "C" {
    void __stdcall sub_6306B8(int, int, int);
    void __stdcall sub_630B9E(int, void*);
    void __stdcall sub_4061F0(void*, int);
    void __stdcall sub_412DC0(void*, void*);
    void* __stdcall sub_77E698(void*, const char*);
    void* __stdcall sub_77ECD8(int, int, int, void*);
}

struct CRobloxModule {
    void func();
};

void CRobloxModule::func()
{
    int local6c;
    char buf50[0x50];
    char bufA0[0x60];
    int local4;

    sub_6306B8(-1, 0, 0xf104);

    void* p = *(void**)((char*)this + 0x90);
    if (p) {
        void** vt = *(void***)p;
        void (*fn)(void*) = (void (*)(void*))vt[0x84/4];
        fn(p);
    }

    sub_630B9E(0, 0);

    void* q = *(void**)((char*)this + 0x90);
    void** vt2 = *(void***)q;
    int (*fn2)(void*) = (int (*)(void*))vt2[0x98/4];
    if (fn2(q) == 0) {
        sub_77E698(buf50, "CDocument::OnNewDocument returned FALSE");
        local4 = 4;
        sub_412DC0(buf50, buf50);
        sub_630B9E(0x8410C0, buf50);
    }

    void* r = *(void**)((char*)this + 0x90);
    void** vt3 = *(void***)this;
    void (*fn3)(void*, void*) = (void (*)(void*, void*))vt3[0x8c/4];
    fn3(this, r);

    void* s = *(void**)((char*)this + 0x90);
    void** vt4 = *(void***)s;
    int (*fn4)(void*) = (int (*)(void*))vt4[0x78/4];
    if (fn4(s) == 0) {
        sub_77E698(buf50, "User cancelled");
        local4 = 5;
        sub_412DC0(bufA0, buf50);
        sub_630B9E(0x8410C0, bufA0);
    }

    if (*(void**)0x8BAE2C == *(void**)((char*)this + 0x90)) {
        sub_4061F0(*(void**)0x8BAE2C, 1);
    }

    void* t = *(void**)((char*)this + 0x90);
    void** vt5 = *(void***)t;
    int (*fn5)(void*) = (int (*)(void*))vt5[0x68/4];
    local6c = fn5(t);
    if (local6c != 0) {
        void* (*fn6)(int, int, int, void*) = (void* (*)(int, int, int, void*))0x77ECD8;
        while (1) {
            void* u = *(void**)((char*)this + 0x90);
            void** vt6 = *(void***)u;
            void (*fn7)(void*, int*) = (void (*)(void*, int*))vt6[0x6c/4];
            fn7(u, &local6c);
            void* edi = (void*)local6c;
            void* old = *(void**)0x8BBE94;
            *(void**)0x8BBE94 = 0;
            if (old) {
                void** vt7 = *(void***)old;
                void (*fn8)(void*, int) = (void (*)(void*, int))vt7[0];
                fn8(old, 1);
            }
            void* arg = *(void**)((char*)edi + 0x20);
            fn6(0x364, 0, 0, arg);
            if (local6c == 0) break;
        }
    }
}
