// from server: 81% by colin
extern "C" void __cdecl sub_725520(int, int);
extern "C" void* __cdecl sub_487170();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339D0();
extern "C" void __cdecl sub_630D23(int);

void sub_76EEE0()
{
    int local;
    sub_725520(0x8BDCB8, 0x4879A0);
    local = (int)sub_487170();
    void* p = sub_407410(&local);
    sub_4339D0();
    *(int*)p = 0x88E31C;
    sub_630D23(0x7781C0);
}
