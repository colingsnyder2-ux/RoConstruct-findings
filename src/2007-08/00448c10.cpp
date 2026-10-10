// from server: 45% by colin
struct Inner;

struct InnerVtbl {
    char pad[4];
    void* (__stdcall *fn)();
};

struct Inner {
    InnerVtbl* vtbl;
};

struct String {
    char pad[0x1c];
    String(const char*);
    ~String();
};

extern "C" void* __stdcall sub_77e698(void*);
extern "C" void __stdcall sub_77e6ac(void*);
extern "C" void __stdcall sub_412dc0(void*, void*);
extern "C" void __stdcall sub_4136b0(void*, void*);
extern "C" void __stdcall sub_630b9e(void*, void*);
extern "C" void __stdcall sub_630a1e();

extern Inner* g_8bbe94;
extern char g_8410c0[];

void f()
{
    if (g_8bbe94 != 0) {
        Inner* in = g_8bbe94;
        InnerVtbl* vt = in->vtbl;
        void* p = vt->fn();
        void* q = sub_77e698(p);
        char buf[0x48];
        sub_412dc0(buf, q);
        sub_77e6ac(q);
        Inner* old = g_8bbe94;
        g_8bbe94 = 0;
        if (old != 0) {
            InnerVtbl* vt2 = old->vtbl;
            void (__stdcall *fn2)(int) = (void (__stdcall *)(int))vt2->fn;
            fn2(1);
        }
        char buf2[0x24];
        sub_4136b0(buf2, buf);
        sub_630b9e(g_8410c0, buf2);
    }
}
