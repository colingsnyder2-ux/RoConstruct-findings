// from server: 77% by tester
struct S {
    void m();
};

struct T {
    void f(void*);
};

extern "C" void __stdcall f_00725520(void*, void*);
extern "C" void* __stdcall f_00587d30();
extern "C" void* __stdcall f_00407410(void*);

void S::m()
{
    f_00725520((void*)0x8c34fc, (void*)0x588120);
    *(int*)0x8a357c = 0x7aed04;
    void* p = f_00587d30();
    T* q = (T*)f_00407410(&p);
    q->f(0);
}
