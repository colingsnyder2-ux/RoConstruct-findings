// from server: 80% by tester
struct S_0077ac00 {
    void m();
};

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __stdcall func_0058db40();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220();

void S_0077ac00::m()
{
    *(int*)0x8a452c = 0x7af7c8;
    func_00725520((void*)0x58de00, (void*)0x8c37e0);
    void* p = func_0058db40();
    void* q = func_00407410(&p);
    func_00407220();
}
