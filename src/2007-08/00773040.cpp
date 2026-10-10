// from server: 81% by colin
struct seg_00770000 {
    void func();
};

extern "C" void __cdecl sub_725520(int, int);
extern "C" int __cdecl sub_58dad0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(int);

void seg_00770000::func()
{
    int local;
    sub_725520(0x58ddf0, 0x8c37dc);
    local = sub_58dad0();
    void* p = sub_407410(&local);
    sub_4339d0();
    *(int*)p = 0x8a4528;
    sub_630d23(0x77ac40);
}
