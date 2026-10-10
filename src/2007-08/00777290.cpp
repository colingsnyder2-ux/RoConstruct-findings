// from server: 80% by colin
extern "C" void __cdecl sub_00725520(int, int);
extern "C" void* __cdecl sub_004025a0();
extern "C" void __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220();

void func_00777290()
{
    *(int*)0x881360 = 0x78508c;
    sub_00725520(0x403590, 0x8baebc);
    void* p = sub_004025a0();
    sub_00407410(&p);
    sub_00407220();
}
