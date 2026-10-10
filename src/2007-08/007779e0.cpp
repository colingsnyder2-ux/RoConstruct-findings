// from server: 82% by tester
struct seg_00770000 {
    void m();
};

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __cdecl func_00438fa0();
extern "C" void* __cdecl func_00407410(void*);
extern "C" void __stdcall func_00407220(void*);

void seg_00770000::m()
{
    *(void**)0x887ea8 = (void*)0x78e3cc;
    func_00725520((void*)0x8bb980, (void*)0x439840);
    void* p = func_00438fa0();
    func_00407220(func_00407410(&p));
}
