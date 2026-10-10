// from server: 87% by colin
extern "C" void __stdcall func_00725520(void*, void*);
extern "C" int __cdecl func_00491810();
extern "C" void* __cdecl func_00407410(void*);

struct C00407220 {
    void func_00407220();
};

void func_007785f0()
{
    *(int*)0x88f5ac = 0x79b9d0;
    func_00725520((void*)0x8bdfa4, (void*)0x492080);
    int v = func_00491810();
    void* p = func_00407410(&v);
    ((C00407220*)p)->func_00407220();
}
