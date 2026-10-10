// from server: 80% by colin
struct seg_00770000_007775d0
{
    void func_007775d0();
};

extern "C" void __stdcall sub_00725520(void*, void*);
extern "C" void* __stdcall sub_0041bf50();
extern "C" void __stdcall sub_00407410(void*);
extern "C" void __stdcall sub_00407220();

void seg_00770000_007775d0::func_007775d0()
{
    *(int*)0x884a50 = 0x787aa0;
    sub_00725520((void*)0x41c120, (void*)0x8bb484);
    void* p = sub_0041bf50();
    sub_00407410(&p);
    sub_00407220();
}
