// from server: 77% by tester
struct S {
    void m();
};

extern "C" void __stdcall f_725520(void*, void*);
extern "C" void* __cdecl f_557780();
extern "C" void* __cdecl f_407410(void*);
extern "C" void* __cdecl f_4339d0(void*);
extern "C" void __cdecl f_630d23(void*);

void S::m()
{
    f_725520((void*)0x8c1f10, (void*)0x5586f0);
    void* p = f_557780();
    void* q = f_407410(&p);
    void* r = f_4339d0(q);
    *(unsigned int*)r = 0x89ebc8;
    f_630d23((void*)0x779c00);
}
