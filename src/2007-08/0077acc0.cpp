// from server: 84% by tester
struct S {
    void m();
};

extern "C" void __stdcall f_725520(int, int);
extern "C" void* __stdcall f_58d9f0();
extern "C" void* __stdcall f_407410(void*);
extern "C" void __stdcall f_407220(void*);

void S::m()
{
    *(int*)0x8a4520 = 0x7af774;
    f_725520(0x58ddd0, 0x8c37d4);
    void* p = f_58d9f0();
    void* q = f_407410(&p);
    f_407220(q);
}
