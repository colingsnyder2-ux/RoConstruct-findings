// from server: 62% by atomic.potato
struct T4_006685d0 {
    void f_006685d0(int);
};

extern "C" void* __stdcall f_006666b0();
extern "C" void* __stdcall f_00667a90(void*);
extern "C" void __stdcall f_004e7a00(void*);
extern "C" void __stdcall f_005d1e50(void*, void*);

void T4_006685d0::f_006685d0(int a)
{
    void* p = f_006666b0();
    if (p) {
        void* q = f_00667a90(p);
        if (q)
            f_004e7a00(q);
        f_005d1e50(this, p);
    }
}
