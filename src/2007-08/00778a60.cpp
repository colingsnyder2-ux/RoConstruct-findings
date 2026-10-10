// from server: 84% by tester
struct T_func_00778a60 { void m(); };

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __stdcall func_004a5970();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220(void*);

void T_func_00778a60::m()
{
    *(int*)0x892aac = 0x79d890;
    func_00725520((void*)0x8be96c, (void*)0x4a7180);
    void* p = func_004a5970();
    void* q = func_00407410(&p);
    func_00407220(q);
}
