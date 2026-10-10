// from server: 80% by colin
extern "C" void __cdecl sub_00725520(int, int);
extern "C" int __cdecl sub_004871F0();
extern "C" void __cdecl sub_00407410(int*);
extern "C" void __cdecl sub_00407220();

void sub_00778180()
{
    int local;
    *(int*)0x88E320 = 0x79B0BC;
    sub_00725520(0x4879B0, 0x8BDCBC);
    local = sub_004871F0();
    sub_00407410(&local);
    sub_00407220();
}
