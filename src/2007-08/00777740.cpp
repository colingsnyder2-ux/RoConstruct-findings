// from server: 80% by colin
struct S_00777740 {
    void f();
};

extern "C" void __cdecl func_00725520(void*, void*);
extern "C" void* __cdecl func_0041ffc0();
extern "C" void* __cdecl func_00407410(void*);
extern "C" void __cdecl func_00407220(void*);

void S_00777740::f()
{
    *(int*)0x88636c = 0x788cb4;
    func_00725520((void*)0x8bb4d8, (void*)0x4206b0);
    void* p = func_0041ffc0();
    void* q = func_00407410(&p);
    func_00407220(q);
}
