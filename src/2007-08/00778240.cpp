// from server: 80% by colin
struct seg_00770000
{
    void func_00778240();
};

extern "C" void __stdcall sub_00725520(void*, void*);
extern "C" void* __stdcall sub_00487070();
extern "C" void __stdcall sub_00407410(void*);
extern "C" void __stdcall sub_00407220();

void seg_00770000::func_00778240()
{
    *(int*)0x88e314 = 0x79b068;
    sub_00725520((void*)0x8bdcb0, (void*)0x487980);
    void* p = sub_00487070();
    sub_00407410(&p);
    sub_00407220();
}
