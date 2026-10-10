// from server: 84% by colin
struct seg_00770000
{
    void func_00777780();
};

extern "C" void __stdcall sub_00725520(void*, void*);
extern "C" void* __stdcall sub_0041FF40();
extern "C" void* __stdcall sub_00407410(void*);
extern "C" void __stdcall sub_00407220(void*);

void seg_00770000::func_00777780()
{
    *(int*)0x886368 = 0x788BDC;
    sub_00725520((void*)0x8BB4D4, (void*)0x4206A0);
    void* p = sub_0041FF40();
    void* q = sub_00407410(&p);
    sub_00407220(q);
}
