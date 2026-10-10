// from server: 80% by tester
struct S {
    void m();
};

extern "C" void __stdcall f_725520(int, int);
extern "C" void* __stdcall f_557710();
extern "C" void* __stdcall f_407410(void*);
extern "C" void* __fastcall f_4339d0(void*, int, void*);
extern "C" void __stdcall f_630d23(void*, int);

void S::m()
{
    f_725520(0x8c1f0c, 0x5586e0);
    void* p = f_557710();
    void* q = f_407410(&p);
    void* r = f_4339d0(q, 0, 0);
    *(int*)r = 0x89ebc4;
    f_630d23((void*)0x779c40, 0);
}
