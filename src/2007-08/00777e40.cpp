// from server: 80% by colin
struct seg_00770000
{
    void func_00777e40();
};

extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_004581f0();
extern "C" void __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220();

void seg_00770000::func_00777e40()
{
    *(int*)0x88a478 = 0x793690;
    sub_00725520((void*)0x8bbfd4, (void*)0x458680);
    void* p = sub_004581f0();
    sub_00407410(&p);
    sub_00407220();
}
