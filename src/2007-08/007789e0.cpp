// from server: 80% by colin
extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_004A5A70();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220(void*);

void __cdecl sub_007789E0()
{
    *(void**)0x892AB4 = (void*)0x79D8C8;
    sub_00725520((void*)0x8BE974, (void*)0x4A71A0);
    void* p = sub_004A5A70();
    void* q = sub_00407410(&p);
    sub_00407220(q);
}
