// from server: 80% by colin
extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_00438FA0();
extern "C" void __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220();

void __cdecl sub_007779E0()
{
    *(int*)0x887EA8 = 0x78E3CC;
    sub_00725520((void*)0x8BB980, (void*)0x439840);
    void* p = sub_00438FA0();
    sub_00407410(&p);
    sub_00407220();
}
