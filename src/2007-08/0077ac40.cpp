// from server: 84% by tester
struct S_0077ac40 {
    void m();
};

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __stdcall func_0058dad0();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220(void*);

void S_0077ac40::m()
{
    *(int*)0x8a4528 = 0x7af7ac;
    func_00725520((void*)0x8c37dc, (void*)0x58ddf0);
    void* p = func_0058dad0();
    void* q = func_00407410(&p);
    func_00407220(q);
}
