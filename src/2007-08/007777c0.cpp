// from server: 80% by colin
extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_0041fec0();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220(void*);

void __cdecl sub_007777c0()
{
    *(int*)0x886364 = 0x788a4c;
    sub_00725520((void*)0x8bb4d0, (void*)0x420690);
    void* p = sub_0041fec0();
    void* q = sub_00407410(&p);
    sub_00407220(q);
}
