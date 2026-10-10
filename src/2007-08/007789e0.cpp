// from server: 84% by tester
struct S_007789e0 {
    void m();
};

extern "C" void __stdcall f_00725520(void*, void*);
extern "C" void* __stdcall f_004a5a70();
extern "C" void* __stdcall f_00407410(void*);
extern "C" void __stdcall f_00407220(void*);

void S_007789e0::m()
{
    *(void**)0x892ab4 = (void*)0x79d8c8;
    f_00725520((void*)0x8be974, (void*)0x4a71a0);
    void* p = f_004a5a70();
    void* q = f_00407410(&p);
    f_00407220(q);
}
