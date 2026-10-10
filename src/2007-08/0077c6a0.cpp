// from server: 82% by colin
struct seg_00770000
{
    void func_0077c6a0();
};

extern "C" void __stdcall sub_725520(int, int);
extern "C" void* __cdecl sub_5f0690();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __stdcall sub_407220(void*);

void seg_00770000::func_0077c6a0()
{
    *(int*)0x8b3ac8 = 0x7c086c;
    sub_725520(0x5f0c50, 0x8c77f4);
    void* p = sub_5f0690();
    void* q = sub_407410(&p);
    sub_407220(q);
}
