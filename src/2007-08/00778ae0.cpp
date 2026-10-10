// from server: 84% by tester
struct S_00778ae0 {
    void m();
};

extern "C" void __stdcall f_00725520(int, int);
extern "C" void* __stdcall f_004a5870();
extern "C" void* __stdcall f_00407410(void*);
extern "C" void __stdcall f_00407220(void*);

void S_00778ae0::m()
{
    *(int*)0x892aa4 = 0x79d858;
    f_00725520(0x4a7160, 0x8be964);
    void* p = f_004a5870();
    void* q = f_00407410(&p);
    f_00407220(q);
}
