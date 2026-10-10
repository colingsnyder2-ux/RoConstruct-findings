// from server: 80% by colin
extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_0041fe40();
extern "C" void __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220();

void __cdecl func_00777800()
{
    *(int*)0x886360 = 0x7888b8;
    sub_00725520((void*)0x8bb4cc, (void*)0x420680);
    void* p = sub_0041fe40();
    sub_00407410(&p);
    sub_00407220();
}
