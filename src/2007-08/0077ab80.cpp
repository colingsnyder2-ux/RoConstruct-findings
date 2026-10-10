// from server: 78% by colin
extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_0058dc20();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220(void*);

extern int dword_008A4534;
extern int dword_007AF98C;

void func_0077ab80()
{
    sub_00725520((void*)0x0058DE20, (void*)0x008C37E8);
    dword_008A4534 = (int)&dword_007AF98C;
    void* p = sub_0058dc20();
    sub_00407220(sub_00407410(&p));
}
