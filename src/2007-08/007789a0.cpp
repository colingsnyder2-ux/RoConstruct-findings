// from server: 84% by colin
extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __stdcall sub_4A5AF0();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_407220(void*);

void __stdcall sub_7789A0()
{
    *(void**)0x892AB8 = (void*)0x79D8E4;
    sub_725520((void*)0x8BE978, (void*)0x4A71B0);
    void* p = sub_4A5AF0();
    void* q = sub_407410(&p);
    sub_407220(q);
}
