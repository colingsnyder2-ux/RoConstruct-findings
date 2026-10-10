// from server: 84% by tester
struct S_00779d40 {
    void m();
};

struct S_00407220 {
    void f(void*);
};

extern "C" void __stdcall f_00725520(void*, void*);
extern "C" void* __stdcall f_0055e6a0();
extern "C" void* __stdcall f_00407410(void*);

void S_00779d40::m()
{
    *(void**)0x89f37c = (void*)0x7a95a8;
    f_00725520((void*)0x8c2320, (void*)0x55ed50);
    void* p = f_0055e6a0();
    S_00407220* q = (S_00407220*)f_00407410(&p);
    q->f(&p);
}
