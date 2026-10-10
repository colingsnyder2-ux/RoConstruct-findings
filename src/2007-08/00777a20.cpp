// from server: 80% by colin
struct seg_00770000
{
    void func_00777a20();
};

extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_00438f20();
extern "C" void __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220();

void seg_00770000::func_00777a20()
{
    *(void**)0x887ea4 = (void*)0x78e3b0;
    sub_00725520((void*)0x8bb97c, (void*)0x439830);
    void* p = sub_00438f20();
    sub_00407410(&p);
    sub_00407220();
}
