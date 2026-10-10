// from server: 84% by tester
struct CrashReporter {};

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __cdecl func_0041fec0();
extern "C" void* __stdcall func_00407410(void*);
extern "C" void __stdcall func_00407220(void*);

void* g_00886364;
void* g_00788a4c;

void func_007777c0()
{
    g_00886364 = &g_00788a4c;
    func_00725520((void*)0x420690, (void*)0x8bb4d0);
    void* p = func_0041fec0();
    void* q = func_00407410(&p);
    func_00407220(q);
}
