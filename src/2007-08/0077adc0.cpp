// from server: 80% by tester
struct T_0077adc0 {
    void m();
};

extern "C" void __stdcall f_00725520(void*, void*);
extern "C" void* __stdcall f_0058d830();
extern "C" void* __stdcall f_00407410(void*);
extern "C" void __stdcall f_00407220();

void T_0077adc0::m()
{
    *(int*)0x8a4510 = 0x7af704;
    f_00725520((void*)0x8c37c4, (void*)0x58dd90);
    void* p = f_0058d830();
    void* q = f_00407410(&p);
    f_00407220();
}
