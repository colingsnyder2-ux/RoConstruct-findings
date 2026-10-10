// from server: 86% by tester
struct T_func_00778be0 { void m(); };

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __stdcall func_004cd600();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __fastcall func_00407220(void*, void*);

void T_func_00778be0::m()
{
    *(int*)0x896c44 = 0x79f068;
    func_00725520((void*)0x8bf9d8, (void*)0x4cd760);
    void* p = func_004cd600();
    void* q = func_00407410(&p);
    func_00407220(q, 0);
}
